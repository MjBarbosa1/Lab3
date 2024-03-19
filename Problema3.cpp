#include <iostream>
#include <cstring>
#include"funciones.h"

using namespace std;

bool compararCadenas(const char* cadena1, const char* cadena2) {
    int longitudCadena1 = strlen(cadena1);
    int longitudCadena2 = strlen(cadena2);

    if (longitudCadena1 != longitudCadena2) {
        return false;
    }

    for (int i = 0; i < longitudCadena1; ++i) {
        if (cadena1[i] != cadena2[i]) {
            return false;
        }
    }

    return true;
}
int problema3() {
    const char* cadena1 = "hola";
    const char* cadena2 = "hola";
    const char* cadena3 = "adios";

    cout << "Comparando cadena1 y cadena2: " << (compararCadenas(cadena1, cadena2) ? "Son iguales" : "Son diferentes") << endl;
    cout << "Comparando cadena1 y cadena3: " << (compararCadenas(cadena1, cadena3) ? "Son iguales" : "Son diferentes") << endl;

    return 0;
}
