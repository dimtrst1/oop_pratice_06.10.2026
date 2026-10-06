#include "Designer.h"
#include <iostream>
using namespace std;

Designer::Designer(string name, int time_of_work, int projects, double salary_per_project): Employee(name, time_of_work)
{
    this->projects = projects;
    this->salary_per_project = salary_per_project;
}

void Designer::Work()
{
    cout << name << " create design" << endl;
}

double Designer::GetSalary()
{
    return projects * salary_per_project;
}
