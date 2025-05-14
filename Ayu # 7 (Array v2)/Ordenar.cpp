/*
Cree un programa donde dado el siguiente arreglo int arreglo[] = {3,5,2,4,1};
ordena de menor a mayor del arreglo
Pista: Utilizar ciclos y condicionales 
Cuidado con el tamaño del arreglo
*/
#include <iostream>
using namespace std;

int main(){
    int arr[] = {3,5,2,4,1};

    for (int i = 0; i < 5; i++){ // Primer algoritmo para ordenar llamado bubblesort 
        if(i != 4){
            for (int j = i+1; j < 5; j++){
                if(arr[i]>arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}