#include <iostream>
#include "Programmer.h"
#include "Designer.h"
#include "Manager.h"
using namespace std;

int main()
{
    Employee* group[3];
    
    group[0] = new Programmer("Sanya", 5, 180, 50);
    group[1] = new Designer("Alina", 3, 10, 200);
    group[2] = new Manager("Aleksey", 10, 8000);
    
    for (int i = 0; i < 3; i++)
    {
        group[i]->Show();
    }
    
    cout << endl;
    
    for (int i = 0; i < 3; i++)
    {
        group[i]->Work();
    }
    
    double salary_of_all = 0;
    
    for (int i = 0; i < 3; i++)
    {
        salary_of_all += group[i]->GetSalary();
    }
    
    cout << endl;
    
    cout << "Salary of all workers is: " << salary_of_all << endl;
    
    for (int i = 0; i < 3; i++)
    {
        delete group[i];
    }
}
