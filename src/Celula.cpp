#include "Celula.h"

bool Celula::getViva()
{
	return estaViva;
}

std::vector<InformacionYCarga*> Celula::getGenes()
{
	return genes;
}

Celula::Celula(Celula* padre1, Celula* padre2, Celula* padre3)
{
	estaViva = true;
}

Celula::Celula(std::vector<InformacionYCarga*> genes)
{
	estaViva = true;
	this->genes = genes;
}