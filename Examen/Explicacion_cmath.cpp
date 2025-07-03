#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 4;
    cout<<"La raiz cuadrada de "<<n<<" es: "<<sqrt(n)<<endl;
    cout<<"La potencia de "<<n<<" a la 1/2 es: "<< pow(n,(double)1/2)<<endl; // pueden calcular con un double el valor de 1/2 que es 0.5 o poner (double)1/2
    // SON LO MISMO MEJOR SOLO APRENDER POW(numero, elevado); ya que se pueden hacer mas cosas 
    cout<<"La potencia de "<<n<<" a la 3 es: "<<pow(n,3)<<endl;

    return 0;
}
