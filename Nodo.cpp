#include "Nodo.h"


Nodo::Nodo() 
{
	base = 0;
	numero = 0;
	siguiente = 0;
}

void Nodo::setNumero(TipoDato num) { numero = num; }
TipoDato Nodo::getNumero() { return numero; }

void Nodo::setBase(int baseAux) { base = baseAux; }
int Nodo::getBase() { return base; }

void Nodo::setSiguiente(Nodo* S) { siguiente = S; }
Nodo* Nodo::getSiguiente() { return siguiente; }