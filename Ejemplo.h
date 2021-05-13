#pragma once
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
//typedef int Base;

class Ejemplo
{
private:
	int numero;
	

public:
	//declaramos los sets and gets de la clase para poder utilizarlos luego en nuestra programacion

	void setNumero(int num) {
		this->numero = num;
	}
	int getNumero() {
		return this->numero;
	}

	void conversorBinario();
	void conversorHexadecimal();
	void conversorOctal();
	void conversorDecimal();
	void conversorAscii();
};
