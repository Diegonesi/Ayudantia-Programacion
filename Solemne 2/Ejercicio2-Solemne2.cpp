/*

- (10 ptos) Se necesita que construya una funcion llamada int obGrupoSE(int ingresoGrupo, int integrantes), que 
devuelve el grupo socieconomico al cual pertenece una familia, la funcion recibe como parametros el ingreso del grupo
familiar y la cantidad de integrantes, debe devolver el grupo al que pertenece:

IFE = Ingreso familiar equivalente
 1 si el IFE >= 2600000
 2 si IFE >= 1000000 y IFE < 2600000
 3 si IFE >= 700000 y IFE < 1000000
 4 e.o.c (en otro caso)

Formula del IFE:
IFE = Ingreso del grupo familiar / (cantidad de integrantes)^0.7

- (15 ptos) Utilizando, obligatoriamente, la funcion anterior, se pide programar la funcion 
void revisarGrupos(int familias[100][3]), la cual recibe como parametro una matriz de 100 filas y 3 columnas.
La primera columna contiene el ingreso del grupo familiar, la segunda la cantidad de integrantes y 
la tercera el grupo socieconomico que le fue asignado como valor entero (1 a 4). Su funcion debe imprimir 
lo siguiente:

 i- Sumatoria de los ingresos de las 100 familias
 ii-Cantidad de familias en los que su nivel socieconomico fue mal calculado (lo valida con la funcion obGrupoSE)
 iii- Considerando los grupos socioeconomicos que corresponden (esto es bien calculados), imprima cuantas 
 familias pertenecen a cada grupo  y el % con respecto al total de familias


 */

#include <iostream>
#include <cmath>
using namespace std;
// Parte 1
int obGrupoSE(int I, int C){
    int IFE = I/pow(C,0.7);
   
    if(IFE >= 2600000){
        return 1;
    }else if(IFE < 2600000 && IFE >= 1000000){
        return 2;
    }else if(IFE < 1000000 && IFE >= 700000){
        return 3;
    }else{
        return 4;
    }
   
   
}
//Parte 2
void revisarGrupo(int familia[5][3]){
    // primera parte Sumatoria
    int suma = 0;
    for(int i = 0; i < 5; i++){
        suma = suma + familia[i][0]; /*Sumatoria normal*/
        cout<<"Se sumo el ingreso de la familia "<< i+1 /*Solo para contar del 1 al 100*/<<": "<< familia[i][0]<<endl; // No es necesario esto es solo para claridad del ejemplo cuando se ejecute
    }
    cout <<"Sumatoria: "<< suma << endl;
    
    // segunda parte mal calculada
    int malc = 0;
    for(int i = 0; i < 5; i++){
        if( familia[i][2] != obGrupoSE(familia[i][0],familia[i][1])){
            malc++;
            cout<<"La familia "<<i+1<<" posee calculo mal su grupo socioeconomico."<<endl; // No es necesario esto es solo para claridad del ejemplo cuando se ejecute
        }
    }
    cout <<"Cantidad Mal calculada: "<< malc << endl;
    // tercera parte % de las bien calculadas
    
    int g1 = 0,g2 = 0,g3 = 0,g4 = 0,gt = 0; // necesario para calcular los %, pueden definirlo como double
    for(int i = 0; i < 5; i++){
        if( familia[i][2] == obGrupoSE(familia[i][0],familia[i][1])){ // La pregunta depende de la anterior pero pudieran escribirlo nuevamente asi
            //cout<<" La familia "<<i<<" posee el grupo: "<< familia[i][2]<<endl; // Si quieren ver las familias que poseen un grupo bueno
            if(familia[i][2] == 1){
                g1 = g1 + 1;
            }else if(familia[i][2] == 2){
                g2++;
            }else if(familia[i][2] == 3){
                g3++;
            }else if(familia[i][2] == 4){
                g4++;
            }
        }
    }
    gt = g4+g3+g2+g1;
    // calcular %
    
   // SI quieren ver la variable del 0 al 1, pueden hacer (double)g1/gt
   /* 
    cout <<"g1: "<< (double)g1/gt << endl;
    cout <<"g2: "<< (double)g2/gt << endl;
    cout <<"g3: "<< (double)g3/gt << endl;
    cout <<"g4: "<< (double)g4/gt << endl;
    */
    // Si quieren ver la variable en % deben multiplicar * 100
    cout <<"g1: "<< 100*(double)g1/gt <<"%"<< endl;
    cout <<"g2: "<< 100*(double)g2/gt <<"%"<< endl;
    cout <<"g3: "<< 100*(double)g3/gt <<"%"<< endl;
    cout <<"g4: "<< 100*(double)g4/gt <<"%"<< endl;
}



int main() // Solo debe tener la matriz de la parte 2 y las funciones
{
   //cout << obGrupoSE(ingreso,cantidad) << endl; Con esto se puede ver el valor del grupo IFE al que pertenece una familia
   int fam[5][3] = {{1000000,2,4},{2000000,1,2},{20000000,3,1},{10000000,5,1},{3000000,3,1}}; // La ultima familia de la matriz, es decir, {3000000,3,1} posee el grupo mal
   revisarGrupo(fam);
}