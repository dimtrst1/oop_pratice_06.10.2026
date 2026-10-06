#include "Manager.h"
#include <iostream>
using namespace std;

Manager::Manager(string name, int time_of_work, double salary):Employee(name, time_of_work)
{
    this->salary = salary;
}

void Manager::Work()
{
    cout << name << " manages employee" << endl;
}

double Manager::GetSalary()
{
    return salary;
}
