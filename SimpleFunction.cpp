#include "SimpleFunction.h"

SimpleFunction ::SimpleFunction(const function<double(double)> &fun)
{
    this->fun = fun;
}

double SimpleFunction::evaluateAt(double value)
{
    return fun(value);
}
