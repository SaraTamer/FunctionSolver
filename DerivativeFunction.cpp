#include "DerivativeFunction.h"

DerivativeFunction :: DerivativeFunction(function<double(double)> fun , double del)
{
    this->fun = fun;
    this->del = del;
}
double DerivativeFunction :: evaluateAt(double value)
{
    return (fun(value + del)- fun(value - del)) / (2*del);
}