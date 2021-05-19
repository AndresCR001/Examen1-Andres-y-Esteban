#pragma once
#include "Nodo.h"

class ListaEnlazada{
	private:
		Nodo* cabeza;//apunta al comienzo de las cadena de nodos

	public:
		ListaEnlazada();

		void setCabeza(Nodo*);
		Nodo* getCabeza();

		Nodo* getUltimo();
		
		void insertarNodo(Nodo*);
		Nodo* buscarNodo(int);

		void eliminar(int);
};



