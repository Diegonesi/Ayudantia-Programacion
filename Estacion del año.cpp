
// Cree un programa, para determinar la estacion del año. Recuerda que
//Primavera es entre septiembre-diciembre
//Verano es entre diciembre-marzo
//Otoño es entre marzo-junio
//Invierno es entre junio-septiembre
#include <iostream>
using namespace std;

int main(){
    int mes;
    cout << "Ingrese el numero del mes (1-12): ";
    cin >> mes;
    if (mes == 12 || mes == 1 || mes == 2) {
        cout << "Es Verano." << endl;
    } else if (mes >= 3 && mes <= 5) {
        cout << "Es Otoño." << endl;
    } else if (mes >= 6 && mes <= 8) {
        cout << "Es Invierno." << endl;
    } else if (mes >= 9 && mes <= 11) {
        cout << "Es Primavera." << endl;
    } else {
        cout << "Mes inválido." << endl;
    }
    return 0;
}