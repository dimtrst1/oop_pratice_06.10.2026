#include "Programmer.h"
#include <iostream>
using namespace std;

Programmer::Programmer(string name, int time_of_work, int hours,  double salary_per_hour): Employee(name, time_of_work)
{
    this->hours = hours;
    this->salary_per_hour = salary_per_hour;
}

void Programmer::Work()
{
    cout << name << " writes code" << endl;
}

double Programmer::GetSalary()
{
    return hours * salary_per_hour;
}
