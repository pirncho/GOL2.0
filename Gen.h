#pragma once
#include <vector>
class Gen
{
private:
	std::vector<bool> nombre;
	long int edad;
public:
	/*
	* Post: devuelve el nombre del gen
	*/
	std::vector<bool> getNombre() const;
	/*
	* Post: devuelve la edad del gen
	*/
	long int getEdad() const;
	/*
	* Post edad = 0, this.nombre = nombre
	*/
	Gen(std::vector<bool> nombre);
};

