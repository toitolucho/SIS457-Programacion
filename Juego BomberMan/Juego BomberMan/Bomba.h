#pragma once
#include "GameObject.h"
#include "Bomberman.h"
class Bomba : public GameObject
{
private:	
	int alcanze;
	int tiempoDetonacion;

	void dibujar();

public :
	char tipo; // 'N'->NORMAL, 'V'-> REPLICAS EN VERTICAL, 'H'-> REPLICAS EN HORIZANTAL
	int nroReplicas = 0;
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

