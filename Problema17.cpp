#include<iostream>
#include "Problema17.h"
using namespace std;

int sumaDivisores(int num) {
    int suma = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            if (i * i != num)
                suma = suma + i + num / i;
            else
                suma = suma + i;
        }
    }
    return suma;
}

bool sonAmigables(int a, int b) {
    return sumaDivisores(a) == b && sumaDivisores(b) == a;
}

int sumaAmigables(int limite) {
    int suma = 0;
    for (int i = 1; i < limite; i++) {
        for (int j = i+1; j < limite; j++) {
            if (sonAmigables(i, j)) {
                suma += i + j;
            }
        }
    }
    return suma;
}

int Problema17() {
    int num;
    std::cout << "Introduce un número: ";
    std::cin >> num;
    int suma = sumaAmigables(num);
    std::cout << "El resultado de la suma es: " << suma << std::endl;
    return 0;
}

