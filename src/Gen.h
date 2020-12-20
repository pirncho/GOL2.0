#ifndef GEN
#define GEN

#include <vector>
#include "InformacionGenetica.h"
class Gen
{
private:
	InformacionGenetica nombre;
	unsigned long int edad;
	long int cargaTotal;
public:
	/*
	* Post: devuelve el nombre del gen
	*/
	InformacionGenetica getNombre() const;
	/*
	* Post: devuelve la edad del gen
	*/
	unsigned long int getEdad() const;
	/*
	* Post edad = 0, this.nombre = nombre
	*/
	Gen(InformacionGenetica nombre);
};

#endif
