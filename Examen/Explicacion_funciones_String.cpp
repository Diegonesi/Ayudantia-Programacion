#include <iostream>
using namespace std;

int main() {
    
    string texto;
    
    /*
    cout<<"Ingrese un texto: "<<endl;
    cin>>texto; // Si ingresamos: "Hola buenas tardes"
    cout<<texto<<endl; // Solo imprime "Hola"
    //Para poder guardar todo lo escrito se utiliza
    */
    cout<<"Ingrese un texto: (Escribe: Hola buenas)"<<endl; 
    getline(cin,texto);
    cout<<"Texto ingresado: "<<texto<<endl;
    // Dan el mismo resultado
    cout<<"funcion size: "<<texto.length()<<endl;
    cout<<"funcion length: "<<texto.size()<<endl;
    //Encontrar un caracter:
    cout<<"El primer 'a' lo encuentra del Hola: "<<texto.find('a')<<endl; // nos da la posicion del primer caracter a, si se repite 
    // si utilizo .rfind('caracter'); buscara la posicion del primer 'caracter' desde el final
    cout<<"El primer 'a' del final al inicio lo encuentra en buenas: "<<texto.rfind('a')<<endl;

    // Usos practicos de substr y find
    string str="Hola buenas tardes, todo bien.";
    string str2 = str.substr (5,6); // crea un nuevo string del string original que guarda "buenas" 
    // Crea un nuevo string desde el caracter en la posicion 5, y agarra los proximos 6 caracteres
    //, es decir, la 'b' esta en la posicion 5 luego 'b' 'u' 'e' 'n' 'a' 's' agarro 6 caracteres contando el 'b'
    int posicion = str.find("todo");      // Encuentra el primer "todo" (posicion del t) 
    string str3 = str.substr (posicion);     // va desde la palabra encontrada (en este caso "todo") o letra hasta el final
    cout << str2 << ", " << str3 << '\n';

    // No creo que les pregunten algo con esto:
    string str4 ("busca por una palabra que no este en la funcion...");
    int posicion1 = str4.find_first_not_of("abcdefghijklmnopqrstuvwxyz "); // va a buscar cualquier caracter que no este aqui
    cout<<posicion1<<endl; // entrega que la posicion 47 esta el primer '.' que es lo que no esta en la lista de caracteres de la funcion de arriba
    posicion1 = str4.find_first_not_of("abcdefghijklmnopqrstuvwxyz. "); // agregamos el '.'
    cout<<posicion1<<endl; // entrega el -1 porq encontro todos los caracteres


    //


    return 0;
}
