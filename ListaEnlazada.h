#pragma once
#include "Nodo.h"
//typedef TipoDato
//template <class TipoDato>
class ListaEnlazada{
	private:
		Nodo* cabeza;//apunta al comienzo de las cadena de nodos

	public:
		ListaEnlazada() 
		{
			cabeza = 0;
		}

		void setCabeza(Nodo*c) { cabeza = c; }
		Nodo* getCabeza() { return cabeza; }

		Nodo* getUltimo()
		{
			Nodo* ultimo = getCabeza(); //para commenzar a ubicar el ultimo desde el primero

			while (ultimo->getSiguiente() != 0) { //si el siguiente es diferente de nulo, significa que existe u pasa a ser el ultimo
				ultimo = ultimo->getSiguiente(); //recorrer la lista hasta que siguiente sea nulo osea, no hay nada despues de el.
			}
			return ultimo;
		}
		
		void insertarNodo(Nodo* nuevo)
		{
			if (getCabeza() == 0) {
				//si la lista esta vacia definimos la cabeza
				setCabeza(nuevo);
			}
			else {
				getUltimo()->setSiguiente(nuevo); // agregamos a la ultima parte de la fila nuevo por edio del enlace "siguiente"
			}
		}
		Nodo* buscarNodo(int base)
		{
			Nodo* buscado = getCabeza(); //vamos a buscar desde el comienzo de la lista
			while ((buscado != 0) && (buscado->getBase() != base)) {// como es igual identificamos en nodo que estamos buscando {
				buscado = buscado->getSiguiente();// si no lo encuentra busca enb el siguiente 
			}
			return buscado;
		}

		void eliminar(int base)
		{
			Nodo* buscado = getCabeza();
			Nodo* anterior = 0;

			if (buscado->getBase() == base)//si esta en la cabeza definimos una nueva
				setCabeza(getCabeza()->getSiguiente());// se elimina la cabeza indicando que la nueva cabeza es el que le sigue
			else {
				while ((buscado != 0) && (buscado->getBase() != base)) {
					anterior = buscado; // guardamos el nodo anterior para no descomponer la lista
					buscado = buscado->getSiguiente();
				}
				if (buscado != 0) {// significa que hayamos el nodo que deseamos eliminar
					anterior->setSiguiente(buscado->getSiguiente()); //hacemos el enlace del anterior con el que le sigue al buscado(nodo a eliminar)
				}
			}

		}
};



