#include "Racional.hpp"
#include <string>

using namespace std;

Racional::Racional(){

}

Racional::Racional(int n, int d){
    num = n;
    den = d;
}

int Racional::getNum(){
    return num;
}

int Racional::getDen(){
    return den;

}

Racional Racional::suma(Racional r1, Racional r2){
    int nNum, nDen;
    nNum = (r1.getNum() * r2.getDen()) + (r1.getDen() * r2.getNum());
    nDen = r1.getDen() * r2.getDen();
    Racional resul(nNum, nDen);
}

Racional Racional::mult(Racional r1, Racional r2){
    int nNum, nDen;
    nNum = r1.getNum() * r1.getNum();
    nDen = r1.getDen() * r2.getDen();
    Racional resul(nNum, nDen);
}

void Racional::simplificar(){

}

string Racional::toString(){
    string salida = to_string(num) + "/" + to_string(den);
    return salida;
}