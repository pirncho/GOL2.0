#include "InformacionYCarga.h"

std::vector<bool> InformacionYCarga::getInfo()
{
	return informacion->getNombre();
}

char InformacionYCarga::getCarga()
{
	return carga;
}

InformacionYCarga::InformacionYCarga(std::vector<bool> info, char carga)
{
	this->informacion = listaDeGenes.agregarGen(info);
	this->carga = carga;
}
