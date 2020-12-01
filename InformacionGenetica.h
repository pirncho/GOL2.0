#pragma once
#include <string>
#include <vector>
#include "logicaBinaria.h"

/* La Informacion Genetica est� conformada por una
* secuencia de bits.
* Un bit es la m�nima expresi�n de informaci�n,
* que puede tomar dos �nicos valores posibles: 0/1,
* apagado/encendido o desactivado/activado.
*/
class InformacionGenetica {
private:
	std::vector<bool> info;
public:
	/* pre : 'bits' es una secuencia de 1 y 0.
	* post: la instancia creada representa la
	* informaci�n dada en 'bits'.
	*/
	InformacionGenetica(std::string bits);
	/* post: la instancia creada representa la
	* informaci�n dada por un bit: 0.
	*/
	InformacionGenetica();
	/* post : indica si la instancia y 'otra'
	* representan la misma secuencia de
	* bits, es decir si son iguales.
	*/
	bool esIgualA(InformacionGenetica otra);
	/* post: combina la secuencia de bits de la
	* instancia con la secuencia bits de
	* 'otra', aplicando un OR bit a bit.
	*/
	void combinarCon(InformacionGenetica* otra);
	/* post: indica si el valor del 'i'-�simo bit
	* es 1, numer�ndolos de derecha a
	* izquierda a partir de 1.
	*/
	bool estaEncendidoBit(unsigned int i);
	/* post: devuelve cantidad de bits que tiene
	* la instancia.
	*/
	unsigned int contarBits();
};