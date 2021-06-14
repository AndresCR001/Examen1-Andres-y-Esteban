#pragma once 
#include "ListaEnlazada.h"
#include "Conversiones.h"
#include "Nodo.h"



namespace Examen1 {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//template <class TipoDato>
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	ListaEnlazada *listaEnlazada = new ListaEnlazada(); // instanciamos el puntero a la lista enlazada
	Conversiones *conversiones = new Conversiones();
	

	public:
		MyForm(void) // si aqui se llama MyForm, se llama en el "MyForm.cpp" bajo el mismo nombre
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ b_clear;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ v_binario;
	private: System::Windows::Forms::TextBox^ v_octal;
	private: System::Windows::Forms::TextBox^ v_decimal;

	private: System::Windows::Forms::TextBox^ v_hex;
	private: System::Windows::Forms::TextBox^ v_caracter;
	private: System::Windows::Forms::TextBox^ v_cantDecimales;






	private: System::Windows::Forms::Label^ label6;
	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			// aqui definimos los nodos que ya conocemos (un nodo por bas eutilizada + ascii + cantidead de decimales)

			Nodo *NodoBinario = new Nodo();
			NodoBinario->setNumero(0);
			NodoBinario->setBase(2);
			NodoBinario->setSiguiente(0);
			listaEnlazada->insertarNodo(NodoBinario);

			Nodo *NodoOctal = new Nodo();
			NodoOctal->setNumero(0);
			NodoOctal->setBase(8);
			NodoOctal->setSiguiente(0);
			listaEnlazada->insertarNodo(NodoOctal);			

			Nodo *NodoHex = new Nodo();
			NodoHex->setNumero(0);
			NodoHex->setBase(16);
			NodoHex->setSiguiente(0);
			listaEnlazada->insertarNodo(NodoHex);

			Nodo *NodoDecimal = new Nodo();
			NodoDecimal->setNumero(0);
			NodoDecimal->setBase(10);
			NodoDecimal->setSiguiente(0);
			listaEnlazada->insertarNodo(NodoDecimal);

			Nodo *NodoAscii = new Nodo();
			NodoAscii->setNumero(0);
			NodoAscii->setBase(1);
			NodoAscii->setSiguiente(0);
			listaEnlazada->insertarNodo(NodoAscii);

			Nodo *NodoDe = new Nodo();
			NodoDe->setNumero(0);
			NodoDe->setBase(0);
			NodoDe->setSiguiente(0);
			listaEnlazada->insertarNodo(NodoDe);





			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->b_clear = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->v_binario = (gcnew System::Windows::Forms::TextBox());
			this->v_octal = (gcnew System::Windows::Forms::TextBox());
			this->v_decimal = (gcnew System::Windows::Forms::TextBox());
			this->v_hex = (gcnew System::Windows::Forms::TextBox());
			this->v_caracter = (gcnew System::Windows::Forms::TextBox());
			this->v_cantDecimales = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			//
			// b_clear
			//
			this->b_clear->Location = System::Drawing::Point(226, 285);
			this->b_clear->Name = L"b_clear";
			this->b_clear->Size = System::Drawing::Size(75, 23);
			this->b_clear->TabIndex = 0;
			this->b_clear->Text = L"Clear All";
			this->b_clear->UseVisualStyleBackColor = true;
			this->b_clear->Click += gcnew System::EventHandler(this, &MyForm::b_clear_Click);
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Binario";
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Octal";
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Decimal";
			//
			// label4
			//
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Hexadecimal";
			//
			// label5
			//
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 193);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Character";
			//
			// v_binario
			//
			this->v_binario->Location = System::Drawing::Point(82, 38);
			this->v_binario->Name = L"v_binario";
			this->v_binario->Size = System::Drawing::Size(376, 20);
			this->v_binario->TabIndex = 6;
			//this->v_binario->TextChanged += gcnew System::EventHandler(this, &MyForm::v_binario_TextChanged);
			this->v_binario->LostFocus += gcnew System::EventHandler(this, &MyForm::v_binario_LostFocus);
			//
			// v_octal
			//
			this->v_octal->Location = System::Drawing::Point(82, 77);
			this->v_octal->Name = L"v_octal";
			this->v_octal->Size = System::Drawing::Size(298, 20);
			this->v_octal->TabIndex = 7;
			this->v_octal->LostFocus += gcnew System::EventHandler(this, &MyForm::v_octal_LostFocus);
			//
			// v_decimal
			//
			this->v_decimal->Location = System::Drawing::Point(82, 114);
			this->v_decimal->Name = L"v_decimal";
			this->v_decimal->Size = System::Drawing::Size(273, 20);
			this->v_decimal->TabIndex = 8;
			this->v_decimal->LostFocus += gcnew System::EventHandler(this, &MyForm::v_decimal_LostFocus);
			//
			// v_hex
			//
			this->v_hex->Location = System::Drawing::Point(82, 155);
			this->v_hex->Name = L"v_hex";
			this->v_hex->Size = System::Drawing::Size(256, 20);
			this->v_hex->TabIndex = 9;
			this->v_hex->LostFocus += gcnew System::EventHandler(this, &MyForm::v_hex_LostFocus);
			//
			// v_caracter
			//
			this->v_caracter->Location = System::Drawing::Point(82, 190);
			this->v_caracter->Name = L"v_caracter";
			this->v_caracter->Size = System::Drawing::Size(33, 20);
			this->v_caracter->TabIndex = 10;
			this->v_caracter->LostFocus += gcnew System::EventHandler(this, &MyForm::v_caracter_LostFocus);
			//
			// v_cantDecimales
			//
			this->v_cantDecimales->Location = System::Drawing::Point(515, 38);
			this->v_cantDecimales->Name = L"v_cantDecimales";
			this->v_cantDecimales->Size = System::Drawing::Size(22, 20);
			this->v_cantDecimales->TabIndex = 11;
			this->v_cantDecimales->Text = "0";
			//
			// label6
			//
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(471, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Cantidad de decimales";
			//
			// MyForm
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(612, 368);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->v_cantDecimales);
			this->Controls->Add(this->v_caracter);
			this->Controls->Add(this->v_hex);
			this->Controls->Add(this->v_decimal);
			this->Controls->Add(this->v_octal);
			this->Controls->Add(this->v_binario);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->b_clear);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Examen1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion

	//aqui podemos instanciar atributos y metodos (puede ser tambien en otro .h)

private: System::Void v_binario_LostFocus(System::Object^ sender, System::EventArgs^ e) {
	
	//como el texto en el textBox cambio significa que se ingreso un numero
	int base = 2;
	double num =  Convert::ToDouble(v_binario->Text); //transformamos ese string a numero para poder insertarlo en la lista
	int cantDecimales = int::Parse(v_cantDecimales->Text);

	Nodo* Binario = listaEnlazada->buscarNodo(base);
	Nodo* cantidadDecimales = listaEnlazada->buscarNodo(0);

	Binario->setNumero(num);
	cantidadDecimales->setNumero(cantDecimales);
	
	//se debe hacer la conversion a las diferentes bases y definir los valores de los textBox AQUI
	this->v_octal->Text = (conversiones->conversorOctal(Binario)).ToString();
	this->v_decimal->Text = (conversiones->conversorDecimal(Binario, cantidadDecimales)).ToString();
	this->v_caracter->Text = conversiones->conversorAscii(Binario);
	this->v_hex->Text = conversiones->conversorHexadecimal(Binario);


}
private: System::Void v_octal_LostFocus(System::Object^ sender, System::EventArgs^ e) {
	
	int base = 8;
	//como el el texto en el textBox cambio significa que se ingreso un numero
	int num = int::Parse(v_octal->Text); //transformamos ese string a numero para poder insertarlo en la lista
	int cantDecimales = int::Parse(v_cantDecimales->Text);
	

	Nodo* Octal = listaEnlazada->buscarNodo(base);
	Nodo* cantidadDecimales = listaEnlazada->buscarNodo(0);

	Octal->setNumero(num);
	cantidadDecimales->setNumero(cantDecimales);

	//se debe hacer la conversion a las diferentes bases y definir los valosres de los textBox AQUI
	this->v_binario->Text = conversiones->conversorBinario(Octal, cantidadDecimales);
	this->v_decimal->Text = (conversiones->conversorDecimal(Octal, cantidadDecimales)).ToString();
	this->v_caracter->Text = conversiones->conversorAscii(Octal);
	this->v_hex->Text = conversiones->conversorHexadecimal(Octal);

}
private: System::Void v_decimal_LostFocus(System::Object^ sender, System::EventArgs^ e) {
	//como el el texto en el textBox cambio significa que se ingreso un numero
	int base = 10;
	double num = Convert::ToDouble(v_decimal->Text); //transformamos ese string a numero para poder insertarlo en la lista
	int cantDecimales = int::Parse(v_cantDecimales->Text);

	Nodo* Decimal = listaEnlazada->buscarNodo(base);
	Nodo* cantidadDecimales = listaEnlazada->buscarNodo(0);

	Decimal->setNumero(num);
	cantidadDecimales->setNumero(cantDecimales);
	
	this->v_octal->Text = (conversiones->conversorOctal(Decimal)).ToString();
	this->v_binario->Text = conversiones->conversorBinario(Decimal, cantidadDecimales);
	this->v_caracter->Text = conversiones->conversorAscii(Decimal);
	this->v_hex->Text = conversiones->conversorHexadecimal(Decimal);

}
private: System::Void v_hex_LostFocus(System::Object^ sender, System::EventArgs^ e) {
	//como el el texto en el textBox cambio significa que se ingreso un numero
	int base = 16;
	int num = Convert::ToInt32(v_hex->Text, 16); //transformamos ese string a numero para poder insertarlo en la lista
	int cantDecimales = int::Parse(v_cantDecimales->Text);

	Nodo* Hexadecimal = listaEnlazada->buscarNodo(base);
	Nodo* cantidadDecimales = listaEnlazada->buscarNodo(0);

	Hexadecimal->setNumero(num);
	cantidadDecimales->setNumero(cantDecimales);

	this->v_octal->Text = (conversiones->conversorOctal(Hexadecimal)).ToString();
	this->v_binario->Text = conversiones->conversorBinario(Hexadecimal, cantidadDecimales);
	this->v_caracter->Text = conversiones->conversorAscii(Hexadecimal);
	this->v_decimal->Text = (conversiones->conversorDecimal(Hexadecimal, cantidadDecimales)).ToString();

}
private: System::Void v_caracter_LostFocus(System::Object^ sender, System::EventArgs^ e) {
	//como el el texto en el textBox cambio significa que se ingreso un numero
	int base = 1;
	int num = Convert::ToChar(v_caracter->Text); //transformamos ese string a numero para poder insertarlo en la lista
	int cantDecimales = int::Parse(v_cantDecimales->Text);

	Nodo* Ascii = listaEnlazada->buscarNodo(base);
	Nodo* cantidadDecimales = listaEnlazada->buscarNodo(0);

	Ascii->setNumero(num);
	cantidadDecimales->setNumero(cantDecimales);

	//se debe hacer la conversion a las diferentes bases y definir los valosres de los textBox AQUI
	this->v_octal->Text = (conversiones->conversorOctal(Ascii)).ToString();
	this->v_binario->Text = conversiones->conversorBinario(Ascii, cantidadDecimales);
	this->v_decimal->Text = (conversiones->conversorDecimal(Ascii,cantidadDecimales)).ToString();
	this->v_hex->Text = conversiones->conversorHexadecimal(Ascii);

}
private: System::Void b_clear_Click(System::Object^ sender, System::EventArgs^ e) {

	this->v_octal->Text = "0";
	this->v_decimal->Text = "0";
	this->v_binario->Text = "0";
	this->v_caracter->Text = " ";
	this->v_hex->Text = "0";
	this->v_cantDecimales->Text = "0";

}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
