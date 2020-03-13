#include "Complejo.hpp"
#include <string>
#include <iostream>

using namespace std;

Complejo::Complejo(){
}

Complejo::Complejo(int r, int i){
    real = r;
    imag = i;
}

int Complejo::getReal(){
    return real;
}

int Complejo::getImg(){
    return imag;
}

Complejo Complejo::suma(Complejo r1, Complejo r2){
    //cout << "entro c" << endl;
    int nReal, nImag;
    nReal = r1.getReal() + r2.getReal();
    nImag = r1.getImg() + r2.getImg();
    Complejo resul(nReal, nImag);
    return resul;
}

Complejo Complejo::mult(Complejo r1, Complejo r2){
    //cout << "entro c" << endl;
    int nReal, nImag;
    nReal = (r1.getReal()*r2.getReal()) + (-1*(r1.getImg() * r2.getImg()));
    nImag = (r1.getReal() * r2.getImg()) + (r1.getImg() * r2.getReal());
    Complejo resul(nReal,nImag);
    return resul;
}

string Complejo::toString(){
    string salida;
    (imag > 0 ? salida = to_string(real)+ "+" +to_string(imag)+"i" : salida = to_string(real)+to_string(imag)+"i");
    return salida;
}