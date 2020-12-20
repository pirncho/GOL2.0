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

Celula::~Celula()
{
	for (unsigned int i = 0; i < genes.size(); i++)
	{
		delete genes[i];
	}
}
