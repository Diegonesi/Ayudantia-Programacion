/*
Cree un programa, que dado un arreglo arr[]={1,10,3,4,5}, son los productos guardados en una empresa de tecnologia.
Estos productos se pueden manipular, observar y vender.
*/
#include <iostream>
using namespace std;

int vender_agregar(int& a,int b){
    a = a + b;
    return a;
}

int main(){
  
    int arr[]={1,10,3,4,5};
    while (true)
    {      
        int seleccionar,producto,cuantos;
        cout<<"1- Ver inventario"<<endl;
        cout<<"2- Agregar productos"<<endl;
        cout<<"3- Vender Productos"<<endl;
        cout<<"Para salir presione cualquier otro numero"<<endl;
        cin >> seleccionar;

        if (seleccionar == 1)
        {   
            cout<<string(100,'=')<<endl;
            for (int i = 0; i < 5; i++){
                cout<<"Producto "<<i<<": "<<arr[i]<<endl;
            }
            cout<<string(100,'=')<<endl;
        
        }else if (seleccionar == 2){
            cout<<"Que producto desea agregar"<<endl;
            cin>> producto;
            if(producto>=5 || producto<0){
                cout<<"Producto inexistente"<<endl;
            }else{
               cout<<"Cuantos: "<<endl;
                cin>> cuantos;
                vender_agregar(arr[producto],cuantos); 
            }
            
        }else if (seleccionar == 3){
            cout<<"Que producto desea vender"<<endl;
            cin>> producto;
            if(producto>=5 || producto<0){
                cout<<"Producto inexistente"<<endl;
            }else{
               cout<<"Cuantos: "<<endl;
                cin>> cuantos;
                if(cuantos > arr[producto]){
                    cout<<"No hay tanta existencia del producto "<<producto<<endl;
                }else{
                    vender_agregar(arr[producto],-cuantos); 
                }
                
            }
        }else{
            cout<<"Gracias por usarme :D"<<endl;
            break;
        }
        
        
        
    }  

    
    return 0;
}