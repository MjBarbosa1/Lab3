#include <iostream>
#include <string>
#include"funciones.h"

using namespace std;


void convertirNumeroACadena(int numero, string &cadena) {
    cadena = to_string(numero);
}

int problema5() {
    int numero = 123;
    string cadena;

    convertirNumeroACadena(numero, cadena);

    // Mostrar el resultado
    cout << "El numero " << numero << " convertido a cadena es: " << cadena << endl;

    return 0;
}
