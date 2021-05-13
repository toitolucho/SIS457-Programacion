#pragma once
#include <string>

using namespace std;

class Jugador
{
private:
	float tiempo;
	int puntaje;
	int nivel;

public:
	string nick;
	string sexo;

	Jugador();
	Jugador(string ni, string s);
	Jugador(string ni, string s, float t, int p, int niv);

	void presentarDatos();
	void resaltarDatos();
	void formatearTiempo(bool incluirMil);
	

	int getTiempo();
	void setTiempo(float t);
	int getPuntaje();
	void setPuntaje(int p);
	int getNivel();
	void setNivel(int n);



};

