/* 
Genere un programa en el que a través de la ayuda de ciclos, se puedan realizar diferentes sumatorias. 
Sumatorias a realizar:
        //n*(n+1)/2
        //n
        //(n/2)^2
*/
#include <iostream>
#include <cmath> 
using namespace std;


int main(){
    
    double suma1 = 0,suma2 = 0,suma3 = 0;
    
    
    for (int i = 0; i <= 10; i++)
    {
        suma1 += (i*(i+1))/2;

        if(i >= 5){
            suma2 += i*(i-1);
        }
       
        if(i<=3 || i>=6){
            suma3 += i;
        }
    }
    cout<<"Sumatoria 1: "<<suma1<<endl;
    cout<<"Sumatoria 2: "<<suma2<<endl;
    cout<<"Sumatoria 3: "<<suma3<<endl;

    return 0;
}