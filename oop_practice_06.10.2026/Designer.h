#pragma once
#include "Employee.h"

class Designer: public Employee
{
protected:
    int projects;
    double salary_per_project;
public:
    Designer(string name, int time_of_work, int projects, double salary_per_project);
    void Work() override;
    double GetSalary() override;
};
