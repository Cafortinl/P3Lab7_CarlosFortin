#pragma once

class Racional{
    private:
        int num, den;
    public:
        Racional();
        Racional(int n, int d);
        int getNum();
        int getDen();
        Racional operator+ (Racional operando){
            return suma(*this, operando);
        }
        Racional operator* (Racional operando){
            return mult(*this, operando);
        }
        Racional suma(Racional r1, Racional r2);
        Racional mult(Racional r1, Racional r2);
        void simplificar();
};