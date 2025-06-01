/*
Cree un programa donde usted como un heroe debe enfrentarse al jefe de nuestra historia el rey demonio
Por motivos de la trama, el rey demonio sufre de una maldicion que hace que este dormido y no ataque, 
usted como heroe tiene 4 tipos de ataques cada uno con daños diferentes
Condicion:
- Usar funciones para aplicar un ataque 
- El Rey demonio tiene 100 de vida
- 
*/
#include <iostream>
using namespace std;

int Perder_vida(int& vida, int dmg){
    vida = vida - dmg;
    cout<< -dmg <<" de vida"<<endl;
    return vida;
}

int main(){
    string nombre = "Heroe";
    int vida = 10;
    string jefe = "Rey demonio";
    int vida_jefe = 100;
    
    while (vida_jefe > 0)
    {      
        int seleccionar;
        cout <<"Enemigo: "<< jefe<<endl;
        cout << "Vida del enemigo: "<<vida_jefe<<endl;
        cout<<string(100,'=')<<endl;

        cout<<nombre<<endl;
        cout<<"Vida Actual: "<<vida<<endl;
        cout<<"Que Accion desea realizar: "<<endl;
        cout<<"1- Ataque basico"<<endl;
        cout<<"2- Magia de Fuego"<<endl;
        cout<<"3- Invocar a Pikachu"<<endl;
        cout<<"4- Descansar"<<endl;
        cout<<"5- Rendirte en tu aventura"<<endl;
        cin >> seleccionar;

        if (seleccionar == 1)
        {   
            cout<<"Decides arriesgarlo todo saltando con espada en mano, realizando un ataque cortante"<<endl;
            cout<<"El Rey demonio pierde";
            Perder_vida(vida_jefe,20);
        }else if (seleccionar == 2)
        {   cout<<"Te cansaste de ser buena onda, reunes todo el mana llamando a los espiritus del lugar para invocar una bola de fuego"<<endl;
            cout<<"El Rey demonio pierde";
            Perder_vida(vida_jefe,30);
        }else if (seleccionar == 3)
        {   cout<<"Te cansaste de ser como los demas, realizas un portal que ha traido a una criatura magica llamada pikachu, no se comunica mucho solo dice Pika Pika, pero parece aliada"<<endl;
            cout<<"Pikachu: Lanza impactrueno";
            cout<<"Sorprendentemente la criatura solto un rayo generado de quien sabe donde"<<endl;
            cout<<"El Rey demonio pierde";
            Perder_vida(vida_jefe,50);
        }else if (seleccionar == 4)
        {
            
            cout<<"Estabas muy cansado y decides descansar al lado del rey demonio"<<endl;
            cout<<"Ganas ";
            Perder_vida(vida,-2);
        }else if (seleccionar == 5)
        {
            cout<<"Nuestro heroe pierde toda esperanza por el aura del Rey Demonio."<<endl;
            cout<<"Se retira derrotado a su hogar donde entrena para algun dia derrotar"<<endl;
            break;
        }else{
            cout<<"Al momento de realizar un ataque te tropezaste, y no haces nada"<<endl;
            Perder_vida(vida,2);
            if(vida <= 0){
                cout<<"Nuestro heroe inesperadamanete se mato solo."<<endl;
                break;
            }
        }
        
        
        
    }  
    cout<<string(100,'=')<<endl;
    if(vida_jefe <= 0){
        cout<<"El heroe derroto al rey demonio, feliz y contento por su aventura decide seguir entrenando para mejorar y ser mas fuerte"<<endl;
    }
    cout<<"Fin de la partida"<<endl;

       

    
    return 0;
}