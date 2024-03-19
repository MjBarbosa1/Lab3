#include <iostream>
#include <cctype>
#include "funciones.h"

int problema6() {
    std::string entrada;
    std::cout << "Ingrese una cadena de caracteres: ";
    std::getline(std::cin, entrada);

    std::string salida;
    for (char c : entrada) {
        if (std::islower(c)) {
            salida += std::toupper(c);
        } else {
            salida += c;
        }
    }

    std::cout << "Original: " << entrada << ". En mayuscula: " << salida << std::endl;

    return 0;
}
