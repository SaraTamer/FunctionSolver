#ifndef FUNCTIONSOLVER_DERIVATIVEFUNCTION_H
#define FUNCTIONSOLVER_DERIVATIVEFUNCTION_H

#include "Function.h"

class DerivativeFunction : public Function
{
private:
    function<double(double)> fun;
    double del;
public:
    DerivativeFunction(function<double(double)> fun ,  double del);
    double evaluateAt(double value);
};


#endif //FUNCTIONSOLVER_DERIVATIVEFUNCTION_H
