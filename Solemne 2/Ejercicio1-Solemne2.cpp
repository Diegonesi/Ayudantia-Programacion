/*

(15 ptos) Se esta realizando una revision de los tiempos que toma el traslado en la linea 1 de la red metro santiago,
la cual tiene 27 estaciones. COnsidere que se tiene un arreglo de tamaño 27 donde cada celda representa una estacion 
(de la 0 a la 26) y el valor de cada celda representa el tiempo, en minutos, de traslado desde la estacion anterior. 
Asi y obviamente, la celda 0 siempre valdra 0, la celda 1 el tiempo que tarda el metro desde la estacion 0 a la 1, 
la celda 2 el tiempo que tarda de la estacion 1 a la 2 y asi sicesivamente. En base a lo anterior se pide programar 
la funcion int tiempoTraslado(int redlinea1[27],int origen, int destino), que devuelve el tiempo necesario para 
viajar desde la estcion origen hasta la estacion destino. Si se entrega como parametro alguna estacion invalidad 
debe retornar -1, considere que la estacion origen debe ser menor o igual al destino.

Ejemplo: Si los tiempos desde la estacion 0 hasta la 8 son {0,1,3,4,2,3,2,1,6}, el tiempo
 de traslado entre estaciones 3 y 7 sera 3 + 3 + 2 + 1 = 8


 */

#include <iostream>
using namespace std;

int tiempoTraslado(int redlinea1[9],int origen, int destino){

    int suma =0;
    if (origen <= destino){ // El ejercicio nos pide esto pero los casos de que origen o destino sean < 0 o > 27 habria que contemplarlo (agregar restriccion)
        for (int i = origen+1; i <= destino; i++)
        {
            suma = suma + redlinea1[i];
        }
    }else{
        return -1;
    }

    return suma;
}


int main()
{
   int redlinea[9] = {0,1,3,4,2,3,2,1,6};

   cout<<tiempoTraslado(redlinea,3,7);

}