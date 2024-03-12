#include <iostream>
#include "Problema14.h"
using namespace std;

const int tam = 5;

void llenarMatriz(int matriz[tam][tam]) {
    int contador = 1;
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            matriz[i][j] = contador++;
        }
    }
}

void imprimirMatriz(int matriz[tam][tam]) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void rotar90(int matriz[tam][tam]) {
    int temp[tam][tam];
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam; ++j) {
            temp[j][tam-1-i] = matriz[i][j];
        }
    }
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam; ++j) {
            matriz[i][j] = temp[i][j];
        }
    }
}

int Problema14() {

    int matrix[5][5];

    llenarMatriz(matrix);

    cout << "Matriz original:" << endl;
    imprimirMatriz(matrix);

   // Rotaciones
   cout << "Rotada a los 90 grados:" << endl;
   rotar90(matrix);
   imprimirMatriz(matrix);

   cout << "Rotada a los 180 grados:" << endl;
   rotar90(matrix);
   imprimirMatriz(matrix);

   cout << "Rotada a los 270 grados:" << endl;
   rotar90(matrix);
   imprimirMatriz(matrix);
}
