#ifndef ARCHIVO
#define ARCHIVO

#include <string>
#include <vector>
#include <fstream>
class Archivo
{
private:
	std::fstream archivo;
	std::vector<std::vector<std::string>*> archivoCargado;
public:
	/*
	post: devuelve la ruta del archivo
	*/
	void getRuta();
	/*
	post: devuelve un puntero a la siguiente linea del archivo
	*/
	std::vector<std::string>* getLinea();
	/*
	pre: la ruta es valida
	post: archivoCargado es un vector con punteros a cada linea del archivo
	*/
	Archivo(std::string ruta);
};

#endif