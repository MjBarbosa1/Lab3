#include <iostream>
#include <cstring>
#include"funciones.h"

using namespace std;

int sumarNumerosDeNCifras(int n, const char* cadena) {
    int suma = 0;
    int longitud = strlen(cadena);
    int indice = 0;

    int ceros = n - (longitud % n);
    if (ceros == n) ceros = 0;
    char numeroTemporal[10];

    while (ceros > 0) {
        numeroTemporal[indice++] = '0';
        ceros--;
    }

    for (int i = 0; i < longitud; ++i) {
        numeroTemporal[indice++] = cadena[i];
        if (indice == n) {
            numeroTemporal[indice] = '\0';
            suma += atoi(numeroTemporal);
            indice = 0;
        }
    }

    return suma;
}

int problema9() {
    int n;
    char cadena[100];

    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "Ingrese una cadena de caracteres numericos: ";
    cin >> cadena;

    cout << "Original: " << cadena << endl;
    int suma = sumarNumerosDeNCifras(n, cadena);
    cout << "Suma: " << suma << endl;

    return 0;
}
