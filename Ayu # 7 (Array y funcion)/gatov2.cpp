/*
Version Bonita
Genere un programa donde se pueda jugar al gato en una matriz de dos dimensiones
*/

#include <iostream>
using namespace std;

int arr[3][3];

void mostrarresultado() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            char simbolo;
            if (arr[i][j] == 2) simbolo = ' ';
            else if (arr[i][j] == 0) simbolo = 'O';
            else simbolo = 'X';

            cout << simbolo;
            if (j < 2) cout << " | ";
        }
        cout << endl;
        if (i < 2) cout << "--+---+--" << endl;
    }
    cout << endl;
}

void iniciar() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            arr[i][j] = 2;
}

void jugada(int fila, int columna, int jugador) {
    arr[fila][columna] = jugador;
}

bool check(int a) {
    for (int i = 0; i < 3; i++) {
        if (arr[i][0] == a && arr[i][1] == a && arr[i][2] == a) return true;
        if (arr[0][i] == a && arr[1][i] == a && arr[2][i] == a) return true;
    }
    if (arr[0][0] == a && arr[1][1] == a && arr[2][2] == a) return true;
    if (arr[0][2] == a && arr[1][1] == a && arr[2][0] == a) return true;

    return false;
}

int main() {
    iniciar();
    int jugador = 0, contar = 0;
    bool ganar = false;

    while (contar < 9 && !ganar) {
        int columna, fila;
        cout << "Jugador " << jugador << " (" << (jugador == 0 ? 'O' : 'X') << ") seleccione su casilla" << endl;

        while (true) {
            cout << "Fila (0-2): ";
            cin >> fila;
            cout << "Columna (0-2): ";
            cin >> columna;

            if (fila < 0 || fila > 2 || columna < 0 || columna > 2) {
                cout << "Coordenadas inválidas. Intente de nuevo." << endl;
            } else if (arr[fila][columna] != 2) {
                cout << "Casilla ocupada. Intente otra." << endl;
            } else {
                jugada(fila, columna, jugador);
                break;
            }
        }

        mostrarresultado();
        ganar = check(jugador);

        if (ganar) {
            cout << "¡Gana el jugador " << jugador << " (" << (jugador == 0 ? 'O' : 'X') << ")!" << endl;
            break;
        }

        jugador = 1 - jugador;
        contar++;
    }

    if (!ganar)
        cout << "Empate. Fin del juego." << endl;

    return 0;
}
