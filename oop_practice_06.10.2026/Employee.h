#pragma once
#include "Iworker.h"
#include <iostream>
using namespace std;

class Employee: public IWorker
{
protected:
    string name;
    int time_of_work;
public:
    Employee(string name, int time_of_work);
    virtual void Show();
};
