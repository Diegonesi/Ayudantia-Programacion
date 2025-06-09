#include <iostream>
using namespace std;

// Función con punteros
void swapPorPunteros(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Función con referencias
void swapPorReferencias(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;

    cout << "Ingresa dos numeros: ";
    cin >> a >> b;

    cout << "\nAOriginalmente: a = " << a << ", b = " << b << endl;
    swapPorPunteros(&a, &b);
    cout << "Despues del swap por punteros: a = " << a << ", b = " << b << endl;

    swapPorReferencias(a, b);
    cout << "Despues del swap por referencias: a = " << a << ", b = " << b << endl;

    return 0;
}
