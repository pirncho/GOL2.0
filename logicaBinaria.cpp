#include "logicaBinaria.h"

bool XORBit(bool bit1, bool bit2) {
	if (bit1 && bit2 || not bit1 && not bit2) {
		return false;
	}
	return true;
}

std::vector<bool> XORSecuencia(std::vector<bool> bits1, std::vector<bool> bits2) {
	std::vector<bool> temp;
	for (unsigned int i = 0; i < std::max(bits1.size(), bits2.size()); i++) {
		temp.push_back(XORBit(bits1[i], bits2[i]));
	}
	return temp;
}