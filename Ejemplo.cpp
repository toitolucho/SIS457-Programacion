// Ejemplo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Pacman.h"
#include "Jugador.h"
#include <vector>
#include <fstream>
using namespace std;

template <typename T>
T minimo(T a, T b)
{
    return a < b ? a : b;
};


template <class T>
void ordenar(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}

void imprimirElementos(vector<Jugador> array)
{
    std::vector<Jugador>::iterator inicio = array.begin();
    std::vector<Jugador>::iterator fin = array.end();
    cout << "Punteros inicalmente" << endl;
    
   /* for (int i = 0; i < array.size(); i++)
    {
        array[i].presentarDatos();

    }*/
    cout << &inicio << "  " << &fin << endl;
    for (; inicio != fin; inicio++)
    {
        inicio->presentarDatos();
        cout << &inicio << endl;
    }
    

    /*cout << "Punteros al final" << endl;
    cout << &inicio << "  " << &fin << endl;*/
    

}

//string menor(string  a, string b)
//{
//    return a < b ? a : b;
//}
//
//int menor(int  a, int b)
//{
//    return a < b ? a : b;
//}

//float menor(float  a, float b)
//{
//    return a < b ? a : b;
//}

int main()
{
    //int a;
    //nombreclase  nombreobjeto;
    //Pacman p1;

    //Pacman p2(4,4);


    ////p1.mostrar();
    //p2.mostrar();
    ////cout << p1.x << p1.y;
    //p2.mover(1);
    //p2.mostrar();
    //std::cout << "Hello World!\n";


    //float a, b, c;
    //cin >> a >> b;
    //c = minimo(a, b);
    //cout << c;
    

    //Pacman p1, p2, p3, p4, aux;
    //p2.setVelocidad(3);
    //p3.setVelocidad(8);
    //p4.setVelocidad(0);


    //Pacman lista[4] = {p1,p2,p3,p4};


    //for (int i = 0; i < 4; i++)
    //{
    //    lista[i].mostrar();
    //}
    //ordenar(lista, 4);
    //cout << endl;
    //for (int i = 0; i < 4; i++)
    //{
    //    lista[i].mostrar();
    //}


    //string nombres[] = { "Ana", "Fer", "Sam", "Ale" };
    //for (int i = 0; i < 4; i++)
    //{
    //    cout<< nombres[i] << " ";
    //}
    //ordenar(nombres, 4);
    //cout << endl;
    //for (int i = 0; i < 4; i++)
    //{
    //    cout << nombres[i] << " ";
    //}



    //aux = minimo(p1, p4);
    
    
    //aux.mostrar();

    /*Jugador j1, j2("lola","femenino"), j3("fer","masculino",3000, 10, 1), j4, j5;
    j1.presentarDatos();
    j1.formatearTiempo(false);

    vector<Jugador> jugadores;
    jugadores.push_back(j1);
    jugadores.push_back(j2);
    jugadores.push_back(j3);
    imprimirElementos(jugadores);


    jugadores.pop_back();
    jugadores.pop_back();
    imprimirElementos(jugadores);*/

    ifstream cin2("lista.txt");
    ofstream cout2("lista.txt", fstream::app);
    
    vector<Jugador> lista;
    int conta = 0;

    if (cin2.fail()) 
    {
        cout << "no se leyo el archivo";
    }
    else
    {
        string nombre, sexo, nivel;
        string puntaje;  string tiempo;

        while (cin2.peek() != EOF)
        {
            //string linea;
            getline(cin2, nombre, ';');
            getline(cin2, sexo, ';');
            getline(cin2, puntaje, ';');
            getline(cin2, tiempo, ';');
            getline(cin2, nivel, ';');
            /*cout << "Nombre :" << nombre << endl;
            cout << "Sexo :" << sexo << endl;
            cout << "Puntaje :" << puntaje << endl;
            cout << "tiempo :" << tiempo << endl;
            cout << "nivel :" << nivel << endl;*/
            //string ni, string s, float t, int p, int niv)
            Jugador j1(nombre, sexo, stof(tiempo), stoi(puntaje), stoi(nivel));
            conta++;
            lista.push_back(j1);

        }
        cout << lista.size();

        lista[0].resaltarDatos();
        lista[1].resaltarDatos();
    }
    
    //cout2 << "Luis Antonio Molina Yampa;Masculino;505;2375;4"<<endl;
    getchar();

   

    return 0;
}




//implementar la funcionalidad de formato
//convertir la funcion ImprimirElementos al uso de Templates del STL

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

