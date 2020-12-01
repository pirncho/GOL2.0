#include "Celula.h"

bool Celula::getViva()
{
	return estaViva;
}

std::vector<InformacionYCarga*> Celula::getGenes()
{
	return genes;
}

Celula::Celula(std::vector<InformacionYCarga*> genes)
{
	estaViva = true;
	this->genes = genes;
}
