/*
Cree un programa donde se debe verificar las estadisticas de un tren. 
El Tren, posee un nombre y 5 vagones de base, aunque se le puede cambiar la cantidad de vagones que posee. 
Asi mismo, se puede modificar el tipo de ruedas y rebestimiento que posee el vagon

Condiciones 
- se deben usar funciones para la modificacion del estado del vagon del tren
- Las funciones deben utilizar & 
- debe estar en un menu que cuando el usuario quiera se salga de este
*/
#include <iostream>
using namespace std;


int cambiar_vagones(int& a){
    int rueda;
    cout<<"Ingrese "<<endl;
    cin>>rueda;
    return a = rueda;
}
string cambiar_ruedas(string& a){
    string ruedas_nuevas;
    cin>> ruedas_nuevas;
    return a = ruedas_nuevas;
}
string cambiar_rebestimiento(string& a){
    string rebestimiento_nuevo;
    cin>> rebestimiento_nuevo;
    return a = rebestimiento_nuevo;
}
string cambiar_nombre(string& a){
    string nombre_nuevo;
    cin>> nombre_nuevo;
    return a = nombre_nuevo;
}

int main(){
    string nombre = "Estandar de un tren";
    int Vagones = 5;
    string ruedas = "Metal";
    string rebestimiento = "Acero";
    while (true)
    {      
        int seleccionar;
        cout<<"1- Ver estadisticas del tren"<<endl;
        cout<<"2- Cambiar nombre del tren"<<endl;
        cout<<"3- Cambiar cantidad de vagones de un tren"<<endl;
        cout<<"4- Cambiar tipo de ruedas del tren"<<endl;
        cout<<"5- Cambiar rebestimiento del tren"<<endl;
        cout<<"6- Salir del programa"<<endl;
        cout<<"Seleccione una opcion"<<endl;
        cin>>seleccionar;
        cout<<string(100,'=')<<endl;
        if (seleccionar == 1)
        {
            cout<<"Nombre del tren: "<<nombre<<endl;
            cout<<"Cantidad de vagones: "<<Vagones<<endl;
            cout<<"Tipo de ruedas: "<<ruedas<<endl;
            cout<<"Tipo de rebestimeinto: "<<rebestimiento<<endl;
            cout<<string(100,'=')<<endl;
        }else if (seleccionar == 2)
        {
            cambiar_nombre(nombre);
        }else if (seleccionar == 3)
        {
            cambiar_vagones(Vagones);
        }else if (seleccionar == 4)
        {
            cambiar_ruedas(ruedas);
        }else if (seleccionar == 5)
        {
            cambiar_rebestimiento(rebestimiento);
        }else if (seleccionar == 6)
        {
            cout<<"Saliendo del programa"<<endl;
            break;
        }else{
            cout<<"Seleccione una opcion disponible"<<endl;
        }
        
        
    }
    
   

       

    
    return 0;
}