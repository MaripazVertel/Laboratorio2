#include<iostream>
#include "Problema15.h"
using namespace std;

struct Rectangulo {
    int x, y, ancho, alto;
};

Rectangulo leerRectangulo() {
    Rectangulo r;
    cout << "Ingrese x: ";
    cin >> r.x;
    cout << "Ingrese y: ";
    cin >> r.y;
    cout << "Ingrese ancho: ";
    cin >> r.ancho;
    cout << "Ingrese alto: ";
    cin >> r.alto;
    return r;
}

Rectangulo interseccion(const Rectangulo& A, const Rectangulo& B) {
    int x, y, ancho, alto;

    if (A.x > B.x) {
        x = A.x;
    } else {
        x = B.x;
    }

    if (A.y > B.y) {
        y = A.y;
    } else {
        y = B.y;
    }

    if (A.x + A.ancho < B.x + B.ancho) {
        ancho = A.x + A.ancho - x;
    } else {
        ancho = B.x + B.ancho - x;
    }

    if (A.y + A.alto < B.y + B.alto) {
        alto = A.y + A.alto - y;
    } else {
        alto = B.y + B.alto - y;
    }

    if (ancho < 0 || alto < 0) {
        cout << "No hay interseccion." << endl;
        return {0, 0, 0, 0};
    }

    return {x, y, ancho, alto};
}

int Problema15() {
    cout << "Ingrese los datos del primer rectangulo:\n";
    Rectangulo A = leerRectangulo();
    cout << "Ingrese los datos del segundo rectangulo:\n";
    Rectangulo B = leerRectangulo();

    Rectangulo C = interseccion(A,B);

    if(C.ancho != 0 && C.alto != 0){
        cout << "La interseccion es: {"
                  << C.x << ", "
                  << C.y << ", "
                  << C.ancho << ", "
                  << C.alto
                  <<" }"
                  <<endl;
    }
}
