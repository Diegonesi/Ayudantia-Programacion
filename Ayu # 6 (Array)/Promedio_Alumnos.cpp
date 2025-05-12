/*
Cree un programa donde se deba calcular el promedio de notas, 
los alumnos no necesariamente pertenecen al mismo curso 
por lo que la cantidad de notas variara por alumno
en donde 
Luis obtuvo 4.3 7 3.7 
Juan obtuvo 3.8 3.2 7 7 5.3
Diego obtuvo 7 2.2 1 3.9 7 5.2 
Condicion: se deben usar ciclos
*/
#include <iostream>
using namespace std;

int main(){
    float Luis[]={4.3,7,3.7},Juan[]={3.8,3.2,7,7,5.3} ,Diego[]={7,2.2,1,3.9,7,5.2} ;
    
   
        float promedio=0;
        int n = 0;
    
        n=sizeof(Luis) / sizeof(Luis[0]);
        for(int j = 0; j < n; j++)
        {   
            promedio+=Luis[j];
        }
        cout<<"Luis: "<<promedio/n<<endl;
        n=sizeof(Juan) / sizeof(Juan[0]);
        for (int j = 0; j < n; j++)
        {   

            promedio+=Juan[j];

        }
        cout<<"Juan: "<<promedio/n<<endl;
    
        n=sizeof(Diego) / sizeof(Diego[0]);
        for (int j = 0; j < n; j++)
        {   
            promedio+=Diego[j];
        }
        cout<<"Diego: "<<promedio/n<<endl;
       

    
    return 0;
}