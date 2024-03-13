#include<iostream>
#include "Problema18.h"
using namespace std;
#include <iostream>

int Problema18() {
    int n;
    cout << "Introduce el numero n: ";
    cin >> n;

    // Inicializar los dígitos y los factores
    int digits[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int factorials[10];
    factorials[0] = 1;
    for(int i = 1; i < 10; i++) {
        factorials[i] = i * factorials[i - 1];
    }

    // Calcular la permutación
    n--;
    for(int i = 9; i > 0; i--) {
        int j = n / factorials[i];
        n %= factorials[i];

        // Imprimir el dígito j
        cout << digits[j];

        // Mover los dígitos a la izquierda
        for(int k = j; k < i; k++) {
            digits[k] = digits[k + 1];
        }
    }
    cout << digits[0] << std::endl;

    return 0;
}
