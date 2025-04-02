/*
Cree un programa de que funcione como una calculadora simple. Debe desplegar un menú, para seleccionar suma, resta, multiplicación o división. Tras seleccionar una operación matemática se seleccionaran los valores numericos correspondientes.
*/
#include <iostream>
using namespace std;

float sumar(float a, float b){
    return a+b;
}
float multiplicar(float a, float b){
    return a*b;
}
float dividir(float a, float b){
    return a/b;
}
float restar(float a, float b){
    return a-b;
}

int main(){

    int escoger;
    float a,b;
    cout<<"Ingrese A"<<endl;
    cin>>a;
    cout<<"Ingrese B"<<endl;
    cin>>b;
    cout<<"Escoja una opcion:"<<endl;
    cout<<"1- Sumar"<<endl;
    cout<<"2- Restar"<<endl;
    cout<<"3- Multiplicar"<<endl;
    cout<<"4- Dividir"<<endl;
    cin>>escoger;

    if (escoger == 1)
    {
    cout<<sumar(a,b);
    }else if (escoger == 2)
    {
    cout<<restar(a,b);
    }else if (escoger == 3)
    {
    cout<<multiplicar(a,b);
    }else if (escoger == 4)
    {
    cout<<dividir(a,b);
    }else{
    cout<<"Opcion invalida"<<endl;
    }     

    
    return 0;
}