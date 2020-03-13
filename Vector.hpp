#pragma once
#include <iostream>

using namespace std;

template < class T >

class Vector{
    private:
        T comp_x, comp_y, comp_z;

    public:
        Vector();
        Vector(T x, T y,T z){
            comp_x = x;
            comp_y = y;
            comp_z = z;
        }
        T getX(){ return comp_x; }
        T getY(){ return comp_y; }
        T getZ(){ return comp_z; }
        Vector operator+ (Vector operando);
        Vector operator* (Vector operando);
        void printVector(){
            cout << "[" << comp_x << ", " << comp_y << ", " << comp_z << "]";
        }
};