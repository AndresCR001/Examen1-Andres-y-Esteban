#pragma once
#include <string.h>
typedef int TipoDato; // el tipo de elemto se puede cambiar segun sea requerido 

class Nodo { //tal vez se puede agregar el nombre para saber de que nodo (elemento en la lista) estamos hablando
	public:
		char nombre[30];
		TipoDato dato; //dato va a ser el valor que yo le asigen en mi interfaz
		Nodo* siguiente;
};

class ListaEnlazada{
	public:
		void crearLista(Nodo** Lista);
		void insertar(Nodo** Lista, TipoDato Elemento, const char* nom);
		Nodo* buscar(Nodo* Lista, const char* nom);
		void suprimir(Nodo** Lista);
		TipoDato quitar(Nodo** Lista);
		void limpiarLista(Nodo** Lista);

		TipoDato cima(Nodo* Lista);
		int listaVacia(Nodo* Lista);
};



