/* 
Genere un Programa en el que el usuario tendrá que colocar cuantos niveles quiere para generar una pirámide con *.
Nota: La pirámide debe ser del siguiente estilo.  
Cada nivel es un numero impar.
        *
      ***
    *****
Hint: string(numero, ’carácter a repetir’)

*/
#include <iostream>
using namespace std;


int main(){
    
    int nivel;

    cout<<"Seleccione la cantidad de niveles que tendra nuestra piramide:"<<endl;
    cin>>nivel;
    
    for (int i = 1; i <= nivel; i++)
    {
        cout << string(nivel -i, ' ');
        cout << string(2*i -1, '*') << endl;
        
    }
    


    return 0;
}