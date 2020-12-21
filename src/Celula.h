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
	/*
	post: devuelve si la celula está viva
	*/
	bool getViva();
	/*
	post: devuelve un vector de punteros a cada gen de la celula
	*/
	std::vector<InformacionYCarga*> getGenes();
	/*
	post: la celula está viva, la celula tiene el gen que se agrega
	*/
	void agregarGen(InformacionYCarga * gen);
	/*
	post: la celula es el producto de la reproduccion de las tres celulas padres
	*/
	Celula(Celula* padre1, Celula* padre2, Celula* padre3);
	/*
	post: se crea una celula muerta
	*/
	Celula();
	/*
	post: se liberan todos los recursos asociados a la estructura
	*/
	~Celula();
};
#endif
