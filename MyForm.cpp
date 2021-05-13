#include "MyForm.h"
//incluimos los archivos .h que se hayan creado para este examen 

 
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Globalization;

using namespace Examen1; // se le puede cambiar el nombre a la clase

[STAThread]

void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyForm form;	//Reemplazar MyForm por el nombre que se haya usado en Myform.h como "constructor"
	Application::Run(% form);
}