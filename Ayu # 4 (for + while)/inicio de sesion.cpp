/* 
Genere un menú infinito, en donde se pueda crear un usuario o iniciar sesión. Para crear un usuario se le pedirá el nombre, y una contraseña.
Condición: Usar while()
*/
#include <iostream>
using namespace std;


int main(){
    string usuario,password;
    while (true){
    int seleccion;
    cout<<"Seleccione una opcion:"<<endl;
    cout<<"1- Iniciar sesion"<<endl;
    cout<<"2- Crear usuario"<<endl;
    cout<<"3- Salir del sistema"<<endl;
    cin>>seleccion;   
    if (seleccion == 1){
        string comprobar1,comprobar2;
        cout<<"Ingrese el nombre del usuario: "<<endl;
        cin>>comprobar1;
        cout<<"Ingrese el password: "<<endl;
        cin>>comprobar2;
        if(comprobar1 == usuario && comprobar2 == password){
            cout<<"Bienvenido "+ usuario<< endl;
            cout<<"Gracias por confiar en nosotros"<<endl;
            break;
        }else{
            cout<<"Contraseña o nombre de usuario incorrecto."<<endl;
            cout<<"Volviendo al menu"<<endl;
            cout<<string(20,'=')<<endl;
        }
    }else if (seleccion ==2){
        cout<<"Ingrese su nombre de usuario: "<<endl;
        cin>>usuario;
        cout<<"Ingrese su password: "<<endl;
        cin>>password;
        cout<<"Datos generados correctamente"<<endl;
        cout<<"Volviendo al menu"<<endl;
        cout<<string(20,'=')<<endl;
    }else if (seleccion ==3){
        break;
    }else{
        cout<<"Seleccione una opcion disponible"<<endl;
    } 
    }
    cout<<"Gracias por usar nuestro sistema"<<endl;
    return 0;
}