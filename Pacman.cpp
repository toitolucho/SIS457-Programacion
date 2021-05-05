#include "Pacman.h"
#include <iostream>
using namespace std;
//constructor
Pacman::Pacman()
{
	x = 14;
	y = 15;
	velocidad = 1;
}


Pacman::Pacman(int a, int b)
{
	x = a;
	y = b;
}

void Pacman::setVelocidad(int v)
{
	velocidad = v;
}


//crear un constructror esclusivo par ala velocidad que configure su coordenada en la posison 3,3 


void Pacman::mostrar()
{
	cout << x <<" "<<y<< " "<<velocidad<<endl;
}
//direction 1,2,3,4   ->1 arriba, 2->abajo, 3->izquierda, 4->derecha
void Pacman::mover(int direcion) {
	/*if (direcion == 1)
	{
		y = y - 1;
	}
	if (direcion == 2)
	{
		y = y + 1;


		
}*/


	switch (direcion)
	{
		case 1: y -= 1; break;
		case 2: y += 1; break;
		case 3: x -= 1; break;
		case 4: x += 1; break;
	default:
		break;
	}
}