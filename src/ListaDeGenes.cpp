#include "ListaDeGenes.h"

Gen* ListaDeGenes::agregarGen(InformacionGenetica nombre)
{
	Gen* temp = buscarGen(nombre);
	if (not temp) {
		temp = new Gen(nombre);
		lista.push_back(temp);
	}
	return temp;
}

	Gen* ListaDeGenes::buscarGen(InformacionGenetica nombre)
{
	for (unsigned int i = 0; i < lista.size(); i++)
	{
		if (nombre.esIgualA(lista[i]->getNombre()))  {
			return lista[i];
		}
	}
	return nullptr;
}

	ListaDeGenes::~ListaDeGenes()
	{
		for (unsigned int i = 0; i < lista.size(); i++)
		{
			delete lista[i];
		}
	}
