#include<iostream>
#include "Problema4.h"
using namespace std;

int convertir(char cadena[]) {
    int longitud = 0;
    while(cadena[longitud] != '\0') {
        longitud++;
    }

    int numero = 0;
    for(int i = 0; i < longitud; i++) {
        int potenciaDiez = 1;
        for(int j = 0; j < longitud - i - 1; j++) {
            potenciaDiez *= 10;
        }
        numero += (cadena[i] - '0') * potenciaDiez;
    }

    return numero;
}

int Problema4(){
    //char cadena[] = "12345";
    char cadena[100];
    cout << "Por favor, ingresa la cadena: ";
    cin >> cadena;
    int numero = convertir(cadena);


    cout << "La cadena \"" << cadena << "\" convertida a numero es: " << numero << endl;

    return 0;
}


