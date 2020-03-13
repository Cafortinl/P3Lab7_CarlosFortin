#pragma once
#include <string>

using namespace std;

class Complejo{
    private:
        int real, imag;
    public:
        Complejo();
        Complejo(int r, int i);
        int getReal();
        int getImg();
        Complejo operator+ (Complejo operando){
            return suma(*this, operando);
        }
        Complejo operator* (Complejo operando){
            return mult(*this, operando);
        }
        Complejo suma(Complejo r1, Complejo r2);
        Complejo mult(Complejo r1, Complejo r2);
        string toString();
};