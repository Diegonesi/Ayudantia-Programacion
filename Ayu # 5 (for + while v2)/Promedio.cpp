/* 
Cree un programa en el que el usuario tenga que pedir N números y calcular el promedio.
Condicion: Usar ciclos
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    float numero, suma = 0;

    cout << "Cuantos numeros vas a ingresar? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Numero " << i << ": ";
        cin >> numero;
        suma += numero;
    }
    cout << "Promedio: " << (suma / n) << endl;
    return 0;
}
