#pragma once

struct IWorker
{
    virtual void Work() = 0;
    virtual double GetSalary() = 0;
    virtual ~IWorker() = default;
};
