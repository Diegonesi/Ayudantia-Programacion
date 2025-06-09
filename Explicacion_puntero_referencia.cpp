#include <iostream>
using namespace std;


void sumar1_v1(int& a){
    a++;
}

void sumar1_v2(int *a){
    (*a)++;
}

int main() {
    int x = 42;
    int *ptr = &x;

    cout << "Valor de x: " << x << endl;
    cout << "Direccion de x: " << &x << endl;
    cout << "Valor de ptr (direccion que almacena): " << ptr << endl;
    cout << "Valor al que apunta ptr (*ptr): " << *ptr << endl;
    cout << string(100,'=')<<endl;
    *ptr = *ptr + 1;
    cout<<"Se realizo *ptr = *ptr + 1;"<<endl;
    cout <<"Valor al que apunta ptr (*ptr):"<<*ptr <<endl;
    cout <<"Valor de x: "<< x << endl; 
    cout<<"Cambio el valor de x sin usar x"<<endl;
    cout << string(100,'=')<<endl;
    ptr = &x +1;
    cout<< "Direccion de x: " << &x << endl;
    cout << "Valor de ptr (direccion que almacena): " << ptr << endl;
    cout << "Valor de x: " << x << endl;
    cout << "Valor al que apunta ptr (*ptr): " << *ptr << endl;
    cout<<"Al cambiar la direccion de memoria, tmb cambia el valor de *ptr"<<endl;
    cout << string(100,'=')<<endl;
    x = x + 1;
    *ptr = *ptr - 1;

    cout<<"Se realizo *ptr = *ptr - 1; y x = x + 1;"<<endl;
    cout << "Valor de x: " << x << endl;
    cout << "Valor al que apunta ptr (*ptr): " << *ptr << endl;
    
    cout << string(100,'=')<<endl;
    ptr = &x;
    cout<<"Se realizo ptr = &x;"<<endl;
    cout << "Valor de x: " << x << endl;
    cout << "Direccion de x: " << &x << endl;
    cout << "Valor de ptr (direccion que almacena): " << ptr << endl;
    cout << "Valor al que apunta ptr (*ptr): " << *ptr << endl;

    cout << string(100,'=')<<endl;
    sumar1_v1(x);
    cout<<"Se llamo a la funcion con & (sumar1_v1(x);)"<<endl;
    cout << "Valor de x: " << x << endl;
    cout << "Direccion de x: " << &x << endl;
    cout << "Valor de ptr (direccion que almacena): " << ptr << endl;
    cout << "Valor al que apunta ptr (*ptr): " << *ptr << endl;
    sumar1_v2(&x);
    cout<<"Se llamo a la funcion con * (sumar1_v2(&x);)"<<endl;
    cout << "Valor de x: " << x << endl;
    cout << "Direccion de x: " << &x << endl;
    cout << "Valor de ptr (direccion que almacena): " << ptr << endl;
    cout << "Valor al que apunta ptr (*ptr): " << *ptr << endl;
    sumar1_v1(*ptr);
    cout<<"Se llamo a la funcion con * (sumar1_v1(*ptr);)"<<endl;
    cout << "Valor de x: " << x << endl;
    cout << "Direccion de x: " << &x << endl;
    cout << "Valor de ptr (direccion que almacena): " << ptr << endl;
    cout << "Valor al que apunta ptr (*ptr): " << *ptr << endl;
    sumar1_v2(&*ptr); // es lo mismo que hacer solo ptr
    cout<<"Se llamo a la funcion con * (sumar1_v2(&*ptr);), es lo mismo que llamar solo a ptr"<<endl;
    cout << "Valor de x: " << x << endl;
    cout << "Direccion de x: " << &x << endl;
    cout << "Valor de ptr (direccion que almacena): " << ptr << endl;
    cout << "Valor al que apunta ptr (*ptr): " << *ptr << endl;
    
    return 0;
}
