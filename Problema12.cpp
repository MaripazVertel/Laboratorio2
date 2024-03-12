#include <iostream>
#include "Problema12.h"
#include <vector>
using namespace std;

// Función para imprimir la matriz
void imprimirMatriz(vector<vector<int>>& matriz) {
    for (int i = 0; i < matriz.size(); i++) {
        for (int j = 0; j < matriz[i].size(); j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Función para verificar si la matriz es un cuadrado mágico
bool esCuadradoMagico(vector<vector<int>>& matriz) {
    int orden = matriz.size();
    int sumaDiagonal1 = 0, sumaDiagonal2 = 0;

    // Calcular sumas de las dos diagonales principales
    for (int i = 0; i < orden; i++) {
        sumaDiagonal1 += matriz[i][i];
        sumaDiagonal2 += matriz[i][orden - i - 1];
    }

    if (sumaDiagonal1 != sumaDiagonal2) return false;

    // Verificar sumas de filas y columnas
    for (int i = 0; i < orden; i++) {
        int sumaFila = 0, sumaColumna = 0;

        for (int j = 0; j < orden; j++) {
            sumaFila +=matriz[i][j];
            sumaColumna +=matriz[j][i];
        }

        if(sumaFila !=sumaDiagonal1 ||sumaColumna !=sumaDiagonal1)
            return false;
     }

     return true;
}

int Problema12() {
   int n;

   cout << "Ingrese el orden de la matrix: ";
   cin >> n;

   vector<vector<int>> matrix(n, vector<int>(n));

   cout << "Ingrese los elementos de la matrix:" << endl;
   for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
           cin >> matrix[i][j];

   cout << "Matriz ingresada:" << endl;
   imprimirMatriz(matrix);

   if(esCuadradoMagico(matrix))
       cout<<"La matriz es un cuadrado magico."<<endl;
   else
       cout<<"La matriz no es un cuadrado magico."<<endl;

   return 0;
}
