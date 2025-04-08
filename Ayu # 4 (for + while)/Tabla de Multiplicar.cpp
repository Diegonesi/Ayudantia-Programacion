/* 
Se le pedirá un numero, y se debe mostrar la tabla de multiplicación del numero seleccionado del 1 al 10
*/
#include <iostream>
using namespace std;


int main(){
    
    int numero;
    
    cout<<"Seleccione un numero, para ver su tabla de multiplicacion:"<<endl;
    cin>>numero;
    cout<<"Tabla de multiplicar del "<<numero<<endl;
    for (int i = 1; i <= 10; i++)
    {
        cout <<numero<<" * "<<i<<" = "<< i*numero <<endl;
    }
    

    return 0;
}