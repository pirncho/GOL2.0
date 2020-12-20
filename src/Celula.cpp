#include "Celula.h"

bool Celula::getViva()
{
	return estaViva;
}

std::vector<InformacionYCarga*> Celula::getGenes()
{
	return genes;
}

void Celula::agregarGen(InformacionYCarga* info)
{
	this->estaViva = true;
	this->genes.push_back(info);
}

Celula::Celula(Celula* padre1, Celula* padre2, Celula* padre3)
{
	estaViva = true;
}

Celula::Celula()
{
	estaViva = false;
	this->genes = {};
}