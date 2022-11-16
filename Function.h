
#ifndef FUNCTIONSOLVER_FUNCTION_H
#define FUNCTIONSOLVER_FUNCTION_H

#include <iostream>
#include <functional>
using namespace std;

class Function
{
public:
    virtual double evaluateAt(double value) = 0;
};

#endif //FUNCTIONSOLVER_FUNCTION_H
