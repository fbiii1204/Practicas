#include <iostream>
using namespace std;

class Chorizo{
    private:
        bool size;
        bool encendido;
        bool otro;

    public:
        void Inicializar(){
            size = 1;
            encendido = true;
            otro = true;

        }    
};

int main(int argc, char const *argv[])
{
    cout<<"Tamaño de memoria:"<<endl;
    cout<<"Tamaño int: "<<sizeof(int)<<endl;
    cout<<"Tamaño char: "<<sizeof(char)<<endl;
    cout<<"Tamaño bool: "<<sizeof(bool)<<endl;
    cout<<"Tamaño float: "<<sizeof(float)<<endl;
    cout<<"Tamaño double: "<<sizeof(double)<<endl;
    cout<<"Tamaño void: "<<sizeof(void)<<endl<<endl;


int a=27;
int b=50;
b;
cout<<"Memoria Estatica: "<<endl;
cout<<"Direccion a: "<<&a<<endl;//operador de direccion
cout<<"Valor a: "<<a<<endl;
cout<<"Tamaño a: "<<sizeof(a)<<endl;
cout<<"Direccion b: "<<&b<<endl;
cout<<"Valor b: "<<b<<endl;
cout<<"Tamaño b: "<<sizeof(b)<<endl;

cout<<endl<<"------------------------------------------------------------------------------------- "<< endl;
cout<<"Direcciones de memoria: "<<endl;
cout<<"------------------------------------------------------------------------------------- "<< endl;
int* direccionA = &a;//direccion y tamaño
cout<<"valor de DireccionA: "<<direccionA<< endl;
cout<<"Tamaño puntero: "<<sizeof(bool*)<<endl;
//1 byte= 8 bits
cout<<"Direccion (&) de DireccionA: "<<&direccionA<< endl;//operador de direccion
cout<<"Indireccion (*) de direccionA: "<<*direccionA<< endl;//operador de indireccion

cout<<endl<<"------------------------------------------------------------------------------------- "<< endl;
cout<<"Arreglos"<< endl;
cout<<"------------------------------------------------------------------------------------- "<< endl;
int arreglo[10];
cout<<"Direccion de arreglo: "<<&arreglo<<endl;
cout<<"Direccion de arreglo [0]: "<<&arreglo[0]<<endl;
cout<<"Direccion de arreglo [1]: "<<&arreglo[1]<<endl;
cout<<"Direccion de arreglo +0: "<<&arreglo + 0<<endl;
cout<<"Direccion de arreglo +1: "<<&arreglo + 1<<endl;

cout<<endl<<"------------------------------------------------------------------------------------- "<< endl;
cout<<"Objetos :"<< endl;
cout<<"------------------------------------------------------------------------------------- "<< endl;
cout<<"Tamaño Chorizo: "<<sizeof(Chorizo)<<endl;
Chorizo pruebas;
cout<<"Direccion Chorizo: "<<&pruebas<<endl;

cout<<endl<<"------------------------------------------------------------------------------------- "<< endl;
cout<<"Memoria dinamica :"<< endl;
cout<<endl<<"------------------------------------------------------------------------------------- "<< endl;
cout<<"Malloc"<<malloc(sizeof(int))<<endl;
//guardar direccion en un puntero
void* memoriaDinamica = malloc((sizeof(int)));

cout<<endl<<"------------------------------------------------------------------------------------- "<< endl;
cout<<"Cast variables: "<<endl;
int* punteroEntero = (int*)malloc(sizeof(int));
cout<<endl<<"------------------------------------------------------------------------------------- "<< endl;
*punteroEntero = 5;
cout<<"Direccion: "<<punteroEntero<<endl;// * si quiero pasar de direccion a valor 
cout<<"Valor: "<<*punteroEntero<<endl;

//liberar memoria
free(punteroEntero);

cout<<endl<<"------------------------------------------------------------------------------------- "<< endl;
cout<<"Memoria dinamica C++ (objetos): "<<endl;
cout<<endl<<"------------------------------------------------------------------------------------- "<< endl;
cout<<"C :"<<(Chorizo*)malloc(sizeof(Chorizo))<<endl; 
cout<<"C++ :"<<new Chorizo()<<endl;

Chorizo* punteroChori = new Chorizo();

//c
Chorizo* punteroC  = (Chorizo*)malloc (sizeof(Chorizo));
(*punteroC).Inicializar();
free(punteroC);

//c++
Chorizo* punteroCXX = new Chorizo();
delete punteroCXX;

return 0;
}