#include <iostream>
#include <vector>
#include"Problema16.h"
using namespace std;

int Caminos(int n) {
    vector<vector<int>> matriz(n+1,vector<int>(n+1, 0));

    for (int i = 0; i <= n; i++) {
        matriz[i][0] = 1;
        matriz[0][i] = 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            matriz[i][j] = matriz[i-1][j] + matriz[i][j-1];
        }
    }

    return matriz[n][n];
}

int Problema16() {
    int n;
    cout << "Introduce el valor de n para una malla nxn: ";
    cin >> n;

    int caminos = Caminos(n);

    cout << "Para una malla de " << n << "x" << n
              << " puntos hay " << caminos << " caminos."
              << endl;

    return 0;
}
