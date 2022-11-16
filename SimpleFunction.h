#ifndef FUNCTIONSOLVER_SIMPLEFUNCTION_H
#define FUNCTIONSOLVER_SIMPLEFUNCTION_H

#include "Function.h"
class SimpleFunction : public Function
{
private:
    function<double(double )> fun;
public:
    SimpleFunction(const function<double(double)> &fun);
    double evaluateAt(double value);
};

#endif //FUNCTIONSOLVER_SIMPLEFUNCTION_H
