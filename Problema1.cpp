#include <iostream>
#include"funciones.h"

using namespace std;

int problema1() {
    int cantidad;
    cout << "Ingrese la cantidad de dinero: ";
    cin >> cantidad;

    int denominaciones[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    int cantidad_denominaciones[10] = {0}; // Inicializamos todas las cantidades a 0

    for (int i = 0; i < 10; i++) {
        while (cantidad >= denominaciones[i]) {
            cantidad_denominaciones[i]++;
            cantidad -= denominaciones[i];
        }
    }

    cout << "Desglose de billetes y monedas:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << denominaciones[i] << ": " << cantidad_denominaciones[i] << endl;
    }

    cout << "Faltante: " << cantidad << endl;

    return 0;
}

