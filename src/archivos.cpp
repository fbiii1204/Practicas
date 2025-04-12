#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])

{
    ofstream archivoSalida;


//abrir archivo de salida
archivoSalida.open ("archivo_salida.txt");
if (!archivoSalida){
    cerr << "Error al abrir el archivo de salida."<<endl;
    return 1;
}
//Escribir en el archivo de salida
    archivoSalida<<"Hola, este es un archivo de salida"<<endl;

//Cerrar el archivo de salida
    archivoSalida.close ();
//--------------------------------------------------------------------------------------

    ifstream archivoEntrada;
    string linea;
    //Abrir el archvo de entrada
    archivoEntrada.open("archivo_salida.txt");
    if(!archivoEntrada){
        cerr << "Error al abrir el archivo de emtrada." << endl;
        return 1;
    }
    //leer el arciho de entrada
    while (getline(archivoEntrada, linea)){
        cout << linea << endl;
    }
    //cerrar el archivo de entrada
    archivoEntrada.close();
    
    return 0;
}

