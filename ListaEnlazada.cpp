#include "ListaEnlazada.h"


ListaEnlazada::ListaEnlazada()
{
	cabeza = 0;
}

void ListaEnlazada::setCabeza(Nodo* c) { cabeza = c; }
Nodo* ListaEnlazada::getCabeza() { return cabeza; }

Nodo* ListaEnlazada::getUltimo()
{
	Nodo* ultimo = getCabeza(); //para commenzar a ubicar el ultimo desde el primero

	while(ultimo->getSiguiente()!=0){ //si el siguiente es diferente de nulo, significa que existe u pasa a ser el ultimo
		ultimo = ultimo->getSiguiente(); //recorrer la lista hasta que siguiente sea nulo osea, no hay nada despues de el.
	}
	return ultimo;
}

void ListaEnlazada::insertarNodo(Nodo* nuevo)
{
	if (getCabeza() != 0) {
		if (getCabeza() == 0) //si la lista esta vacia definimos la cabeza
			setCabeza(nuevo);
		else
			getUltimo()->setSiguiente(nuevo); // agregamos a la ultima parte de la fila nuevo por edio del enlace "siguiente"
	}
	}
Nodo* ListaEnlazada::buscarNodo(int base)
{
	Nodo* buscado = getCabeza(); //vamos a buscar desde el comienzo de la lista
	while ((buscado != 0) && ( buscado->getBase() != base )) {// como es igual identificamos en nodo que estamos buscando {
		buscado = buscado->getSiguiente();// si no lo encuentra busca enb el siguiente 
	}
	return buscado; 
}

void ListaEnlazada::eliminar(int base)
{
	Nodo* buscado = getCabeza();
	Nodo* anterior = 0;

	if (buscado->getBase() == base)//si esta en la cabeza definimos una nueva
		setCabeza(getCabeza()->getSiguiente());// se elimina la cabeza indicando que la nueva cabeza es el que le sigue
	else {
		while ((buscado!=0)&&(buscado->getBase()!=base)) {
			anterior = buscado;
			buscado = buscado->getSiguiente();
		}
		if (buscado != 0) {// significa que hayamos el nodo que deseamos eliminar
			anterior->setSiguiente(buscado->getSiguiente()); //hacemos el enlace del anterior con el que le sigue al buscado(nodo a eliminar)
		}
	}

}




