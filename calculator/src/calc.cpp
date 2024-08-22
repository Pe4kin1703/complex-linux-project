#include <iostream>
#include "calc.hpp"

using namespace std;

double execPlus(double x, double y)
{
    cout << __FUNCTION__ << " x = " << x << ", y = " << y << endl;
    return x+y;
}

double execMinus(double x, double y)
{
    cout << __FUNCTION__ << " x = " << x << ", y = " << y << endl;
    return x-y;
}

double execMultiply(double x, double y)
{
    cout << __FUNCTION__ << " x = " << x << ", y = " << y << endl;
    return x*y;    
}

double execFraction(double x, double y)
{
    cout << __FUNCTION__ << " x = " << x << ", y = " << y << endl;
    if(y == 0) throw std::invalid_argument("Error: dividing by 0");
    return x/y;
}

double execFactorial(double x)
{

    cout << __FUNCTION__ << " x = " << x << endl;
    if (x < 0) 
    {
        throw std::invalid_argument("Factorial of negative number is undefined");
    }
    double result = 1;
    for (int i = 1; i <= x; ++i) {
        result *= i;
    }  
    return result; 
}

double execSqrt(double x)
{
    cout << __FUNCTION__ << " x = " << x << endl;
    if (x < 0) 
    {
        throw std::invalid_argument("Square root of negative number is undefined");
    }
    return sqrt(x);
}





