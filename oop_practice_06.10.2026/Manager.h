#pragma once
#include "Employee.h"

class Manager: public Employee
{
protected:
    double salary;
public:
    Manager(string name, int time_of_work, double salary);
    void Work() override;
    double GetSalary() override;
    
};
