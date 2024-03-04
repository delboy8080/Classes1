//
// Created by floodd on 04/03/2024.
//

#include "ComplexNumber.h"
ComplexNumber::ComplexNumber(int r, int i)
{
    this->real = r;
    this->imaginary = i;
}
int ComplexNumber::getReal()
{
    return this->real;
}
int ComplexNumber::getImaginary()
{
    return this->imaginary;
}
void ComplexNumber::setReal(int r)
{
    this->real = r;
}
void ComplexNumber::setImaginary(int i)
{
    this->imaginary = i;
}