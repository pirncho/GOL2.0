#include "ListaDeGenes.h"

Gen* ListaDeGenes::agregarGen(std::vector<bool> nombre)
{
	Gen* temp = buscarGen(nombre);
	if (not temp) {
		temp = new Gen(nombre);
		lista.push_back(temp);
	}
	return temp;
}

	Gen* ListaDeGenes::buscarGen(std::vector<bool> nombre)
{
	for (int i = 0; i < lista.size(); i++)
	{
		if (lista[i]->getNombre() == nombre) {
			return lista[i];
		}
	}
	return nullptr;
}
