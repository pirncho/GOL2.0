#include "InformacionYCarga.h"

InformacionGenetica InformacionYCarga::getInfo()
{
	return informacion->getNombre();
}

char InformacionYCarga::getCarga()
{
	return carga;
}

InformacionYCarga::InformacionYCarga(InformacionGenetica info, char carga)
{
	this->informacion = listaDeGenes.agregarGen(info);
	this->carga = carga;
}
