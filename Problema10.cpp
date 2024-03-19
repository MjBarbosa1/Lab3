#include <iostream>
#include <unordered_map>
#include"funciones.h"

int romanToArabic(std::string roman) {
    std::unordered_map<char, int> romanToArabicMap{
        {'M', 1000},
        {'D', 500},
        {'C', 100},
        {'L', 50},
        {'X', 10},
        {'V', 5},
        {'I', 1}
    };

    int result = 0;
    int prevValue = 0;

    for (char c : roman) {
        int value = romanToArabicMap[c];
        result += value;
        if (value > prevValue) {
            result -= 2 * prevValue;
        }
        prevValue = value;
    }

    return result;
}

int problema10() {
    std::string romanNumber;
    std::cout << "Ingresa un numero en el sistema romano: ";
    std::cin >> romanNumber;

    int arabicNumber = romanToArabic(romanNumber);
    std::cout << "El numero en sistema arabigo es: " << arabicNumber << std::endl;

    return 0;
}
