#pragma once

class Racional{
    private:
        int num, den;
    public:
        Racional();
        Racional(int n, int d);
        int getNum();
        int getDen();
        Racional operator+ (Racional operando);
        Racional operator* (Racional operando);
};