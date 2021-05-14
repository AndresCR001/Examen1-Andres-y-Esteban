#include "MyForm.h"
#include "ListaEnlazada.h"
//incluimos los archivos .h que se hayan creado para este examen 

 
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Globalization;

using namespace Examen1; // se le puede cambiar el nombre a la clase

[STAThread]

void main(array<String^>^ arg) {
	ListaEnlazada* listaEnlazada = new ListaEnlazada(); // instanciamos la lista enlazada

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Examen1::MyForm form;	//Reemplazar MyForm por el nombre que se haya usado en Myform.h como "constructor"
	Application::Run(% form);

	listaEnlazada->crearLista((form.lista)); //creamos una lista justo cuando inicia el programa esta lista fue instanciada en MyForm.h por ende se debe invocar de esa forma 

}