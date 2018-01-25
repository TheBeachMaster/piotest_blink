#ifndef CALC_H
#define CALC_H

class Calculator
{
public:
    Calculator(){};
    int add(int a, int b);
    int multiply(int a, int b);
    int subtract(int a, int b);
    int divide(int a, int b);
    int square(int a);
    ~Calculator();
};

#endif
