#include<iostream>
using namespace std;

int Problema1(){
    int dinero[10] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    int cantidad, faltante, billetes[10];

    cout << "Ingrese la cantidad de dinero: ";
    cin >> cantidad;
    faltante = cantidad;

    for (int i = 0; i < 10; ++i) {
        billetes[i] = faltante / dinero[i];
        faltante = faltante % dinero[i];
    }

    for (int i = 0; i < 10; ++i) {
        cout << dinero[i] << ": " << billetes[i] << endl;
    }

    if (faltante > 0) {
        cout << "Faltante: " << faltante << endl;
    }

    return 0;
}
