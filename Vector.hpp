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
        Vector(){}
        Vector(T x, T y,T z){
            comp_x = x;
            comp_y = y;
            comp_z = z;
        }
        T getX(){ return comp_x; }
        T getY(){ return comp_y; }
        T getZ(){ return comp_z; }
        Vector operator+ (Vector<T> operando){
            T x,y,z;
            x = (*this).comp_x + operando.comp_x;
            y = (*this).comp_y + operando.comp_y;
            z = (*this).comp_z + operando.comp_z;
            Vector<T> temp(x,y,z);
            return temp;
        }
        Vector operator* (Vector<T> operando){
            cout << "entro t" << endl;
            T x,y,z;
            x = (*this).comp_x * operando.comp_x;
            y = (*this).comp_y * operando.comp_y;
            z = (*this).comp_z * operando.comp_z;
            Vector<T> temp(x,y,z);
            return temp;
        }
        string toString(){
            string salida = "[" + comp_x.toString() + ", " + comp_y.toString() + ", " + comp_z.toString() + "]";
            return salida;
        }
};