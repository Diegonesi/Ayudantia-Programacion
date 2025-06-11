#include <iostream>
using namespace std;

int main() {
    // Una matriz es un conjunto de elementos que depende de cuántas dimensiones tenga

    int arr[] = {1, 2, 3}; // Matriz de una dimensión con 3 elementos (tambien conocido como vector)
    // [1 2 3]
    int matriz[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} }; // Matriz de 2 dimensiones 3x3
    // [1 2 3]
    // [4 5 6]
    // [7 8 9]
    int tridimensionalidad[2][2][2] = {{{1,2}, {3,4}}, {{5,6}, {7,8}}}; // Matriz 3D de 2x2x2

    // Tamaño de la matriz unidimensional
    int largo_arr = sizeof(arr) / sizeof(arr[0]);
    cout << "Largo del matriz unidimensional: " << largo_arr << endl;

    // Tamaño de la matriz bidimensional
    int filas = sizeof(matriz) / sizeof(matriz[0]);
    int columnas = sizeof(matriz[0]) / sizeof(matriz[0][0]);
    cout << "Filas de la matriz 2D: " << filas << ", Columnas: " << columnas << endl;

    // Tamaño de la matriz tridimensional
    int size1 = sizeof(tridimensionalidad) / sizeof(tridimensionalidad[0]); // Primer dimensión
    int size2 = sizeof(tridimensionalidad[0]) / sizeof(tridimensionalidad[0][0]); // Segunda dimensión
    int size3 = sizeof(tridimensionalidad[0][0]) / sizeof(tridimensionalidad[0][0][0]); // Tercera dimensión
    cout << "Largo de la matriz 3D: " << size1 << "x" << size2 << "x" << size3 << endl;

    // Para recorrerlo se necesita un for por cada dimension;

    cout<< string(100,'=')<<endl;
    cout<<"Matriz unidimensional: "<<endl;
    for(int i = 0; i < largo_arr; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<< string(100,'=')<<endl;
    cout<<"Matriz bidimensional: "<<endl; // Super necesario para el control
    for(int i = 0; i < filas; i++){ //Suponiendo que fuera un plano X Y
        cout<<"Fila "<<i<<endl;  //Primero fijamos el valor en Y
        cout<< "Posee las columas: ";
        for(int j= 0; j < columnas; j++){
            cout<< matriz[i][j]<<" "; // Luego recorremos los X 
        }
        cout<<endl;
    }
    cout<<endl;


    cout<< string(100,'=')<<endl;
    cout<<"Matriz bidimensional: "<<endl;
    for(int i = 0; i < size1; i++){ //Suponiendo que fuera un plano X Y
        cout<<"X: "<<i<<endl;  //Primero fijamos el valor en Y
        
        for(int j= 0; j < size2; j++){
            cout<< "Y: "<<j<<endl; 
                cout<<"Z posee: ";
            for (int k = 0; k < size3; k++)
            {
                cout<< tridimensionalidad[i][j][k]<<" "; // Luego recorremos los X 
            }
           cout<<endl;
        }
        cout<<endl;
    }
    cout<<endl;
   
    cout<<"Tal y como se ve fijo un eje o mas dependiendo de la dimensionalidad y recorro a la derecha"<<endl;
    return 0;
}
