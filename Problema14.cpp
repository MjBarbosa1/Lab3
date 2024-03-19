#include <iostream>
#include"funciones.h"
using namespace std;

const int tamano = 5;

void imprimirMatriz(int matriz[tamano][tamano]) {
    for (int i = 0; i < tamano; ++i) {
        for (int j = 0; j < tamano; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void rotar90(int matriz[tamano][tamano]) {
    int temp[tamano][tamano];
    for (int i = 0; i < tamano; ++i) {
        for (int j = 0; j < tamano; ++j) {
            temp[i][j] = matriz[tamano - j - 1][i];
        }
    }
    cout << "\nMatriz rotada 90 grados:" << endl;
    imprimirMatriz(temp);
}

void rotar180(int matriz[tamano][tamano]) {
    int temp[tamano][tamano];
    for (int i = 0; i < tamano; ++i) {
        for (int j = 0; j < tamano; ++j) {
            temp[i][j] = matriz[tamano - i - 1][tamano - j - 1];
        }
    }
    cout << "\nMatriz rotada 180 grados:" << endl;
    imprimirMatriz(temp);
}

void rotar270(int matriz[tamano][tamano]) {
    int temp[tamano][tamano];
    for (int i = 0; i < tamano; ++i) {
        for (int j = 0; j < tamano; ++j) {
            temp[i][j] = matriz[j][tamano - i - 1];
        }
    }
    cout << "\nMatriz rotada 270 grados:" << endl;
    imprimirMatriz(temp);
}

int problema14() {
    int matriz[tamano][tamano];
    int contador = 1;

    for (int i = 0; i < tamano; ++i) {
        for (int j = 0; j < tamano; ++j) {
            matriz[i][j] = contador++;
        }
    }

    cout << "Matriz original:" << endl;
    imprimirMatriz(matriz);

    rotar90(matriz);
    rotar180(matriz);
    rotar270(matriz);

    return 0;
}
