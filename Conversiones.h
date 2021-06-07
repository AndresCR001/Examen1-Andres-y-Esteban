#pragma once
#include "ListaEnlazada.h"
//template <class TipoDato>
class Conversiones
{
public:

	int conversorBinario(Nodo* Lista) 
	{

		int numero = Lista->getNumero();
		int base = Lista->getBase();
	

		switch (base)
		{
		case 1: //este case es en caso de ser  Ascii
			break;
		case 2: //en caso de ser binario
			break;
		case 8: //en caso de ser octal
			break;
		case 16: //en caso de ser hexadecimal
			break;
		}

		return numero;

	}
	int conversorHexadecimal(Nodo* Lista) 
	{
		TipoDato numero = Lista->getNumero();
		int base = Lista->getBase();

		return numero;

	}
	int conversorOctal(Nodo* Lista) 
	{
		TipoDato numero = Lista->getNumero();
		int base = Lista->getBase();

		return numero;

	}
	int conversorDecimal(Nodo* Lista)
	{
		TipoDato numero = Lista->getNumero();
		int base = Lista->getBase();

		return numero;

	}

	//void conversorAscii();
};



/*

si se cambia el valor en cualquiera se hace
un setNum()
luego se define por label un conversor
ejemplo: (label es una referencia a la base)

	 si se cambia el decimal:
	 setNum(TipoDato x)
	 labelD = conversorDecimal()
	 labelB = conversorBinario()
	 LabelH = conversorHexadeciaml()

	y asi sucesivamente

*/