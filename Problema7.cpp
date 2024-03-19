#include <iostream>
#include <string>
#include "funciones.h"

int problema7() {
    std::string entrada;
    std::cout << "Ingresa una cadena de caracteres: ";
    std::cin >> entrada;

    std::string salida;
    for (char c : entrada) {
        if (salida.find(c) == std::string::npos) {
            salida += c;
        }
    }

    std::cout << "Cadena original: " << entrada << ". Sin caracteres repetidos: " << salida << std::endl;

    return 0;
}
