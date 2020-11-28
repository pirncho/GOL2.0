#include "InformacionGenetica.h"

std::vector<bool> InformacionGenetica::getInfo()
{
	return informacion->getNombre();
}

char InformacionGenetica::getCarga()
{
	return carga;
}

InformacionGenetica::InformacionGenetica(std::vector<bool> info, char carga)
{
	this->informacion = listaDeGenes.agregarGen(info);
	this->carga = carga;
}
