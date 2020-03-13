#include <iostream>
#include <vector>
#include "Vector.hpp"
#include "Complejo.hpp"
#include "Racional.hpp"

using namespace std;

vector<Vector<Racional>> racionales;
vector<Vector<Complejo>> complejos;

void opciones3(int x){
    switch(x){
        case 1:{
            cout << "Racionales" << endl;
            for(int i = 0;i < racionales.size();i++){
                 cout << i << " - " << racionales[i].toString() << endl;
            }
            break;
        }

        case 2:{
            cout << "Complejos" << endl;
            for(int i = 0;i < complejos.size();i++){
                 cout << i << " - " << complejos[i].toString() << endl;
            }
            break;
            break;
        }

        default:{
            cout << "La opcion ingresada no es valida" << endl;
            break;
        }
    }
}

void opciones2(int x){
    switch(x){
        case 1:{
            int nX,dX,nY,dY,nZ,dZ;
            cout << "Ingrese el numerador del elemento x: " << endl;
            cin >> nX;
            cout << "Ingrese el denominador del elemento x: " << endl;
            cin >> dX;
            cout << "Ingrese el numerador del elemento y: " << endl;
            cin >> nY;
            cout << "Ingrese el denominador del elemento y: " << endl;
            cin >> dY;
            cout << "Ingrese el numerador del elemento z: " << endl;
            cin >> nZ;
            cout << "Ingrese el denominador del elemento z: " << endl;
            cin >> dZ;
            Racional x(nX,dX);
            Racional y(nY,dY);
            Racional z(nZ,dZ);
            Vector<Racional> temp(x,y,z);
            racionales.push_back(temp);
            break;
        }

        case 2:{
            int rX,iX,rY,iY,rZ,iZ;
            cout << "Ingrese el elemento real del elemento x: ";
            cin >> rX;
            cout << "Ingrese el elemento imaginario del elemento x: ";
            cin >> iX;
            cout << "Ingrese el elemento real del elemento y: ";
            cin >> rY;
            cout << "Ingrese el elemento imaginario del elemento y: ";
            cin >> iY;
            cout << "Ingrese el elemento real del elemento z: ";
            cin >> rZ;
            cout << "Ingrese el elemento imaginario del elemento z: ";
            cin >> iZ;
            Complejo x(rX,iX);
            Complejo y(rY,iY);
            Complejo z(rZ,iZ);
            Vector<Complejo> temp(x,y,z);
            complejos.push_back(temp);
            break;
        }

        default:{
            cout << "La opcion ingresada no es valida" << endl;
            break;
        }
    }
}

void opciones1(int x){
    switch(x){
        case 1:{
            int opcion;
            cout << "Ingresar Vector" << endl;
            cout << "1. Racional" << endl;
            cout << "2. Complejo" << endl;
            cin >> opcion;
            cout << endl;
            opciones2(opcion);
            cout << endl;
            break;
        }

        case 2:{
            int opcion;
            cout << "Listar Vectores" << endl;

            cout << "Racionales" << endl;
            if(!racionales.empty()){
                for(int i = 0;i < racionales.size();i++){
                    cout << i << " - " << racionales[i].toString() << endl;
                }
            }else{
                cout << "No hay racionales ingresados actualmente" << endl;
            }
            cout << endl;

            cout << "Complejos" << endl;
            if(!complejos.empty()){
                for(int i = 0;i < complejos.size();i++){
                    cout << i << " - " << complejos[i].toString() << endl;
                }
            }else{
                cout << "No hay complejos ingresados actualmente" << endl;
            }
            cout << endl;
            break;
        }

        case 3:{
            break;
        }

        case 0:{
            break;
        }

        default:{
            cout << "La opcion ingresada no es valida" << endl;
            break;
        }
    }
}

void mostrarMenu(){
    cout << "----------Menu----------" << endl;
    cout << "1. Ingresar vector" << endl;
    cout << "2. Listar vectores" << endl;
    cout << "3. Operar vectores" << endl;
    cout << "0. Salir" << endl;
}

int main(){
    int opcion = 0;
    do{
        mostrarMenu();
        cin >> opcion;
        opciones1(opcion);
    }while(opcion != 0);
    cout << "Fin del programa" << endl;
    return 0;
}