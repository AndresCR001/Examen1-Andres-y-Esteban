#include "MyForm.h"
#include "ListaEnlazada.h"
//incluimos los archivos .h que se hayan creado para este examen 


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Globalization;

using namespace Examen1; // se le puede cambiar el nombre a la clase

[STAThread]

int main(array<String^>^ arg) {
	ListaEnlazada* listaEnlazada = new ListaEnlazada(); // instanciamos la lista enlazada
	Nodo* Lista = new Nodo();


	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Examen1::MyForm form;	//Reemplazar MyForm por el nombre que se haya usado en Myform.h como "constructor"
	Application::Run(% form);
	ListaEnlazada();
	Lista->setNumero(0);
	Lista->setBase(2);
	Lista->setSiguiente(0);

	listaEnlazada->insertarNodo(Lista); //ingresamos nombre para saber de que "nodo" estamos hablando
	/*Lista->setBase(8);
	listaEnlazada->insertarNodo(Lista); //ingresamos nombre para saber de que "nodo" estamos hablando
	Lista->setBase(10);
	listaEnlazada->insertarNodo(Lista); //ingresamos nombre para saber de que "nodo" estamos hablando
	Lista->setBase(16);
	listaEnlazada->insertarNodo(Lista); //ingresamos nombre para saber de que "nodo" estamos hablando
	Lista->setBase(1);
	listaEnlazada->insertarNodo(Lista); //ingresamos nombre para saber de que "nodo" estamos hablando Ascii sera 1
	Lista->setBase(0);
	listaEnlazada->insertarNodo(Lista); //ingresamos nombre para saber de que "nodo" estamos hablando
	*/
	return 0;
}