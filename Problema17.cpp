#include <iostream>
#include"funciones.h"
using namespace std;

int sumaDivisores(int n) {
    int suma = 1;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma;
}

int encontrarAmigables(int numero) {
    int resultado = 0;
    for (int a = 2; a < numero; ++a) {
        int b = sumaDivisores(a);
        if (a != b && sumaDivisores(b) == a) {
            resultado += (a + b);
        }
    }
    return resultado;
}

int problema17() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    int resultado = encontrarAmigables(numero);
    cout << "El resultado de la suma es: " << resultado << endl;

    return 0;
}
