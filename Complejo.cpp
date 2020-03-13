#include "Complejo.hpp"

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
    int nReal, nImag;
    nReal = r1.getReal() + r2.getReal();
    nImag = r1.getImg() + r2.getImg();
    Complejo resul(nReal, nImag);
    return resul;
}

Complejo Complejo::mult(Complejo r1, Complejo r2){
    int nReal, nImag;
    nReal = (r1.getReal()*r2.getReal()) + (-1*(r1.getImg() * r2.getImg()));
    nImag = (r1.getReal() * r2.getImg()) + (r1.getImg() * r2.getReal());
    Complejo resul(nReal,nImag);
    return resul;
}