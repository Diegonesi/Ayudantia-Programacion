#include <iostream>
using namespace std;

void costo_del_camino(int matriz[5][5]){

    bool moverse_derecha = true;
    int moverse_abajo = 0;
    int suma = 0;

    for(int i = 0; i<5; i++){

        for (int j = moverse_abajo; j < 5; j++){
            //cout<<"i "<<i<<"j "<<j<<endl; // veo q posicion estoy
            if( matriz[i][j]!= 0 && moverse_derecha == true){ // sumo si solo me puedo mover a la derecha
                moverse_abajo = j; //guardo la posicion actual (para las esquinas)
                cout<<"sumo: "<<matriz[i][j]<<endl;
                suma = suma + matriz[i][j];
                if(j == 4 && i != 4){
                    cout<<"Me muevo abajo en la posicion: "<< moverse_abajo<<endl;
                }
                
            }else if(matriz[i][j] == 0 && moverse_derecha == true){ // en caso de al moverme a la derecha hay un 0 y este sea verdadero se vuelve falso
                moverse_derecha = false;
                if (matriz[0][0]== 0){
                    cout<<"No puede regresar a la comarca "<<endl;
                }else{
                    moverse_abajo = j-1; // guardo la posicion anterior
                    cout<<"Me muevo abajo en la posicion: "<< moverse_abajo<<endl;
                }
            }else{

            }
        }
        moverse_derecha = true;
    }

    cout<<"La suma total es: "<<suma<<endl;
}

int main() {
    int matriz[5][5] = {{1,1,0,2,1},{0,1,0,2,2},{0,2,1,2,0},{0,0,0,1,2},{0,0,0,0,2}}; //{{2,0,0,2,1},{1,0,0,2,2},{2,2,0,2,0},{0,2,1,1,0},{0,0,0,1,2}};
    costo_del_camino(matriz);
    return 0;
}
