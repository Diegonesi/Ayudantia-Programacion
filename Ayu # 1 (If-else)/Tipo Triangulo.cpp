
// Cree un programa, que determine que tipo de triangulo es dependiendo del largo de los lados. 
// Cada lado sera un entero. Ademas debe recordar que
// Equilatero tiene todos sus lados iguales
// Isosceles dos lados iguales y un tercer lado diferente
// Escaleno tiene todos los lados de diferente tamaño
#include <iostream>
using namespace std;


int main(){
    int lado1, lado2, lado3;
    cout << "Ingrese los tres lados del triangulo "<<endl;
    cout<<"Ingrese el lado 1: "<<endl;
    cin >> lado1;
    cout<<"Ingrese el lado 1: "<<endl;
    cin>> lado2;
    cout<<"Ingrese el lado 1: "<<endl;
    cin>> lado3;

    if (lado1 == lado2 && lado2 == lado3) {
        cout << "Su triangulo es equilatero." << endl;
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
        cout << "Su triangulo es isosceles." << endl;
    } else {
        cout << "Su triangulo es escaleno." << endl;
    }

    return 0;
}