#pragma once
#include <vector>
#include "Gen.h"
#include "InformacionGenetica.h"
class ListaDeGenes
{
private:
	std::vector<Gen*> lista;
public:
	/*
	*  Pre: se entrega un nombre de gen valido como nombre
	*  Post: devuelve el puntero a un gen en la tabla con el mismo nombre (si ya existe, devuelve ese)
	*/
	Gen* agregarGen(InformacionGenetica nombre);
	/*
	* Pre: se pasa un nombre de gen valido como nombre
	* Post: devuelve el puntero a ese gen si existe, devulelve nullptr si no existe
	*/
	Gen* buscarGen(InformacionGenetica nombre);
};


