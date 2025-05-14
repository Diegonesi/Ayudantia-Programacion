#include <iostream>
using namespace std;

int main(){
    
    char Texto[]= "Soy un texto en CHAR";
    int n = sizeof(Texto) / sizeof(Texto[0]);

    cout<<Texto<<" | "<<Texto[2]<<" | Tamaño del arreglo Texto: "<<n<<" | "<<Texto[22]<<endl;  // Incluye el carácter nulo '\0' [21]
    
    cout<<string(50, '=')<<endl;//Linea que separa el resultado
    // Para transformar en un string se debe realizar lo siguiente:

    string Primer_String = Texto;
    cout<<Primer_String << " | " << Primer_String[0]<<" | Tamaño con String: "<<Primer_String.size()<<" | "<<Primer_String[23]<<endl; // Asi mismo si haces esto puedes ver el caracter en la posicion n del string
    
    // Vemos como en el string o char existe mas tamaño que el definido, esto llama a caracteres de la tabla ASCII que estan en una direccion de memoria. (Puede ser "Vacio")

    cout<<string(50, '=')<<endl;//Linea que separa el resultado

    string Texto_2= "Me transformare en CHAR";
    const char* cstr = Texto_2.c_str(); // Se transformo en una cadena de caracteres
    cout<<cstr<<endl;

    return 0;
}