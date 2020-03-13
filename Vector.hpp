#pragma once
#include <iostream>
#include <deque>
#include <string>

using namespace std;

template < class T >

class Vector{
    private:
        T comp_x, comp_y, comp_z;

    public:
        deque<T> vect;
        Vector();
        Vector(T x, T y,T z){
            comp_x = x;
            comp_y = y;
            comp_z = z;
        }
        T getX(){ return comp_x; }
        T getY(){ return comp_y; }
        T getZ(){ return comp_z; }
        Vector operator+ (Vector operando){
            this + operando;
        }
        Vector operator* (Vector operando){
            this * operando;
        }
        string toString(){
            string salida = "[" + comp_x.toString() + ", " + comp_y.toString() + ", " + comp_z.toString() + "]";
            return salida;
        }
};