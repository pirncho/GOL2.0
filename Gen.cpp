#include "Gen.h"

std::vector<bool> Gen::getNombre() const
{
	return this->nombre;
}

long int Gen::getEdad() const
{
	return this->edad;
}

Gen::Gen(std::vector<bool> nombre)
{
	this->edad = 0;
	this->nombre = nombre;
}
