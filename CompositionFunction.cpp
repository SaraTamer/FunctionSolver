#include "CompositionFunction.h"

CompositionFunction ::CompositionFunction(const function<double(double)> &fun1,const  function<double(double)> &fun2)
{
    this->fun1 = fun1;
    this-> fun2 = fun2;
}

double CompositionFunction :: evaluateAt(double value){
    return fun1(fun2(value));
}

