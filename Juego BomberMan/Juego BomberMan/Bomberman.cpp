#include "Bomberman.h"

//Bomberman player2;
Bomberman::Bomberman()
{
	posicion.x = 0;
	posicion.y = 0;
	velocidad = 1;
	direccion = 2;
}


//Bomberman player1(3, 4, 2);
Bomberman::Bomberman(float f, float c, int velo)
{
	posicion.x = c;
	posicion.y = f;
	velocidad = velo;
	direccion = 1;

}

//Bomberman player1(3, 4, 2,2);
Bomberman::Bomberman(float f, float c, int velo, int dire)
{
	posicion.x = c;
	posicion.y = f;
	velocidad = velo;
	direccion = dire;
}


void Bomberman::DejarBomba()
{
	//clonar bombas
	//crear bombas



}
void Bomberman::Mover()
{
	//validacion de la coordenada de arranque
	//validare si no colisiono con un muro	
	switch ( direccion)
	{
		case 1://arriba
			posicion.y = posicion.y - velocidad;
		case 2://derecha
			posicion.x = posicion.x + velocidad;
		case 3://abajo
			posicion.y = posicion.y + velocidad;
		case 4://izquierda
			posicion.x = posicion.x - velocidad;
	default:
		break;
	}
}
void Bomberman::Recolectar()
{
	//revisar el tipo de elemento

	//si el elemento es una puerta... termina el nivel
	//si el elemento es un plus de alcanze... incremento la configuracion de alcanze de la bomba
	// si ele elemento es un bonus de vida ... incremento la cantidad de vidas.
}


void Bomberman::setPosicion(Posicion pos)
{
	if (pos.x >= 0 && pos.y >= 0)
	{
		posicion = pos;
	}

}
Posicion Bomberman::getPosicion()
{
	return posicion;
}


//permite lectura
int Bomberman::getNroBombasDisponibles()
{
	return NroBombasDisponibles;
}


// permite modificación
void Bomberman::setNroVidas(int nrov)
{
	nroVidas = nrov;
}
