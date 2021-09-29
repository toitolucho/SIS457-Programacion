#include "Muro.h"
#include <iostream>
using namespace std;

void Muro::dibujar()
{
	if(tipo == 'C')
	{
		cout << "-----" << endl;
		cout << "-   -" << endl;
		cout << "-----" << endl;
	}
	if (tipo == 'L')
	{
		cout << "-----" << endl;
		cout << "--|--" << endl;
		cout << "-----" << endl;
	}

}
void Muro::desaparecer()
{
	//CODIGO para borrar el objeto
	//para la consola, sería limpiar la pantalla
	cout << "Desaparecemos de la coordenada (" << posicion.x << "," << posicion.y << ")" << endl;
}

//constructor que no recibe parametros,-> constructor por defecto
Muro::Muro()
{
	tipo = 'L';
	posicion.x = 0;
	posicion.y = 0;
}

//constructor sobrecargado, version 1
Muro::Muro(char t)
{
	tipo = t;
	posicion.x = 10;
	posicion.y = 10;
}


Muro::Muro(char t, float cx, float cy)
{
	tipo = t;
	posicion.x = cx;
	posicion.y = cy;
}

