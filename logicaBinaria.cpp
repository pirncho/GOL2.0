#include "logicaBinaria.h"

std::vector<bool> XORSecuencia(std::vector<bool> bits1, std::vector<bool> bits2) {
	std::vector<bool> temp;
	for (unsigned int i = 0; i < std::max(bits1.size(), bits2.size()); i++) {
		temp.push_back(bits1[i] ^ bits2[i]);
	}
	return temp;
}