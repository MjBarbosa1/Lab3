#include <iostream>
#include <algorithm>
#include <vector>
#include"funciones.h"
using namespace std;

int main() {
    int n = 1000000;  // Número de la permutación
    vector<int> numeros = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int contador = 1;
    do {
        if (contador == n) {
            cout << "La permutación número " << n << " es: ";
            for (int num : numeros) {
                cout << num;
            }
            cout << endl;
            break;
        }
        contador++;
    } while (next_permutation(numeros.begin(), numeros.end()));

    return 0;
}
