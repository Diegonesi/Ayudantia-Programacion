
/* Cree un programa de inicio de sesion, donde se le pida al usuario su nombre y contraseña, 
en donde se debe crear un codigo de seguridad con los primeros 3 digitos del nombre de usuario y los 3 ultimos digitos de la contraseña.
El nombre de usuario para acceder es: Diego_01
La contraseña para acceder es: password
*/
#include <iostream>
using namespace std;


int main(){
    
    string username, password;
    
    cout << "Ingrese el username: "<<endl;
    
    cin >> username;
    
    cout<<"Ingrese password: "<<endl;
    
    cin >> password;

    if (username == "Diego_01" && password == "password") {

        cout << "Bienvenido de vuelta "+ username << endl;

        cout<<"Su codigo de seguridad es: "<< username.substr(0,3) + password.substr(password.length() - 3,3)<<endl;

    }else if(username != "Diego_01" && password == "password" || username == "Diego_01" && password != "password" ){

        cout<<"Nombre de usuario o contraseña erroneo intente de nuevo."<<endl;

    }else{

        cout<<"Ocurrio un error."<<endl;

    }

    return 0;
}