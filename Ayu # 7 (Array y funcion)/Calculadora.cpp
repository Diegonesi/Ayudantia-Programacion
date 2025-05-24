/*
Cree un programa donde se debe crear una calculadora, que posea un historial de los últimos 5 resultados.
 Así mismo, cada operación (suma,resta,division,multiplicacion,potencia y raiz) debe ser una función. 
*/
#include <iostream>
#include <cmath>
using namespace std;

float historial[4];
int indice=0;

void guardarhistorial(float resultado) {
    if (indice< 5) {
        for (int i = indice; i > 0; i--) {
            historial[i] = historial[i - 1];
        }
        historial[0] = resultado;
        indice++;
    } else {
        for (int i = 4; i > 0; i--) {
            historial[i] = historial[i - 1];
        }
        historial[0] = resultado;
    }
}

    
void verhistorial(){
    cout<<"Historial de resultados:"<<endl;
    for(int i = 0; i<5; i++){
        if(historial[i] != NULL){
          cout<<historial[i]<<endl;  
        }
    }
}

float sumar(float a, float b){
    guardarhistorial(a+b);
    return a+b;
}
float multiplicar(float a, float b){
    guardarhistorial(a*b);
    return a*b;
}
float dividir(float a, float b){
    guardarhistorial(a/b);
    return a/b;
}
float restar(float a, float b){
    guardarhistorial(a-b);
    return a-b;
}
float potencia(float a, float b){
    guardarhistorial(pow(a,b));
    return pow(a,b);
}
float raiz(float a, float b){
    guardarhistorial(pow(a,1/b));
    return pow(a,1/b);
}

int main(){
    int escoger;
    float a,b;
    
    while (escoger !=8)
    {   
        
        cout<<"\nEscoja una opcion:"<<endl;
        cout<<"1- Sumar"<<endl;
        cout<<"2- Restar"<<endl;
        cout<<"3- Multiplicar"<<endl;
        cout<<"4- Dividir"<<endl;
        cout<<"5- Potencia"<<endl;
        cout<<"6- Raiz"<<endl;
        cout<<"7- Ver Historial"<<endl;
        cout<<"8- Salir de la calculadora"<<endl;
        cin>>escoger; /* code */
        
        if (escoger == 1){
            cout<<"Ingrese A"<<endl;
            cin>>a;
            cout<<"Ingrese B"<<endl;
            cin>>b;
            cout<<a<<"+"<<b<<endl;
            cout<<sumar(a,b);
        }else if (escoger == 2){
            cout<<"Ingrese A"<<endl;
            cin>>a;
            cout<<"Ingrese B"<<endl;
            cin>>b;
            cout<<a<<"-"<<b<<endl;
            cout<<restar(a,b);
        }else if (escoger == 3){
            cout<<"Ingrese A"<<endl;
            cin>>a;
            cout<<"Ingrese B"<<endl;
            cin>>b;
            cout<<a<<"*"<<b<<endl;
            cout<<multiplicar(a,b);
        }else if (escoger == 4){
            cout<<"Ingrese A"<<endl;
            cin>>a;
            cout<<"Ingrese B"<<endl;
            cin>>b;
            cout<<a<<"/"<<b<<endl;
            cout<<dividir(a,b);
        }else if(escoger == 5){
            cout<<"Ingrese A"<<endl;
            cin>>a;
            cout<<"Ingrese B"<<endl;
            cin>>b;
            cout<<a<<"^"<<b<<endl;
            cout<<potencia(a,b);
        }else if(escoger == 6){
            cout<<"Ingrese A"<<endl;
            cin>>a;
            cout<<"Ingrese B"<<endl;
            cin>>b;
            cout<<a<<"^(1/"<<b<<")"<<endl;
            cout<<raiz(a,b);
        }else if(escoger == 7){
            verhistorial();
        }else if(escoger == 8){
            cout<<"Saliendo del programa"<<endl;
        }else{
            cout<<"Opcion invalida"<<endl;
        } 

    
    }
    
   

       

    
    return 0;
}