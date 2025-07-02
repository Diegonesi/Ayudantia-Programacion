/*

En el popular juego buscaminas se trata de no caer en una mina. 
Como se esta implementando una nueva modalidad de juego, 
se necesita que ayude programando las siguientes funciones

-(15 ptos) int resultado(int matriz[30][30], int fila, int columna). La funcion recibe una matriz 30x30
y la seleccion de una fila y una columna. Considerando que las celdas de la matriz pueden valer 0 si no hay bomba 
y 1 si hay una bomba en la celda seleccionada, la funcion debera devolver:

a -1 si encontro una bomba en la casilla indicada por fila/columan

b n sino hay bomba en la celda seleccionada, siendo n la cantidad de bombas que rodea la casilla indicada por fila/columna

[1][0][1]
[0][0][1]
[1][1][1]

Para este ejemplo la celda seleccionada seria la del centro, la respuesta de resultado para ella seria 6,
 ya que la rodean 6 celdas con bomba en ella (el 1 representa las bombas)

- (5 ptos) void muestraTablero(int matriz[30][30]), que imprima la matriz (formato matriz), poniendo un - si la celda
no tiene bomba y un * si la celda tiene una bomba. Luego de imprimir la matriz, en la linea siguiente se debe imprimir
la cantidad total de bombas detectadas en el tablero.

Caso de ejemplo de uso, para no crear una matriz 30x30
{1,0,1,1,0}
{0,1,1,0,1}
{0,0,0,1,0}
{0,0,0,0,0}
{1,0,1,0,0}


*/

#include <iostream>
using namespace std;
//Parte 1
int resultado(int matriz[5][5], int f, int c){
   
    int suma =0;
    if(matriz[f][c]==1){
        return -1;  
    }else{
        // Manera simplificada
       
        for (int i = f - 1; i <= f + 1; i++) {
            for (int j = c - 1; j <= c + 1; j++) {
                if (i >= 0 && i < 5 && j >= 0 && j < 5) { // si se cumple esta restriccion se cumplen todos los casos bordes
                    suma += matriz[i][j];
                }
            }
        }

        // Manera Larga, en el caso de que no se nos ocurra la version anterior, se puede hacer de esta manera, teniendo el cuidado de que primero se deberian realizar las esquinas y luego los lados, si se hace con la condicion de los lados primero, se activara esa antes que el de las esquinas (SUPER IMPORTANTE)
        /*
        if(c== 0 && f == 0 ){
            for(int i = f;i<=f+1;i++){
                for(int j = c; j<= c+1; j++){
                    suma = suma + matriz[i][j];
                }
            }
        }else if(c== 0 && f == 4){
            for(int i = f-1;i<=f;i++){
                for(int j = c; j<= c+1; j++){
                    suma = suma + matriz[i][j];
                }
            }
        }else if(c== 4 && f == 0){
            for(int i = f;i<=f+1;i++){
                for(int j = c-1; j<= c; j++){
                    suma = suma + matriz[i][j];
                }
            }
        }else if(c== 4 && f == 4){
            for(int i = f-1;i<=f;i++){
                for(int j = c-1; j<= c; j++){
                    suma = suma + matriz[i][j];
                }
            }
        }else if(f == 0){ 
            for(int i = f; i<=f+1;i++){
                for(int j= c-1; j<= c+1; j++){
                    suma = suma + matriz[i][j];
                }
            }
        }else if (f == 4){
            for(int i = f-1; i<=f;i++){
                for(int j= c-1; j<= c+1; j++){
                    suma = suma + matriz[i][j];
                }
            }
        }else if(c == 0){
            for(int i = f-1; i<=f+1;i++){
                for(int j= c; j<= c+1; j++){
                    suma = suma + matriz[i][j];
                }
            }
        }else if (c == 4){
            for(int i = f; i<=f+1;i++){
                for(int j= c-1; j<= c; j++){
                    suma = suma + matriz[i][j];
                }
            }
        }else{
            for(int i = f-1;i<=f+1;i++){
                for(int j = c-1; j<= c+1; j++){
                    suma = suma + matriz[i][j];
                }
            }
        }
    */   
        return suma;
    }
   
   
   
}

// Parte 2
void mostrarTablero(int matriz[5][5]){
    for(int i=0; i<5;i++){
        for(int j=0 ; j<5; j++){
            if(matriz[i][j]==0){
                cout << '-' ;
            }else{
                cout << '*' ;
            }
           
        }
        cout <<endl;
    }
}

int main()
{
    int matriz[5][5]={{1,0,1,1,0},{0,1,1,0,1},{0,0,0,1,0},{0,0,0,0,0},{1,0,1,0,0}};
    cout << resultado(matriz,4,4) << endl; // Pueden colocar en el 4,4 cualquier otro valor de la matriz
    mostrarTablero(matriz);
    return 0;
}