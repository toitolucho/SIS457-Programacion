#pragma once
class Pacman
{
private:
	//atributo
	//tipodato nombrevarialbe ;
	int x;
	int y;
	int velocidad;
public :
	Pacman();
	Pacman(int a, int b);
	//direction 1,2,3,4   ->1 arriba, 2->abajo, 3->izquierda, 4->derecha
	void mover(int direcion);
	void morir();
	void mostrar();
	bool operator<(Pacman p1)
	{
		return  velocidad < p1.velocidad;
	}

	bool operator>(Pacman p1)
	{
		return  velocidad > p1.velocidad;
	}
	void setVelocidad(int v);

	
};

