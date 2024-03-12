#include <iostream>
#include <string>
#include "Problema8.h"
using namespace std;

int obtenerLongitud(string str) {
    int longitud = 0;
    while (str[longitud] != '\0') {
        longitud++;
    }
    return longitud;
}

void separarNumeros(string str) {
    string texto = "";
    string numero = "";
    int longitud = obtenerLongitud(str);

    for (int i = 0; i < longitud; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            numero += str[i];
        } else {
            texto += str[i];
        }
    }

    cout << "Original: " << str << ".\n";
    cout << "Texto: " << texto << ". Numero: " << numero << ".\n";
}

int Problema8(){
    string str;
    cout << "Ingrese una cadena de caracteres: ";
    cin >> str;
    separarNumeros(str);
    return 0;
}
