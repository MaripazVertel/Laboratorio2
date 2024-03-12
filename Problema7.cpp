#include <iostream>
#include <cstring>
#include "Problema7.h"
using namespace std;

void eliminarRepe(char cadena[]) {
    int longitud = strlen(cadena);
    cout << "Original: " << cadena << ". Sin repetidos: ";

    for(int i = 0; i < longitud; i++) {
        bool repetido = false;
        for(int j = 0; j < i; j++) {
            if(cadena[i] == cadena[j]) {
                repetido = true;
                break;
            }
        }
        if(!repetido) {
            cout << cadena[i];
        }
    }
    cout << endl;
}

int Problema7() {
    char cadena[100];
    cout << "Por favor, ingresa una cadena: ";
    cin.getline(cadena, 100);
    eliminarRepe(cadena);
    return 0;
}
