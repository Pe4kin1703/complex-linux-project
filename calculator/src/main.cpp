#include <iostream>
#include <map>
#include <functional>
#include <cmath>
#include "calc.hpp"

using namespace std;

map<int, function<void()> > commandMap;

template<typename... Args>
void fillValues(Args&... args)
{
    auto input = [](auto& arg) {
        while (true) 
        {
            std::cout << "Enter a value: ";
            if (std::cin >> arg) 
            {
                break; 
            } else 
            {
                std::cin.clear(); 
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                std::cout << "Invalid input. Please enter a valid value." << std::endl;
            }
        }
    };

    (input(args), ...);
}


void processPlus()
{
    double x, y;
    fillValues(x,y);
    double result = execPlus(x,y);
    cout << "Result of " << x << " + " << y << " = " << result << endl;
}

void processMinus()
{
    double x, y;
    fillValues(x,y);
    double result = execMinus(x,y);
    cout << "Result of " << x << " - " << y << " = " << result << endl;    
}

void processMultiply()
{
    double x, y;
    fillValues(x,y);
    double result = execMultiply(x,y);
    cout << "Result of " << x << " * " << y << " = " << result <<endl;    
}

void processFraction()
{
    double x, y;
    fillValues(x,y);
    double result = execFraction(x,y);
    cout << "Result of " << x << " / " << y << " = " << result <<endl;    
}

void processFactorial()
{
    double x;
    fillValues(x);
    double result = execFactorial(x);
    cout<< "Result of "<<x<<"!= "<< result<<endl;
}

void processSqrt()
{
    double x;
    fillValues(x);
    double result = execSqrt(x);
    cout<< "Result of sqrt("<<x<<")= "<<result<<endl;
}


void initCommandMap()
{
    commandMap[1] = processPlus;
    commandMap[2] = processMinus;
    commandMap[3] = processMultiply;
    commandMap[4] = processFraction;
    commandMap[5] = processFactorial;
    commandMap[6] = processSqrt;
}

void processInput()
{
    double x, y = 0.0;
    int i = INT_MIN;
    cout<<"Please choose the operation:\n \
            1) +\n \
            2) -\n \
            3) *\n \
            4) /\n \
            5) factorial\n\
            6) sqrt\n\
            Choose your option.\n";
    fillValues(i);
    cout << "Option that was choosen is " << i << endl;
    try
    {
        cout<< "Please enter the numbers..\n";
        commandMap[i]();
    }
    catch(std::exception &e)
    {
        cout << "Error: " << e.what() << std::endl;
    }

}

int main()
{
    initCommandMap();
    processInput();

}