#pragma once
#include <vector>
#include "Gen.h"
#include "ListaDeGenes.h"
#include "globales.h"
class InformacionGenetica
{
private:
	Gen* informacion;
	char carga;
public:
	/*
	* post: devuelve el nombre del gen
	*/
	std::vector<bool> getInfo();
	/*
	* post: devuleve la carga genetica de este gen
	*/
	char getCarga();
	InformacionGenetica(std::vector<bool> info, char carga);
};

