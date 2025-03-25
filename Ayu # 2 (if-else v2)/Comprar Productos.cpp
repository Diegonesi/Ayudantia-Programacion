/* Cree un programa para comprar productos. Despliegue una lista de productos con su precio. 
Asi mismo, si se selecciona un producto cuyo precio no sea mayor a 50 apliquele un desuento del 10%
*/
#include <iostream>
using namespace std;


int main(){
    
    string Pn1,Pn2,Pn3,Pn4,Pn5;
    int P1,P2,P3,P4,P5,seleccion;
    Pn1 = "Queso";
    Pn2 = "Pan";
    Pn3 = "Tomate";
    Pn4 = "Lechuga";
    Pn5 = "Jamon";
    P1 =30;
    P2 =50;
    P3 =80;
    P4 =75;
    P5 =20;

    cout<<"Seleccione un producto para comprar:"<<endl;
    cout<<"1 - " + Pn1 + " | Precio: " << P1 << endl;
    cout<<"2 - " + Pn2 + " | Precio: " << P2 << endl;
    cout<<"3 - " + Pn3 + " | Precio: " << P3 << endl;
    cout<<"4 - " + Pn4 + " | Precio: " << P4 << endl;
    cout<<"5 - " + Pn5 + " | Precio: " << P5 << endl;
    cin>>seleccion;
    if(seleccion==1){
        if(P1 > 50){
            cout<<"Esta comprando "+ Pn1 +" que cuesta: "<<P1*0.9<<endl;
        }else{
            cout<<"Esta comprando "+ Pn1 +" que cuesta: "<<P1<<endl;
        }

    }else if (seleccion==2){
        if(P2 > 50){
            cout<<"Esta comprando "+ Pn2 +" que cuesta: "<<P2*0.9<<endl;
        }else{
            cout<<"Esta comprando "+ Pn2 +" que cuesta: "<<P2<<endl;
        }

    }else if (seleccion==3){
        if(P3 > 50){
            cout<<"Esta comprando "+ Pn3 +" que cuesta: "<<P3*0.9<<endl;
        }else{
            cout<<"Esta comprando "+ Pn3 +" que cuesta: "<<P3<<endl;
        }

    }else if (seleccion==4){
        if(P4 > 50){
            cout<<"Esta comprando "+ Pn4 +" que cuesta: "<<P4*0.9<<endl;
        }else{
            cout<<"Esta comprando "+ Pn4 +" que cuesta: "<<P4<<endl;
        }

    }else if (seleccion==5){
        if(P5 > 50){
            cout<<"Esta comprando "+ Pn5 +" que cuesta: "<<P5*0.9<<endl;
        }else{
            cout<<"Esta comprando "+ Pn5 +" que cuesta: "<<P5<<endl;
        }

    }else{
        cout<<"Opcion invalida"<<endl;
    }

    return 0;
}