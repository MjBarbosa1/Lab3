#include <iostream>
#include"funciones.h"
using namespace std;

struct Rectangulo {
    int x, y, ancho, altura;
};

void encontrarInterseccion(Rectangulo A, Rectangulo B, Rectangulo &C) {
    int x1 = max(A.x, B.x);
    int y1 = max(A.y, B.y);
    int x2 = min(A.x + A.ancho, B.x + B.ancho);
    int y2 = min(A.y + A.altura, B.y + B.altura);

    if (x1 < x2 && y1 < y2) {
        C = {x1, y1, x2 - x1, y2 - y1};
    } else {
        C = {0, 0, 0, 0}; // No hay intersección
    }
}

int main() {
    Rectangulo A = {0, 0, 8, 4};
    Rectangulo B = {5, 2, 6, 7};
    Rectangulo C;

    encontrarInterseccion(A, B, C);

    cout << "El rectángulo intersección C es el arreglo {" << C.x << ", " << C.y << ", " << C.ancho << ", " << C.altura << "}" << endl;

    return 0;
}
