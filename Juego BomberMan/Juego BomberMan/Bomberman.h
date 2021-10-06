#pragma once
#include "Muro.h"
#include "GameManager.h"
class Bomberman
{

private :
	Posicion posicion;
	int NroBombasDisponibles;  //si es -1, las bombas son ilimitadas
	
	int direccion; // 1 ->arriba, 2->derecha, 3->Abajo, 4 -> izquierda
	int nroVidas;
	GameManager gm;

	//constructor por defecto, inicializa y configurar los atributos de la clase cuando se crean los objetos de dicha clase
public :
	int velocidad;
	Bomberman();
	Bomberman(float f, float c, int velo);
	Bomberman(float f, float c, int velo, int dire);


	void DejarBomba();
	void Mover();
	void Recolectar();
	void desaparecer();


	//getters y setter

	//GET-->SIVER PARA OBTENER EL VALOR
	//SET ->SIRVE PAR CAMBIAR UN VALOR

	//Este par permita, modificacion y lectura
	void setPosicion(Posicion pos);	
	Posicion getPosicion();
	


	//permite lectura
	int getNroBombasDisponibles();
	


	// permite modificación
	void setNroVidas(int nrov);
	
};

