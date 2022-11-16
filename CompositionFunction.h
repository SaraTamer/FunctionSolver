#ifndef FUNCTIONSOLVER_COMPOSITIONFUNCTION_H
#define FUNCTIONSOLVER_COMPOSITIONFUNCTION_H

#include "Function.h"


class CompositionFunction : public Function
{
private:
    function<double(double)> fun1;
    function<double(double) > fun2;
public:
    CompositionFunction(const function<double(double )> &fun1, const function<double(double )> &fun2);
    double evaluateAt(double value);
};

#endif //FUNCTIONSOLVER_COMPOSITIONFUNCTION_H
