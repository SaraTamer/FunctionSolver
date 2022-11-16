#include "Function.h"
#include "SimpleFunction.h"
#include "CompositionFunction.h"
#include "DerivativeFunction.h"


double cube(double n)
{
    return (n * n * n);
}
double second(double d)
{
    return (d * d) - (5 * d) - 4;
}
double fun(double d)
{
    return (d * d) - (3 * d) - 4;
}
int main() {

    SimpleFunction s1(fun);
    CompositionFunction c1(cube , fun);
    DerivativeFunction d1(second , 3);
    cout << s1.evaluateAt(5) << '\n';
    cout << c1.evaluateAt(1) << '\n';
    cout << d1.evaluateAt(15) << '\n';


    return 0;
}
