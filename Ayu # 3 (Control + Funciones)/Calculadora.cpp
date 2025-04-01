/*
Cree un programa de que funcione como una calculadora simple. Debe desplegar un menú, para seleccionar suma, resta, multiplicación o división. Tras seleccionar una operación matemática se seleccionaran los valores numericos correspondientes.
*/
#include <iostream>
using namespace std;

float sumar(){
    float a,b;
    cout<<"Ingrese A"<<endl;
    cin>>a;
    cout<<"Ingrese B"<<endl;
    cin>>b;
    a = a+b;
    cout<<"Sumando A+B: "<<a;
    return 0;
}
float multiplicar(){
    float a,b;
    cout<<"Ingrese A"<<endl;
    cin>>a;
    cout<<"Ingrese B"<<endl;
    cin>>b;
    a = a*b;
    cout<<"Multiplicando A*B: "<<a;
    return 0;
}
float dividir(){
    float a,b;
    cout<<"Ingrese A"<<endl;
    cin>>a;
    cout<<"Ingrese B"<<endl;
    cin>>b;
    a = a/b;
    cout<<"Sumando A/B: "<<a;
    return 0;
}
float restar(){
    float a,b;
    cout<<"Ingrese A"<<endl;
    cin>>a;
    cout<<"Ingrese B"<<endl;
    cin>>b;
    a = a - b;
    cout<<"Sumando A-B: "<<a;
    return 0;
}

int main(){

    int escoger;
    
    cout<<"Escoja una opcion:"<<endl;
    cout<<"1- Sumar"<<endl;
    cout<<"2- Restar"<<endl;
    cout<<"3- Multiplicar"<<endl;
    cout<<"4- Dividir"<<endl;
    cin>>escoger;

    if (escoger == 1)
    {
    sumar();
    }else if (escoger == 2)
    {
    restar();
    }else if (escoger == 3)
    {
    multiplicar();
    }else if (escoger == 4)
    {
    dividir();
    }else{
    cout<<"Opcion invalida"<<endl;
    }     

    
    return 0;
}