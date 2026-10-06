#pragma once
#include "Employee.h"

class Programmer: public Employee
{
protected:
    double salary_per_hour;
    int hours;
public:
    Programmer(string name, int time_of_work, int hours, double salary_per_hour);
    void Work() override;
    double GetSalary() override;
};
