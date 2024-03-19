#include <iostream>
#include <cstring>
#include "funciones.h"

using namespace std;

int convertirCadenaANumero(const char* cadena) {
    int longitud = strlen(cadena);
    int numero = 0;

    for (int i = 0; i < longitud; ++i) {
        if (cadena[i] >= '0' && cadena[i] <= '9') {
            numero = numero * 10 + (cadena[i] - '0');
        } else {
            cerr << "Error: La cadena contiene caracteres no numéricos." << endl;
            return 0;
        }
    }

    return numero;
}

int problema4() {
    const char* cadena1 = "123";
    const char* cadena2 = "456";
    const char* cadena3 = "abc";

    cout << "Cadena1 convertida a numero: " << convertirCadenaANumero(cadena1) << endl;
    cout << "Cadena2 convertida a numero: " << convertirCadenaANumero(cadena2) << endl;
    cout << "Cadena3 convertida a numero: " << convertirCadenaANumero(cadena3) << endl;

    return 0;
}
