#include "matematica.h"

template<typename T>
 T interpolar(T valor,T rango1, T rango2)
{
	T resultado = valor * (rango2 / rango1);
	return resultado;
}