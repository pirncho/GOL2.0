#pragma once
#include <vector>
#include "Gen.h"
#include "globales.h"
#include "InformacionGenetica.h"
class InformacionYCarga
{
private:
	Gen* informacion;
	char carga;
public:
	/*
	* post: devuelve el nombre del gen
	*/
	InformacionGenetica getInfo();
	/*
	* post: devuleve la carga genetica de este gen
	*/
	char getCarga();
	InformacionYCarga(InformacionGenetica info, char carga);
};

