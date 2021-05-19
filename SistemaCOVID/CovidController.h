#pragma once
#include "Cliente.h"
class CovidController
{
	//debe declarar los atributos según lo especificado
	protected:
	// debe terminar el resto de las declaraciones de las funciones
		bool esCiCorrecto(int ci, int dia, int mes);
		bool esHoraIngresoCorrecto(int hora, int min);
		bool esTemperaturaCorrecto(float temp);
public:
	void verificarIngreso(Cliente cliente, int dia, int mes, int hora, int minutos);
	
};

