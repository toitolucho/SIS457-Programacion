#pragma once
#include "Muro.h"
#include "Bomberman.h"
class Bomba
{
private:
	Posicion posicion;
	int alcanze;
	int tiempoDetonacion;

	void dibujar();

public :
	Bomba();
	Bomba(float f, float c);
	Bomba(float f, float c, int alc, int td);
	Bomba(Bomberman player);

	void detonar();

	//mutadores-setters
	void setAlcanze( int a);
	void setTiempoDetonacion(int td);

	//leer datos - getters
	int getAlcanze();
	int getTiempoDetonacion();
};

