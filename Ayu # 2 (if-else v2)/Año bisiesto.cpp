/* Cree un programa para decir si el año ingresado es bisiesto o no.
*/
#include <iostream>
using namespace std;


int main(){

    int anno;
    cout<<"Ingrese un año:"<< endl;
    cin>>anno;
    if(anno%400==0){
        cout<<anno<<" es bisiesto"<<endl;
    }else{
        cout<<"No es bisiesto"<<endl;
    }
    return 0;
}