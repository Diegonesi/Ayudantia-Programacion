/*
Version Rapida
Genere un programa donde se pueda jugar al gato en una matriz de dos dimensiones
*/
#include <iostream>
using namespace std;

int arr[3][3];

void mostrarresultado(){
    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 2; j++){
            if(j>1){
                cout<<arr[i][j]<<endl;
            }else{
                cout<<arr[i][j]<<"|";
            }
        }
    }
}

void iniciar(){
    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 2; j++){
            arr[i][j]=2;
        }
    }
}

void jugada(int a,int b,int c){
    arr[a][b]=c;
}

bool check(int a){
    // Se gana si se cumple una de las siguientes lineas
    // i fija y j variable [0 0, 0 1, 0 2], [1 0, 1 1, 1 2], [2 0, 2 1, 2 2]
    // j fija y i variable [0 0, 1 0, 2 0], [0 1, 1 1, 2 1], [0 2, 1 2, 2 2]
    // diagonal [0 0, 1 1, 2 2], [0 2, 1 1, 2 0]
    if( (arr[0][0]== a && arr[0][1]== a && arr[0][2]==a) || (arr[1][0]== a && arr[1][1]== a && arr[1][2]==a) || (arr[2][0]== a && arr[2][1]== a && arr[2][2]==a)){
        cout<<"Gano el jugador "<<a<<endl;
        return true;
    }else if((arr[0][0]== a && arr[1][0]== a && arr[2][0]==a) || (arr[0][1]== a && arr[1][1]== a && arr[2][1]== a) || (arr[0][2]== a && arr[1][2]== a && arr[2][2]==a)){
        cout<<"Gano el jugador "<<a<<endl;
        return true;
    }else if((arr[0][0]== a && arr[1][1]== a && arr[2][2]==a) || (arr[0][2]== a && arr[1][1]== a && arr[2][0]== a )){
        cout<<"Gano el jugador "<<a<<endl;
        return true;
    }else{
        int contar = 0;
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                if(arr[i][j]!=2){
                    contar++;
                }
            }
            
            if(contar == 9){
                cout<<"No gano nadie"<<endl;
                return true;
            }
        }
        
    }
    return false;
}

int main(){
    iniciar();
    int jugador = 0;
    bool ganar = false;
    while (ganar != true){ // ciclo para jugar
        int columna,fila;
        cout<<"Jugador "<<jugador<<" seleccione su casilla"<<endl;
        while (true){ //ciclo para comprobar que no ocurra nada malo
            cout<<"columna"<<endl;
            cin>>columna;
            cout<<"fila"<<endl;
            cin>>fila;
            if(columna>=3 || columna<0){
                cout<<"Columna invalida"<<endl;
            }else if(fila>=3 || fila<0){
                cout<<"Fila invalida"<<endl;
            }else if(arr[columna][fila]==1 || arr[columna][fila]==0 ){
                cout<<"No se puede jugar en esa casilla"<<endl;
            }else{
                jugada(columna,fila,jugador);
                break;
            }
        }
        mostrarresultado();
        ganar = check(jugador);
        
        // cambio dde jugador
        if(jugador==0){
            jugador++;
        }else{
            jugador--;
        }
    }
    cout<<"Termino la partida"<<endl;
    return 0;
}