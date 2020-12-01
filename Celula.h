#pragma once
#include <vector>
#include "InformacionYCarga.h"

class Celula
{
private:
	bool estaViva = false;
	std::vector<InformacionYCarga*> genes;
public:
	bool getViva();
	std::vector<InformacionYCarga*> getGenes();
	Celula(Celula* padre1, Celula* padre2, Celula* padre3);
	Celula(std::vector<InformacionYCarga*> genes);
};

