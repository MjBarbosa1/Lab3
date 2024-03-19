#include"funciones.h"
#include <iostream>
#include <vector>

using namespace std;

bool esCuadradoMagico(const vector<vector<int>>& matriz) {
    int tamano = matriz.size();
    int sumaEsperada = tamano * (tamano * tamano + 1) / 2;


    for (int i = 0; i < tamano; ++i) {
        int sumaFila = 0, sumaColumna = 0;
        for (int j = 0; j < tamano; ++j) {
            sumaFila += matriz[i][j];
            sumaColumna += matriz[j][i];
        }
        if (sumaFila != sumaEsperada || sumaColumna != sumaEsperada) {
            return false;
        }
    }


    int sumaDiagonalPrincipal = 0, sumaDiagonalSecundaria = 0;
    for (int i = 0; i < tamano; ++i) {
        sumaDiagonalPrincipal += matriz[i][i];
        sumaDiagonalSecundaria += matriz[i][tamano - i - 1];
    }
    if (sumaDiagonalPrincipal != sumaEsperada || sumaDiagonalSecundaria != sumaEsperada) {
        return false;
    }

    return true;
}

void imprimirMatriz(const vector<vector<int>>& matriz) {
    for (const auto& fila : matriz) {
        for (int elemento : fila) {
            cout << elemento << " ";
        }
        cout << endl;
    }
}

int problema12() {
    int n;
    cout << "Ingrese el tamaño de la matriz cuadrada: ";
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n));

    cout << "Ingrese los elementos de la matriz cuadrada:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matriz[i][j];
        }
    }

    cout << "La matriz ingresada es:" << endl;
    imprimirMatriz(matriz);

    if (esCuadradoMagico(matriz)) {
        cout << "La matriz es un cuadrado magico." << endl;
    } else {
        cout << "La matriz no es un cuadrado magico." << endl;
    }

    return 0;
}
