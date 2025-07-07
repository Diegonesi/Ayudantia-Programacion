/*

Usted es un profesor cansado de generar las notas de sus estudiantes a
mano, para ello se le pide generar un codigo, que pida el nombre y apellido
del estudiante. Ademas, le pide todas las notas que posee en el semestre para
calcular el promedio. Para ello usted penso en generar una funcion para
calcular el promedio a través de un arreglo. Asi mismo, le pide decirle la
cantidad de pruebas aprobadas, el % de aprobación y la diferencia entre la
nota mas alta y la mas baja. Por ultimo, la universidad obliga al profesor a
mostrar el la raiz cuadrada del promedio y simplificar el nombre del
estudiante con la primera letra del nombre y apellido. Este año su curso tiene
3 estudiantes.
Ejemplo:
Ingresa:
Nombre: Diego Pineda | Notas: 4.2 5.4 6.0 5.2
Resultado:
DP | Promedio norma: 5.2 |Raiz cuadrada del promedio: 2.28
Aprobadas 4 |porcentaje de aprobación del 100% (Como es solo 1 alumno y aprobo
todo es 100%) | Diferencia de nota mas baja y alta: 6 - 4.2 = 1.8

*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


double calcular_promedio(double arr[4]){
    double promedio;
    for (int i = 0; i < 4; i++)
    {
        promedio =promedio + arr[i];
    }
    return promedio/4;
}


int calcular_aprobados(double arr[4]){
    int aprobados = 0;
    for (int i = 0; i < 4; i++)
    {
        if(arr[i]>=4){
            aprobados++;
        }
    }
    return aprobados;
}

double diferencia_nota_max_min(double arr[4]) {
    double nota_minima = arr[0];
    double nota_maxima = arr[0];

    for (int i = 1; i < 4; i++) {
        if (arr[i] > nota_maxima) {
            nota_maxima = arr[i];
        }
        if (arr[i] < nota_minima) {
            nota_minima = arr[i];
        }
    }

    return nota_maxima - nota_minima;
}


int main() {
    double notas[4];
    string nombre[3];
    int porcentaje_aprobacion_global=0;
    for (int i = 0; i < 3; i++)
    {
        double promedio, diferencia;
        int aprobados;
        cout<<"Ingrese el nombre y apellido del alumno: "<<endl;
        getline(cin,nombre[i]);
        
        cout<<"Ingrese las notas del alumno "<<nombre[i]<<endl;
        for (int i = 0; i < 4; i++)
        {
            cin>>notas[i];
        }
        cin.ignore(); // Se utiliza para volver a usar el getline() en la siguiente iteracion del for, si no le da error.

        promedio = calcular_promedio(notas);
        aprobados = calcular_aprobados(notas);
        diferencia = diferencia_nota_max_min(notas);
        porcentaje_aprobacion_global = aprobados;
        int posicion = nombre[i].find(' ');// La posicion nos dice donde esta el espacio y se le debe sumar 1 para tener la inicial el apellido

        cout<<"Alumno: "<<nombre[i][0]<<nombre[i][posicion+1]<<" | Promedio: "<<promedio<<" | Raiz del Promedio: "<<pow(promedio,(double)1/2)<<" | Aprobados: "<<aprobados<<" | Porcentaje de Aprobacion: "<<100*(double)aprobados/4<<"%"<<" | Diferencia de nota mas baja y alta: "<<diferencia<<endl;
    }
        
    
    return 0;
}
