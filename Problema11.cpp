#include"funciones.h"
#include <iostream>
#include <vector>

using namespace std;

class SalaCine {
private:
    vector<vector<bool>> asientos;

public:
    SalaCine() : asientos(15, vector<bool>(20, false)) {}

    void mostrarSala() {
        char fila = 'A';
        cout << "   ";
        for (int i = 1; i <= 20; ++i) {
            cout << " " << i;
        }
        cout << endl;

        for (const auto& row : asientos) {
            cout << fila++ << "  ";
            for (const auto& seat : row) {
                if (seat) {
                    cout << " + ";
                } else {
                    cout << " - ";
                }
            }
            cout << endl;
        }
    }

    bool reservarAsiento(char fila, int numero) {
        if (fila < 'A' || fila > 'O' || numero < 1 || numero > 20) {
            cout << "Ubicacion de asiento invalida." << endl;
            return false;
        }

        if (asientos[fila - 'A'][numero - 1]) {
            cout << "El asiento ya esta reservado." << endl;
            return false;
        }

        asientos[fila - 'A'][numero - 1] = true;
        cout << "Asiento reservado exitosamente." << endl;
        return true;
    }

    bool cancelarReserva(char fila, int numero) {
        if (fila < 'A' || fila > 'O' || numero < 1 || numero > 20) {
            cout << "Ubicacion de asiento invalida." << endl;
            return false;
        }

        if (!asientos[fila - 'A'][numero - 1]) {
            cout << "El asiento no esta reservado." << endl;
            return false;
        }

        asientos[fila - 'A'][numero - 1] = false;
        cout << "Reserva cancelada exitosamente." << endl;
        return true;
    }
};

int problema11() {
    SalaCine sala;

    sala.mostrarSala();

    char opcion;
    do {
        cout << "Desea reservar (R) o cancelar (C) un asiento? (S para salir): ";
        cin >> opcion;

        if (opcion == 'S' || opcion == 's') {
            break;
        }

        char fila;
        int numero;
        cout << "Ingrese la fila (A-O) y el numero del asiento (1-20): ";
        cin >> fila >> numero;

        if (opcion == 'R' || opcion == 'r') {
            sala.reservarAsiento(fila, numero);
        } else if (opcion == 'C' || opcion == 'c') {
            sala.cancelarReserva(fila, numero);
        }

        sala.mostrarSala();
    } while (opcion != 'S' && opcion != 's');

    cout << "Gracias por usar el sistema de reservas de asientos." << endl;

    return 0;
}
