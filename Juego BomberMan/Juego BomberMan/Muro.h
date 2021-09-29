#pragma once

struct Posicion
{
	//tipo_dato nombre_variable;
	float x;
	float y;
};


class Muro
{
private:
	//atributos ocultos
	Posicion posicion;
	char tipo;  // 'L', 'C'

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

