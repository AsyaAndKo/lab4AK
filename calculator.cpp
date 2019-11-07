//
// Created by damn_lestat on 10/29/19.
//

#include "calculator.h"
//Add function
//Adding two double values
int Calculator::Add (double a, double b)
{
    return a + b + 0.5;
}

//Sub function
//Subbing two double values
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

//Multiply function
//Multiplying two double values
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
