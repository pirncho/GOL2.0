#pragma once
#include <vector>
#include "InformacionGenetica.h"

class Celula
{
private:
	bool estaViva = false;
	std::vector<InformacionGenetica*> genes;
public:
	bool getViva();
	std::vector<InformacionGenetica*> getGenes();
	Celula(Celula* padre1, Celula* padre2, Celula* padre3);
	Celula(std::vector<InformacionGenetica*> genes);
};

