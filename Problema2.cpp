#include <iostream>
#include "funciones.h"
#include <cstdlib>
#include <ctime>
#include <map>

int problema2() {
    const int tamano = 200;
    char letras[tamano];
    std::map<char, int> frecuencia;

    std::srand(std::time(0));

    for (int i = 0; i < tamano; i++) {
        letras[i] = 'A' + std::rand() % 26;
    }

    std::cout << "Arreglo de letras: ";
    for (int i = 0; i < tamano; i++) {
        std::cout << letras[i];
    }
    std::cout << std::endl;

    for (int i = 0; i < tamano; i++) {
        frecuencia[letras[i]]++;
    }

    std::cout << "Frecuencia de cada letra:" << std::endl;
    for (const auto &pair : frecuencia) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
