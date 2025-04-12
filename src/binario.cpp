#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Persona
{
    char nombre[50];
    int edad;
};


int main(int argc, char const *argv[])

{
    ofstream archivoSalida;


//abrir archivo de salida
archivoSalida.open ("archivo_salida.bin", ios::binary);
if (!archivoSalida){
    cerr << "Error al abrir el archivo de salida."<<endl;
    return 1;
}
Persona p1 = {"Juan",30};
Persona p2 = {"Maria",25};

//escribir en el archivo de salida
    archivoSalida.write((const char*)(&p1),sizeof(Persona));
    archivoSalida.write((const char*)(&p2),sizeof(Persona));


//Cerrar el archivo de salida
    archivoSalida.close ();
//--------------------------------------------------------------------------------------

//     ifstream archivoEntrada;
//     string linea;
//     //Abrir el archvo de entrada
//     archivoEntrada.open("archivo_salida.bin");
//     if(!archivoEntrada){
//         cerr << "Error al abrir el archivo de entrada." << endl;
//         return 1;
//     }
//     //leer el arciho de entrada
//     while (getline(archivoEntrada, linea)){
//         cout << linea << endl;
//     }
//     //cerrar el archivo de entrada
//     archivoEntrada.close();
    
 return 0;
}
