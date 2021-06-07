#pragma once
//#include <iostream>

//using namespace std;
typedef int TipoDato;
//template <class TipoDato>
class Nodo
{
	//tal vez se puede agregar el nombre para saber de que nodo (elemento en la lista) estamos hablando
	private:
		int base;
		TipoDato numero; //dato va a ser el valor que yo le asigne en mi interfaz
		Nodo* siguiente;
	public:
		Nodo() 
		{
			base = 0;
			numero = 0;
			siguiente = 0;
		}

		void setNumero(TipoDato num) { numero = num; }
		TipoDato getNumero() { return numero; }

		void setBase(int baseAux) { base = baseAux; }
		TipoDato getBase() { return base; }

		void setSiguiente(Nodo* S) { siguiente = S; }
		Nodo* getSiguiente() { return siguiente; }

};

