#pragma once
#include <vector>
#include "Gen.h"
class ListaDeGenes
{
private:
	std::vector<Gen*> lista;
public:
	/*
	*  Pre: se entrega un nombre de gen valido como nombre
	*  Post: devuelve el puntero a un gen con el mismo nombre (si ya existe, devuelve ese)
	*/
	Gen* agregarGen(std::vector<bool> nombre);
	/*
	* Pre: se pasa un nombre de gen valido como nombre
	* Post: devuelve el puntero a ese gen si existe, devulelve nullptr si no existe
	*/
	Gen* buscarGen(std::vector<bool> nombre);
};


