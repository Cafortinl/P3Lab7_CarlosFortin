#include <iostream>

using namespace std;

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
    }while(opcion != 0);
    return 0;
}