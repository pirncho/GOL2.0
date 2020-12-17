#ifndef CELULA
#define CELULA
#include <vector>
#include "InformacionYCarga.h"

class Celula
{
private:
	bool estaViva;
	std::vector<InformacionYCarga*> genes;
public:
    void revivir();
    void matar();
	/*
	post: devuelve si la celula est� viva
	*/
	bool getViva();
	/*
	post: devuelve un vector de punteros a cada gen de la celula
	*/
	std::vector<InformacionYCarga*> getGenes();
	/*
	post: la celula es el producto de la reproduccion de las tres celulas padres
	*/
	Celula(Celula* padre1, Celula* padre2, Celula* padre3);
	/*
	post: this->genes contiene punteros a los genes del vector que se pasa por agumento
	*/
	Celula(std::vector<InformacionYCarga*> genes);
};
#endif
