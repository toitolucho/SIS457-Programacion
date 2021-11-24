#pragma once
#include "GameObject.h"
struct Posicion
{
	//tipo_dato nombre_variable;
	float x;
	float y;
};


class Muro : public GameObject
{
private:
	//atributos ocultos
	
	char tipo;  // 'L'->ladrillo, 'C'->concreto, 'p'->PASILLO

public:
	//comportamiento public, visible

	//constructor -> es un funcion especial exclusiva para inicializar el objeto
	//es na funcion que tiene el mismo nombre de la clase
	 Muro();
	 Muro(char t);
	 Muro(char t, float cx, float cy);
	 void dibujar();
	 void desaparecer();
};

