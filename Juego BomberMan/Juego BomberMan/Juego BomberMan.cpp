// Juego BomberMan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "GameObject.h"
#include <vector>
#include <typeinfo>
#include <iostream>

#include "Muro.h"

#include "Bomba.h"
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


vector<GameObject*> detectarMurosExplotar(vector<vector<GameObject*>> escena, Bomba b)
{
    vector<GameObject*> listaAExplotar;
    if (b.tipo == 'N')
    {

        //el elemento que esta arriba
        if (typeid(escena[b.posicion.y-1][b.posicion.x]).name() == "Muro")
        {
            listaAExplotar.push_back(  escena[b.posicion.y - 1][b.posicion.x]);
        }
    }
    return listaAExplotar;
}



int main()
{

  /*  int a, b, c;
    cin >> a >> b;
    c = a + b;
    cout << c;*/

    
    //Muro m1,m2('C'), m3('C',3,4);  //m1 -> tipo = 'c', posicion(10,15)
    //m3.dibujar();
    
    //m3.desaparecer();

    //Muro m1, m2, m3, m4, m5, m6, m7, m8, m9, m10;

    //vector de  6*5 (6 filas y 5 columnas)
    
    vector<vector<GameObject*>> escena(5);
    //primera fila
    escena[0].push_back(new Muro('L', 0, 0));    
    escena[0].push_back(new Muro('L', 1, 0));
    escena[0].push_back(new Muro('L', 2, 0));
    escena[0].push_back(new Muro('L', 3, 0));
    escena[0].push_back(new Muro('L', 4, 0));
    escena[0].push_back(new Muro('L', 5, 0));

    //segunda fila    
    escena[1].push_back(new Muro('L', 0, 1));
    escena[1].push_back(new Muro('P', 1, 1));
    escena[1].push_back(new Muro('L', 2, 1));
    escena[1].push_back(new Muro('L', 3, 1));
    escena[1].push_back(new Muro('P', 4, 1));
    escena[1].push_back(new Muro('L', 5, 1));


    //tercera fila
    escena[2].push_back(new Muro('L', 0, 2));
    escena[2].push_back(new Muro('P', 1, 2));
    escena[2].push_back(new Muro('L', 2, 2));
    escena[2].push_back(new Muro('L', 3, 2));
    escena[2].push_back(new Muro('P', 4, 2));
    escena[2].push_back(new Muro('L', 5, 2));


    //CUARTA fila
    escena[3].push_back(new Muro('L', 0, 3));
    escena[3].push_back(new Muro('P', 1, 3));
    escena[3].push_back(new Muro('P', 2, 3));
    escena[3].push_back(new Muro('P', 3, 3));
    escena[3].push_back(new Muro('P', 4, 3));
    escena[3].push_back(new Muro('L', 5, 3));


    Bomba b1;
    vector<GameObject*> lista = detectarMurosExplotar(escena, b1);
    for (auto it = lista.begin(); it != lista.end(); it++)
    {
        //cout << it << endl;
        //lista.at
        ///cout <<(*it)->Posicion.x << " " << it->Posicion.y << endl;
        cout << (*it)->posicion.x << " " << (*it)->posicion.y << endl;


   // std::cout << "Hola Mundo Cruel!\n";
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
