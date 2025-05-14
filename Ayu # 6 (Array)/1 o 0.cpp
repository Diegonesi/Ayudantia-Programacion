/*
Cree un programa donde dado el siguiente arreglo arr[]={1,0,1,1,1,0,0,1,1,1,1,1,0,0,0,1,0,0,1,1,0,0,0,1,1,1,1,0},
Debe decir en que posicion esta cada 1 y cuantos 1 hay. 
*/
#include <iostream>
using namespace std;

int main(){
    
    int arr[]={1,0,1,1,1,0,0,1,1,1,1,1,0,0,0,1,0,0,1,1,0,0,0,1,1,1,1,0},n=0;
    cout<<"Hay 1 en las posiciones: ";
    for (int i = 0; i < ( sizeof(arr) / sizeof(arr[0]) ); i++)
    {
        if(arr[i]==1){
            cout << i << " ";
            n++;
        }
    }
    
    cout<<"\n Hay "<<n<<" 1 "<<endl;
    

    return 0;
}