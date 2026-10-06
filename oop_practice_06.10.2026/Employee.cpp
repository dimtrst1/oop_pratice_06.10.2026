#include "Employee.h"

Employee::Employee(string name, int time_of_work)
{
    this->name = name;
    this->time_of_work = time_of_work;
}

void Employee::Show()
{
    cout << "Name is: " << name << endl;
    cout << "Time of work is: " << time_of_work << endl;
}



