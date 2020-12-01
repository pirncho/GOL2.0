#pragma once
#include <vector>
#include "Gen.h"
#include "globales.h"
class InformacionYCarga
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
	InformacionYCarga(std::vector<bool> info, char carga);
};

