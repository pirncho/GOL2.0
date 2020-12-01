#include "InformacionGenetica.h"
#include <algorithm>

InformacionGenetica::InformacionGenetica(std::string bits)
{
	for(unsigned int i = 0; i < bits.length(); i++) {
		info.push_back((bool)bits[bits.length() - i - 1]);
	}
}

InformacionGenetica::InformacionGenetica()
{
	info.push_back(false);
}

bool InformacionGenetica::esIgualA(InformacionGenetica otra)
{
	for(unsigned int i = 0; i < std::max(this-> contarBits(), otra.contarBits()); i++)
	{
		if (otra.estaEncendidoBit(i) != this->estaEncendidoBit(i)) {
			return false;
		}
	}
	return true;
}

void InformacionGenetica::combinarCon(InformacionGenetica* otra)
{
	this->info = XORSecuencia(this->info, otra->info);
}

bool InformacionGenetica::estaEncendidoBit(unsigned int i)
{
	return this->info[i];
}

unsigned int InformacionGenetica::contarBits()
{
	return (unsigned int)this->info.size();
}
