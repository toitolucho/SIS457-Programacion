#include "Jugador.h"
#include <iostream>
using namespace std;
//constructor por defecto
Jugador::Jugador()
{
	puntaje = 0;
	tiempo = 0;
	nick = "Player 1";
	sexo = "Masculino";
	nivel = 1;
}
Jugador::Jugador(string ni, string s)
{
	puntaje = 0;
	tiempo = 0;
	nick = ni;
	sexo = s;
	nivel = 1;
}
Jugador::Jugador(string ni, string s, float t, int p, int niv)
{
	puntaje = p;
	tiempo = t;
	nick = ni;
	sexo = s;
	nivel = niv;
}

void Jugador::presentarDatos() {
	cout << nick << "      " << puntaje << " , " << nivel<<endl;
}
void Jugador::resaltarDatos() {
	cout << "**************************************************" << endl;
	cout <<"*" <<nick << "      " << puntaje << " , " << nivel << endl;
	cout << "**************************************************" << endl;
}

int Jugador::getTiempo() {
	return tiempo;
}
void Jugador::setTiempo(float t) {
	if (tiempo >= 0 && tiempo < 3600)
		tiempo = t;
	else
		cout << "Tiempo invalido";

}
int Jugador::getPuntaje() {
	return puntaje;
}
void Jugador::setPuntaje(int p) {
	puntaje = p;
}

int Jugador::getNivel() {
	return nivel;
}
void Jugador::setNivel(int n) {
	nivel = n;
}

void Jugador::formatearTiempo(bool incluirMil)
{
	int mm = 0, ss =0 , mil = 0;
	//mm = ..
	//logicar para formatear con dos digitos cada uno de los valores

	if (incluirMil)
		cout << mm << ":" << ss << "," << mil<<endl;
	else
		cout << mm << ":" << ss << endl;


}
