#include "Bomba.h"

//Bomba b;
Bomba::Bomba()
{
	posicion.x = 2;
	posicion.y = 3;
	alcanze = 1;
	tiempoDetonacion = 1;
}

//Bomba b2(3, 2);
Bomba::Bomba(float f, float c)
{
	posicion.x = c;
	posicion.y = f;
	alcanze = 1;
	tiempoDetonacion = 1;
}

//Bomba b3(3, 2,3,1);
Bomba::Bomba(float f, float c, int alc, int td)
{
	posicion.x = c;
	posicion.y = f;
	alcanze = alc;
	tiempoDetonacion = td;
}


//Bomba b1(player);
Bomba::Bomba(Bomberman player)
{
	posicion = player.getPosicion();
	//considerar metodos de acceso
}

void Bomba::detonar()
{
	//revisar el mapa
	//en funcion a la posicion de la bomba, se debe revisar los elementos colindantes en todos los sentidoso
	//gm.mapa[c,2]
	//gm.destrozarMuro()
	/*Elementos vector =  gm.revisarRadio(alcanze, posicion)

	desde primer elemento vector hasta el ultimo en objeto
		si el objeto es tipo Muro
			objeto.explotar()
		si el objeto es el player
			objeto.posicion.x = 2;
			objeto.velocidad = 100;
			objeto.desaparecer();
	desde coordenad 0,0 hasta la cordenad n,n*/


}


void Bomba::setAlcanze(int a)
{
	alcanze = a;
}
void Bomba::setTiempoDetonacion(int td)
{
	tiempoDetonacion = td;
}

//leer datos - getters
int Bomba::getAlcanze()
{
	return alcanze;
}
int Bomba::getTiempoDetonacion()
{
	return tiempoDetonacion;
}