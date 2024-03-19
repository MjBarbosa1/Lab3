#include <iostream>
#include"funciones.h"
using namespace std;

unsigned long long calcularCaminos(int n) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= (n + i);
        resultado /= i;
    }
    return resultado;
}

int main() {
    int n = 2;
    unsigned long long caminos = calcularCaminos(n);
    cout << "Para una malla de " << n << "x" << n << " puntos hay " << caminos << " caminos." << endl;

    return 0;
}
