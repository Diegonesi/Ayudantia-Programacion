
// Cree un programa, cuyo sistema debe decidir si el numero ingresado es par o no
#include <iostream>
using namespace std;


int main(){
    cout<<"Ingrese un numero entero"<<endl;
    int n;
    cin>>n;
    cout<<"Procesando..."<<endl;
    if(n%2 != 0){
        cout<<"Este numero no es par"<<endl;
    }else{
        cout<<"Este numero es par"<<endl;
    }
    return 0;
}