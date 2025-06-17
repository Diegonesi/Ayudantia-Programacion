/*
Se le pide crear un sistema de reserva de asientos para el cine. 
Este sistema debe tener la capacidad de reservar asientos, de poder cancelar la reserva
 y ver todos los asientos disponibles. La sala del cine va de ‘a’ a ‘i’, en donde ‘a’ posee 10 asientos 
 (5 asientos en cada lado), y de b hasta h poseen 13 asientos y la i posee 15 asientos
Condiciones:
Debe usar matrices de dos dimensiones
Debe utilizar funciones para cada funcionalidad

*/

#include <iostream>
using namespace std;



void ver_sala(int* matriz, int filas, int columnas) { 
// Esta manera de llamar a una matriz referenciando hace que transformemos 
//la matriz de 2 dimensiones en una de 1 dimension y trabajamos

    char letras[9];
    cout<<"   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15"<<endl;
    for (int i = 0; i < filas; i++) {
        letras[i] = 'I' - i;
        cout << letras[i] << " ";
        for (int j = 0; j < columnas; j++) {
            if(matriz[i * columnas + j] == 1){
                cout <<"[*]"<< " ";
            }else if(matriz[i * columnas + j] == 2){
                cout << "   " << " ";
            }else if(matriz[i * columnas + j] == 0){
                cout << "[ ]" << " ";
            }
           
        }
        cout << endl;
    }
    cout<<string(60,'=')<<endl;
    cout<<string(25,' ')<<"Pantalla"<<endl;
    cout<<string(60,'=')<<endl;
}

void reservar_asiento(int* matriz, int columnas, int i, int j) { 
    if(matriz[i * columnas + j] == 1 || matriz[i * columnas + j] == 2){
        cout<<"Asiento ocupado "<<char('I'-i)<<j+1<<endl;
    }else{
        matriz[i * columnas + j] = 1;
        cout<<"Se reservo el asiento "<<char('I'-i)<<j+1<<endl;
    }
}

void cancelar_reserva(int* matriz, int columnas, int i, int j) { 
    if(matriz[i * columnas + j] != 1){
        cout<<"Asiento sin reservar "<<char('I'-i)<<j+1<<endl;
    }else{
        matriz[i * columnas + j] = 0;
        cout<<"Se cancelo la reserva del asiento "<<char('I'-i)<<j+1<<endl;
    }
}

int main() {
    
    int matriz[9][15] = 
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //I
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,2}, //H
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,2}, //G
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,2}, //F
    {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}, //E
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,2}, //D
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,2}, //C
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,2}, //B
    {0,0,0,0,0,2,2,2,2,2,0,0,0,0,0}}; //A
    // Inicio de la sala (Todas las sillas vacias) 
    // Digamos 0 = vacio, 1 = ocupado, 2 = invalido
    int seleccionar;
    while (true)
    {
        cout<<"1 - ver sala"<<endl;
        cout<<"2 - reservar asientos"<<endl;
        cout<<"3 - cancelar reserva"<<endl;
        cout<<"4 - salir"<<endl;
        cin>>seleccionar;

        if(seleccionar==1){
            ver_sala(&matriz[0][0], 9, 15);
        }else if(seleccionar==2){
            char Letra;
            cout<<"Seleccione fila (A-I)"<<endl;
            cin>>Letra;
            int a,b;
            a = 73 - (int)Letra;
            cout<<"Seleccione columna (1-15)"<<endl;
            cin>>b;
            reservar_asiento(&matriz[0][0],15,a,b-1);
        }else if(seleccionar==3){
            char Letra;
            cout<<"Seleccione fila (A-I)"<<endl;
            cin>>Letra;
            int a,b;
            a = 73 - (int)Letra;
            cout<<"Seleccione columna (1-15)"<<endl;
            cin>>b;
            cancelar_reserva(&matriz[0][0],15,a,b-1);
        }else if(seleccionar==4){
            cout<<"Gracias por usarme :D"<<endl;
            break;
        }else{
            cout<<"Opcion invalida"<<endl;
        }
        
    }
    


    
    
    
    return 0;
}
