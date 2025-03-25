/*
Laboratorio 1

Programación 1.
Un equipo de carreras necesita un programa en C++ que entregue el ranking top 3 de los mejores pilotos, que calcule la velocidad de un auto durante una vuelta en la pista y lo clasifique según su rendimiento.

En el ranking no debe mostrar el nombre completo del piloto, sino un apodo que será las primeras 3 letras de su nombre en mayúscula.

El programa debe:
1.a) Pedir al usuario:
o La distancia de la pista en kilómetros (usar float)esto se pide solo 1 vez y será la misma para todos.

1.b) definir ustedes mismos:
o El nombre del piloto (usar string)
o El tiempo que tardó en completar la vuelta en segundos (usar float)

2. Calcular la velocidad en km/h usando la fórmula:
Velocidad (km/h) = (distancia / tiempo_en_horas)
*Recuerda que el tiempo debe convertirse a horas.

3. Clasificar a los pilotos según la velocidad promedio siendo el top 1 el mas rápido y el top 3 el más lento.

4. Mostrar por pantalla: Una lista de números del 1 al 3 con sus respectivos Apodos y sus velocidades.

5. Se puede hacer en parejas o solo. El archivo .cpp lo deben subir a la plataforma canva, se creará una tarea para que la puedan subir ahí. Lo deben subir ambos compañeros.

6. El nombre del archivo debe ser
[NombreYApellidoCompañero1]_[NombreYApellidoCompañero2].cpp
Por ejemplo
LuisPerez_JuanMunoz.cpp
*Si lo hacen solos el nombre del archivo seria por ejemplo “LuisPerez.cpp”
*/
#include <iostream>
using namespace std;

int main(){
    
    float Pista, t1,t2,t3,v1,v2,v3;
    string p1,p2,p3;
    p1 = "Diego";
    p2 = "Valentina";
    p3 = "Julian";

    cout<<"Pilotos: "+ p1 + ", "+ p2 + ", "+ p3<<endl;
    //Recordar que los tiempos estan en segundos
    t1 = 12000;
    t2 = 9000;
    t3 = 15000;
    cout<<"Ingrese distancia de la pista (Km):"<<endl;
    cin>>Pista;

    //calcular las velocidades  V = d/t [Km/h] | 1 [seg] a [h] = 1/3600

    v1 = Pista/(t1/3600);
    v2 = Pista/(t2/3600);
    v3 = Pista/(t3/3600);

    //Clasificar pilotos 
    cout <<"Clasificacion"<<endl;
    
    // Saber quien es el primero:
    if((v1 > v2 && v2 > v3) || (v1 > v3 && v3 > v2)){
        
        cout<<"1- "+ p1.substr(0,3) + " Velocidad: " << v1 <<endl;

    }else if((v2 > v1 && v1 > v3) || (v2 > v3 && v3 > v1)){
        
        cout<<"1- "+ p2.substr(0,3) + " Velocidad: " << v2 <<endl;
        
    }else if((v3 > v2 && v2 > v1) || (v3 > v1 && v1 > v2)){

        cout<<"1- "+ p3.substr(0,3) + " Velocidad: "<< v3 <<endl;

    }

    // Saber quien es el segundo:
    if((v1 > v2 && v1 < v3) || (v1 > v3 && v1 < v2)){
        
        cout<<"2- "+ p1.substr(0,3) + "| Velocidad: " << v1 <<endl;

    }else if((v2 > v1 && v2 < v3) || (v2 > v3 && v2 < v1)){
        
        cout<<"2- "+ p2.substr(0,3) + "| Velocidad: " << v2 <<endl;
        
    }else if((v3 > v2 && v3 < v1) || (v3 > v1 && v3 < v2)){

        cout<<"2- "+ p3.substr(0,3) + "| Velocidad: "<< v3 <<endl;

    }

    // Saber quien es el tercero:
    if((v1 < v2 && v2 < v3) || (v1 < v3 && v3 < v2)){
        
        cout<<"3- "+ p1.substr(0,3) + " Velocidad: " << v1 <<endl;

    }else if((v2 < v1 && v1 < v3) || (v2 < v3 && v3 < v1)){
        
        cout<<"3- "+ p2.substr(0,3) + " Velocidad: " << v2 <<endl;
        
    }else if((v3 < v2 && v2 < v1) || (v3 < v1 && v1 < v2)){

        cout<<"3- "+ p3.substr(0,3) + " Velocidad: "<< v3 <<endl;

    }
    
    

    return 0;
}