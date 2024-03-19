#include <iostream>
#include <string>
#include <cctype>
#include"funciones.h"

int problema8() {
    std::string entrada;
    std::cout << "Ingresa una cadena de caracteres: ";
    std::cin >> entrada;

    std::string texto;
    std::string numeros;
    for (char c : entrada) {
        if (std::isdigit(c)) {
            numeros += c;
        } else {
            texto += c;
        }
    }

    std::cout << "Original: " << entrada << ". Texto: " << texto << ". Numero: " << numeros << std::endl;

    return 0;
}
