#include <iostream>
#include <string>
#include "Problema5.h"
using namespace std;

void convertir(int numero, string &cadena) {
    cadena = "";
    if (numero == 0) {
        cadena = "0";
        return;
    }
    while (numero > 0) {
        char digito = '0' + (numero % 10);
        cadena = digito + cadena;
        numero /= 10;
    }
}

int Problema5() {
    int numero;
    cout << "Por favor, ingresa un numero: ";
    cin >> numero;

    string cadena;
    convertir(numero, cadena);
    cout << "El numero " << numero << " convertido a cadena es: " << cadena << endl;
    return 0;
}
