/* 
Cree un programa en el que el usuario tenga que pedir N números y guarde cual es el numero mayor y cual es el menor
Condicion: Usar ciclos
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    float numero, mayor, menor;

    cout << "Numeros a ingresar? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Numero " << i << ": ";
        cin >> numero;

        if (i == 1) {
            mayor = menor = numero;
        } else {
            if (numero > mayor) mayor = numero;
            if (numero < menor) menor = numero;
        }
    }

    cout << "Mayor: " << mayor << "\nMenor: " << menor << endl;
    return 0;
}
