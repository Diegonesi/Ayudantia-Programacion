/*
Cree un programa, que dado un arreglo arr[]={1,2,3,4,5}, 
necesita ver la direccion de memoria de cada numero por separado y
 tener una funcion que pueda cambiar los valores del arreglo multiplicandolos por 2.
*/
#include <iostream>
using namespace std;

void cambiar_arr(int *arr, int size){
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i]*2;
    }
    
}

void imprimir(int *arr, int size){
    cout<<"Direccion de memoria y valores del arreglo"<<endl;
    cout<<string(50,'=')<<endl;
    for (int i = 0; i < size; i++)
    {
       cout<<&arr[i]<<"|"<<arr[i]<<endl;    
    }
    cout<<string(50,'=')<<endl;
}

int main(){
  
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    imprimir(arr,size);
    
    cambiar_arr(arr,size);
    
    imprimir(arr,size);

    return 0;
}