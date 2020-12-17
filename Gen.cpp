#include "Gen.h"

InformacionGenetica Gen::getNombre() const
{
	return this->nombre;
}

long int Gen::getEdad() const
{
	return this->edad;
}

Gen::Gen(InformacionGenetica nombre)
{
	this->edad = 0;
	this->nombre = nombre;
}
