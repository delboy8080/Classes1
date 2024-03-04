//
// Created by floodd on 04/03/2024.
//

#ifndef CLASSES1_COMPLEXNUMBER_H
#define CLASSES1_COMPLEXNUMBER_H


class ComplexNumber{
    int real;
    int imaginary;
public:
    ComplexNumber(int r = 1, int i = 1);

    int getReal();
    int getImaginary();
    void setReal(int r);
    void setImaginary(int i);

};


#endif //CLASSES1_COMPLEXNUMBER_H
