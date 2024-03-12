#include <iostream>
#include "Problema3.h"
using namespace std;

// Función para calcular la longitud de una cadena
int longitud(char* cadena) {
    int i = 0;
    while (cadena[i] != '\0') {
        i++;
    }
    return i;
}

// Función para comparar dos cadenas
bool sonIguales(char* cadena1, char* cadena2) {
    int i = 0;
    while (cadena1[i] != '\0' && cadena2[i] != '\0') {
        if (cadena1[i] != cadena2[i]) {
            return false;
        }
        i++;
    }
    if (cadena1[i] != cadena2[i]) {
        return false;
    }
    return true;
}

int Problema3() {
    char cadena1[100];
    char cadena2[100];

    cout << "Ingrese la primera cadena: ";
    cin >> cadena1;

    cout << "Ingrese la segunda cadena: ";
    cin >> cadena2;

    // Comprobar si las cadenas son iguales
    if (sonIguales(cadena1, cadena2)) {
        cout << "verdadero" << endl;
    } else {
        cout << "falso" << endl;
    }

    return 0;
}

