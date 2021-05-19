#pragma once
//#include <iostream>

//using namespace std;
typedef int TipoDato;
class Nodo
{
	//tal vez se puede agregar el nombre para saber de que nodo (elemento en la lista) estamos hablando
	private:
		int base;
		TipoDato numero; //dato va a ser el valor que yo le asigne en mi interfaz
		Nodo* siguiente;
	public:
		Nodo();
		void setNumero(TipoDato);
		TipoDato getNumero();

		void setBase(int);
		int getBase();

		void setSiguiente(Nodo*);
		Nodo* getSiguiente();


};

