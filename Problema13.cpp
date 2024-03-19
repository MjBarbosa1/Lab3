#include"funciones.h"
#include <iostream>
#include <vector>

using namespace std;

int problema13() {
  // Imagen de la galaxia NGC 1300 (reemplaza con tu imagen real)
  vector<vector<int>> imagen = {
    {0, 3, 4, 0, 0, 0, 6, 8},
    {5, 13, 6, 0, 0, 0, 2, 3},
    {2, 6, 2, 7, 3, 0, 10, 0},
    {0, 0, 4, 15, 4, 1, 6, 0},
    {0, 0, 7, 12, 6, 9, 10, 4},
    {5, 0, 6, 10, 6, 4, 8, 0}
  };

  // Dimensiones de la imagen
  int filas = imagen.size();
  int columnas = imagen[0].size();

  // Función para contar estrellas
  int contar_estrellas(const vector<vector<int>>& imagen, int filas, int columnas) {
    int numero_estrellas = 0;
    for (int i = 1; i < filas - 1; ++i) {
      for (int j = 1; j < columnas - 1; ++j) {
        int suma_vecinos = 0;
        suma_vecinos += imagen[i - 1][j - 1] + imagen[i - 1][j] + imagen[i - 1][j + 1];
        suma_vecinos += imagen[i][j - 1] + imagen[i][j + 1];
        suma_vecinos += imagen[i + 1][j - 1] + imagen[i + 1][j] + imagen[i + 1][j + 1];
        if (imagen[i][j] > suma_vecinos / 2) {
          numero_estrellas++;
        }
      }
    }
    return numero_estrellas;
  }

  int numero_estrellas = contar_estrellas(imagen, filas, columnas);

  // Mostrar el resultado
  cout << "Número de estrellas encontradas: " << numero_estrellas << endl;

  return 0;
}
