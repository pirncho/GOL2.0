#pragma once
#include <vector>
#include "InformacionGenetica.h"
class Gen
{
private:
	InformacionGenetica nombre;
	long int edad;
public:
	/*
	* Post: devuelve el nombre del gen
	*/
	InformacionGenetica getNombre() const;
	/*
	* Post: devuelve la edad del gen
	*/
	long int getEdad() const;
	/*
	* Post edad = 0, this.nombre = nombre
	*/
	Gen(InformacionGenetica nombre);
};

