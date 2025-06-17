#include <iostream>
using namespace std;

// Función para leer una matriz 3x3
void leerMatriz(int matriz[3][3]) {
    cout << "Ingresa los elementos de la matriz 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Función para imprimir una matriz 3x3
void imprimirMatriz(const int matriz[3][3]) { // Si en las funciones le agregamos CONST INT a la matriz asegura que no se modificara la matriz (NO SE REFERENCIA)
    cout << "Matriz ingresada:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

// Función que verifica si una matriz es simétrica
bool esSimetrica(const int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                return false;
            }
        }
    }
    return true;
}

// Función principal
int main() {
    int matriz[3][3];

    leerMatriz(matriz);
    imprimirMatriz(matriz);

    if (esSimetrica(matriz)) {
        cout << "La matriz SI es simetrica.\n";
    } else {
        cout << "La matriz NO es simetrica.\n";
    }

    return 0;
}