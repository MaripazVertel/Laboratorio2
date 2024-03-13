#include<iostream>
#include "Problema2.h"
using namespace std;
#include <ctime>

int Problema2() {
    srand(time(0));
    const int arreglo = 200;
    char arr[arreglo];
    int frecuencia[26] = {0};

    // Generar y imprimir el arreglo
    for(int i = 0; i < arreglo; i++) {
        arr[i] = 'A' + rand() % 26;
        cout << arr[i];
    }
    cout << endl;

    // Calcular la frecuencia de cada letra
    for(int i = 0; i < arreglo; i++) {
        frecuencia[arr[i] - 'A']++;
    }

    // Imprimir la frecuencia de cada letra
    for(int i = 0; i < 26; i++) {
        if(frecuencia[i] > 0) {
            cout << char(i + 'A') << ": " << frecuencia[i] << endl;
        }
    }

    return 0;
}

