#include "Racional.hpp"
#include <string>
#include <iostream>

using namespace std;

Racional::Racional(){

}

Racional::Racional(int n, int d){
    num = n;
    den = d;
    simplificar();
}

int Racional::getNum(){
    return num;
}

int Racional::getDen(){
    return den;

}

Racional Racional::suma(Racional r1, Racional r2){
    //cout << "entro r" << endl;
    int nNum, nDen;
    nNum = (r1.getNum() * r2.getDen()) + (r1.getDen() * r2.getNum());
    nDen = r1.getDen() * r2.getDen();
    Racional resul(nNum, nDen);
    return resul;
}

Racional Racional::mult(Racional r1, Racional r2){
    //cout << "entro r" << endl;
    int nNum, nDen;
    nNum = r1.getNum() * r2.getNum();
    nDen = r1.getDen() * r2.getDen();
    Racional resul(nNum, nDen);
    return resul;
}

void Racional::simplificar(){
    int div = den;
    for(int i = 1;i <= den;i++){
        if(num % i == 0 && den % i == 0){
            num /= i;
            den /= i;
        }
    }
}

string Racional::toString(){
    string salida;
    (den == 1 ? salida = to_string(num) : salida = to_string(num) + "/" + to_string(den));
    return salida;
}