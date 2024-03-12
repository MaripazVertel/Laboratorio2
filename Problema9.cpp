#include <iostream>
#include "Problema9.h"
using namespace std;

int Problema9() {
    int n;
    char str[100];
    cout << "Ingrese el numero n: ";
    cin >> n;
    cout << "Ingrese la cadena de caracteres numericos: ";
    cin >> str;

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    while (len % n != 0) {
        for (int i = len; i >= 0; i--) {
            str[i + 1] = str[i];
        }
        str[0] = '0';
        len++;
    }

    int sum = 0;
    for (int i = 0; i < len; i += n) {
        int number = 0;
        for (int j = 0; j < n; j++) {
            number = number * 10 + (str[i + j] - '0');
        }
        sum += number;
    }

    cout << "Original: " << str << ". Suma: " << sum << endl;

    return 0;
}
