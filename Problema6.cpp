#include <iostream>
#include "Problema6.h"
using namespace std;

// Función para convertir minúsculas a mayúsculas
void convertirAMayusculas(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        switch(str[i]) {
            case 'a': str[i] = 'A'; break;
            case 'b': str[i] = 'B'; break;
            case 'c': str[i] = 'C'; break;
            case 'd': str[i] = 'D'; break;
            case 'e': str[i] = 'E'; break;
            case 'f': str[i] = 'F'; break;
            case 'g': str[i] = 'G'; break;
            case 'h': str[i] = 'H'; break;
            case 'i': str[i] = 'I'; break;
            case 'j': str[i] = 'J'; break;
            case 'k': str[i] = 'K'; break;
            case 'l': str[i] = 'L'; break;
            case 'm': str[i] = 'M'; break;
            case 'n': str[i] = 'N'; break;
            case 'o': str[i] = 'O'; break;
            case 'p': str[i] = 'P'; break;
            case 'q': str[i] = 'Q'; break;
            case 'r': str[i] = 'R'; break;
            case 's': str[i] = 'S'; break;
            case 't': str[i] = 'T'; break;
            case 'u': str[i] = 'U'; break;
            case 'v': str[i] = 'V'; break;
            case 'w': str[i] = 'W'; break;
            case 'x': str[i] = 'X'; break;
            case 'y': str[i] = 'Y'; break;
            case 'z': str[i] = 'Z'; break;
            default: break;
        }
        i++;
    }
}

int Problema6() {
    char str[100];
    cout << "Introduce una cadena: ";
    char c;
    int i = 0;
    while ((c = cin.get()) != '\n' && i < 100) {
        str[i++] = c;
    }
    str[i] = '\0'; // termina la cadena con un caracter nulo
    cout << "Original: " << str << endl;
    convertirAMayusculas(str);
    cout << "En mayuscula: " << str << endl;
    return 0;
}
