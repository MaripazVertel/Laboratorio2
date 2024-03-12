#include <iostream>
#include "Problema10.h"
using namespace std;


int CalLongitud(char str[]) {
    int longitud = 0;
    while (str[longitud] != '\0') {
        longitud++;
    }
    return longitud;
}

int valor(char romano) {
    switch (romano) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int convertirAnumero(char romano[]) {
    int arabic = 0;
    int longitud = CalLongitud(romano);
    for (int i = 0; i < longitud; i++) {
        int value1 = valor(romano[i]);
        int value2 = 0;
        if (i + 1 < longitud) {
            value2 = valor(romano[i+1]);
        }
        if (value1 >= value2) {
            arabic += value1;
        } else {
            arabic -= value1;
        }
    }
    return arabic;
}

int Problema10() {
    char romano[1000];
    cout << "Ingrese un numero romano: ";
    cin >> romano;
    int arabic = convertirAnumero(romano);
    cout << "El numero ingresado fue: " << romano << " Que corresponde a: " << arabic << endl;
    return 0;
}

