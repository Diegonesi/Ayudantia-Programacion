/*
Usted gano un reconocido premio de una puerta de metal, como no quiere
calcular nada manualmente, necesita generar un programa. Que dado la altura
(3.3), ancho (2) y grosor (1.7) de la puerta calcule el volumen, el area y por
ultimo la potencia de 2 de la raiz al cubo del area. Asi mismo, le pidieron
generar un nuevo texto del codigo ganador, que posea 3 substrings del texto
que viene despues de la primera ‘a’, despues de la primera ‘i’ y despues de la
ultima ‘a’. Se agarran los caracteres en base a los resultados del volumen, area
y la potencia de 2 de la raiz al cubo del area. El codigo ganador es:
“ae231jns58jd9rogmi18237dhe50a84hsdnajdsfna7f74ga087ega098t437gw0esu
rg07w8ehspnrutg8e4spiorhye485-9hgb9sur7hy9e-a8husefaijguhewr0w9-
9afhs08hf9hgwg4w-9ireughw489afnsudgh84-9aiuhuhbudfys8934fw0jf”


*/
#include <iostream>
#include <cmath>
using namespace std;

double calcular_volumen(double h, double a, double l){
    int volumen = h*a*l;
    return volumen;
}

double calcular_area(double h, double a){
    int area = h*a;
    return area;
}

double calcular_potencia_raiz_area(double h, double a){
    int area = calcular_area(h,a);
    return (int)pow(pow(area,(double)1/3),2);

}

int main() {
    string codigo = "ae231jns58jd9rogmi18237dhe50a84hsdnajdsfna7f74ga087ega098t437gw0esurg07w8ehspnrutg8e4spiorhye485-9hgb9sur7hy9e-a8husefaijguhewr0w9-9afhs08hf9hgwg4w-9ireughw489afnsudgh84-9aiuhuhbudfys8934fw0jf";
    double altura = 3.3, ancho = 2, largo = 1.7;
    // Primero calculamos los valores que necesitamos para extraer los fragmentos del codigo:
    cout<<"Resultados de los calculos para extraer el codigo:"<<endl;
    cout<<"Area: "<<calcular_area(altura,ancho)<<endl;
    cout<<"Volumen: "<<calcular_volumen(altura,ancho,largo)<<endl;
    cout<<"Potencia de 2 de la raiz al cubo del area: "<<calcular_potencia_raiz_area(altura,ancho)<<endl;
    // Guardar posiciones
    int primer_a = codigo.find('a');
    int primer_i = codigo.find('i');
    int ultimo_a = codigo.rfind('a');
    //Escribir codigo final
    cout<<"El codigo final es: "<<endl;
    cout<<codigo.substr(primer_a,calcular_area(altura,ancho))<<codigo.substr(primer_i,calcular_volumen(altura,ancho,largo))<<codigo.substr(ultimo_a,calcular_potencia_raiz_area(altura,ancho))<<endl;
    
    return 0;
}
