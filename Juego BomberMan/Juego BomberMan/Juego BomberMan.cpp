// Juego BomberMan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Muro.h"
using namespace std;
//clases en c++
//.cpp  -> tiene el codigo fuente, el funcionamiento de la clase
//.h  -> firmar(funcionamiento) y los atributos de la clase (publico - interfaz)


//
//class Nombre_clase  //.h   ->header  
//{
//    //modificadores de acceso (Encapsulamiento)  ->muchos elementos van estar ocultos y otros
//    // a disposicion del resto de objetos
//    // private, pubic, protected
//    //atributos y compartimiento
//    //datos, variables
//    //funciones
//
//
//public:
//    //declara variables publicas
//    //definir funciones publicas
//private :
//    //declara variables ocultas
//    //definir funciones ocultas para uso EXCLUSIVO de la clase
//protected:
//    //  .
//    //  .
//
//
//};
//
////compartamiento se lo define el archivo .cpp
//NombreClase::funcion1()
//{
//
//}
//



int main()
{

  /*  int a, b, c;
    cin >> a >> b;
    c = a + b;
    cout << c;*/

    
    Muro m1,m2('C'), m3('C',3,4);  //m1 -> tipo = 'c', posicion(10,15)
    m3.dibujar();
    
    m3.desaparecer();
    std::cout << "Hola Mundo Cruel!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
