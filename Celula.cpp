#include "Celula.h"

bool Celula::getViva()
{
	return estaViva;
}

std::vector<InformacionGenetica*> Celula::getGenes()
{
	return genes;
}

Celula::Celula(std::vector<InformacionGenetica*> genes)
{
	estaViva = true;
	this->genes = genes;
}
