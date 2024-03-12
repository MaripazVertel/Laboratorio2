#include <iostream>
using namespace std;

int Problema3() {
    char cadena1[100];
    char cadena2[100];
    int i = 0;

    cout << "Ingrese la primera cadena: ";
    cin >> cadena1;

    cout << "Ingrese la segunda cadena: ";
    cin >> cadena2;

    // Comprobar si las cadenas son iguales
    while (cadena1[i] != '\0' && cadena2[i] != '\0') {
        if (cadena1[i] != cadena2[i]) {
            cout << "falso" << endl;
            return 0;
        }
        i++;
    }

    // Si una cadena es más larga que la otra, no son iguales
    if (cadena1[i] != cadena2[i]) {
        cout << "falso" << endl;
        return 0;
    }

    cout << "verdadero" << endl;
    return 0;
}
