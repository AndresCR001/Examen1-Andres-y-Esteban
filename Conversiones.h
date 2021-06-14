#pragma once
#include "Nodo.h"
#include <cmath>
#include <sstream>
//template <class TipoDato>

using namespace System;

class Conversiones
{
public:


	System::String^ conversorBinario(Nodo* nodoBaseActual, Nodo* cantD )
	{
		String^ strBinario;

		float numero = nodoBaseActual->getNumero();
		int base = nodoBaseActual->getBase();
		int cantidadDecimales = cantD->getNumero();

		float parteDecimal = numero - (int)numero;

		int exp, digito;
		double  numeroDecimal; // este numero es utlizado para el numero en base decimal NO -> para la cantidad de decimales

		switch (base)
		{
			case 1: 
				while ((int)numero != 0) {//obtenemos parte entera
					strBinario = ((int)numero % 2 == 0 ? "0" : "1") + strBinario;
					numero /= 2;
				}
				return gcnew String(strBinario);

			case 8: //en caso de ser octal
				//se convierte de octal a decimal para luego pasarlo a binario
				exp = 0;
				numeroDecimal = 0;
				digito = 0;

				while ((int)numero != 0)
				{
					digito = (int)numero % 10;
					numero /= 10;
					numeroDecimal += digito * pow(8, exp);
					++exp;
				}
				numero = numeroDecimal;

				//lo convertimos a binario.

				while ((int)numero != 0) {
					strBinario = ((int)numero % 2 == 0 ? "0" : "1") + strBinario; //en caso de que la division de 0 retorna el valor agregandolo al string
					numero /= 2;
				}
				return gcnew String(strBinario); // retornamos el string binario como un nuevo string

			case 10:
				//aqui se puede agregar la funcion de los decimales 
				while ((int)numero != 0) {//obtenemos parte entera
					strBinario = ((int)numero % 2 == 0 ? "0" : "1") + strBinario;
					numero /= 2;
				}

 				if (cantidadDecimales > 0){
					strBinario = strBinario + ".";
				}

				while (cantidadDecimales > 0) {

					parteDecimal = parteDecimal * 2;

					if (parteDecimal < 1) {
						strBinario += "0";
						cantidadDecimales--;
					}
					else {
						strBinario += "1";
						parteDecimal--; //restamos uno para seguir con el calculo de flotantes
						cantidadDecimales--;
					}
					
				}
	

				return gcnew String(strBinario);

			case 16: //en caso de ser hexadecimal

				while ((int)numero != 0) {
					strBinario = ((int)numero % 2 == 0 ? "0" : "1") + strBinario;
					numero /= 2;
				}

				return gcnew String(strBinario);
		}


	}

	System::String^ conversorHexadecimal(Nodo* nodoBaseActual)
	{
		double numero = nodoBaseActual->getNumero();
		int base = nodoBaseActual->getBase();

		std::string strHexadecimal= "";
		char hex[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
		int r;

		int exp, digito; 
		double numeroDecimal;
		
		switch (base)
		{
		case 1:
			// si queremos comvertir de base 10 a hexadecimales, primero definimos un array con los valores hexadecimales
			//luego dividimos la parte entera del numero entre diesiseis y eso nos da la posicion en el array del valor que buscamos
			//se va concatenando el string por la izquierda.

			while ((int)numero > 0)
			{
				r = (int)numero % 16;
				strHexadecimal = hex[r] + strHexadecimal;
				numero = numero / 16;
			}

			return gcnew String(strHexadecimal.c_str());

		case 2:

			exp = 0;
			numeroDecimal = 0;
			digito = 0;

			while (((int)(numero / 10)) != 0)
			{
				digito = (int)numero % 10;
				numeroDecimal = numeroDecimal + digito * pow(2.0, exp);
				exp++;
				numero = (int)(numero / 10);
			}
			numeroDecimal = numeroDecimal + numero * pow(2.0, exp);
			numero = numeroDecimal;

			// si queremos comvertir de base 10 a hexadecimales, primero definimos un array con los valores hexadecimales
			//luego dividimos la parte entera del numero entre diesiseis y eso nos da la posicion en el array del valor que buscamos
			//se va concatenando el string por la izquierda.
			while ((int)numero > 0)
			{
				r = (int)numero % 16;
				strHexadecimal = hex[r] + strHexadecimal;
				numero = numero / 16;
			}

			return gcnew String(strHexadecimal.c_str());
		
		case 8:

			exp = 0;
			numeroDecimal = 0;
			digito = 0;

			while ((int)numero != 0)
			{
				digito = (int)numero % 10;
				numero /= 10;
				numeroDecimal += digito * pow(8, exp);
				++exp;
			}
			numero = numeroDecimal;

			// si queremos comvertir de base 10 a hexadecimales, primero definimos un array con los valores hexadecimales
			//luego dividimos la parte entera del numero entre diesiseis y eso nos da la posicion en el array del valor que buscamos
			//se va concatenando el string por la izquierda.
			while ((int)numero > 0)
			{
				r = (int)numero % 16;
				strHexadecimal = hex[r] + strHexadecimal;
				numero = numero / 16;
			}

			return gcnew String(strHexadecimal.c_str());

		case 10:
			// si queremos comvertir de base 10 a hexadecimales, primero definimos un array con los valores hexadecimales
			//luego dividimos la parte entera del numero entre diesiseis y eso nos da la posicion en el array del valor que buscamos
			//se va concatenando el string por la izquierda.

			while ((int)numero > 0)
			{
				r = (int)numero % 16;
				strHexadecimal = hex[r] + strHexadecimal;
				numero = numero / 16;
			}
			
			return gcnew String(strHexadecimal.c_str());

		}

	}
	int conversorOctal(Nodo* nodoBaseActual)
	{
		double numero = nodoBaseActual->getNumero();
		int base = nodoBaseActual->getBase();

		int rem, i = 1, numeroOctal = 0;
		
		int exp, digito = 0;
		double  decimal;

		switch (base)
		{
		case 1: 

			while ((int)numero != 0)
			{
				rem = (int)numero % 8;
				numero /= 8;
				numeroOctal += rem * i;
				i *= 10;
			}

			numero = numeroOctal;
			return numero;

		case 2:
			// vamos a convertir de base a binaria a base decimal y de decimal a octal 
			//primero vamos a obtener el valor entero del numero, dividiendo este entre 10 mientras que el numero no sea cero
			exp = 0;
			decimal = 0;
			while (((int)(numero / 10)) != 0)
			{
				digito = (int)numero % 10;//el residuo de la division es un digito (0 o 1)
				decimal = decimal + digito * pow(2.0, exp); // sumamos el decimal con el digito por 2 elevado al grado
				exp++;
				numero = (int)(numero / 10);// recortamos el numero 
			}
			decimal = decimal + numero * pow(2.0, exp); //ajuste de la ultima llamada
			numero = decimal;//indicamos el valor del numero al valor decimal hallado

			//obtenemos el valor decimal 

			//convertimos el valor decimal por medio de numero y lo pasamos a octal 
			while ((int)numero != 0) {
				rem = (int)numero % 8;
				numero /= 8;
				numeroOctal += rem * i;
				i *= 10;
			}

			numero = numeroOctal;
			return numero;

		case 10: //convertimos de decimal a octal

			while ((int)numero != 0)
			{
				rem = (int)numero % 8;
				numero /= 8;
				numeroOctal += rem * i;
				i *= 10;
			}

			numero = numeroOctal;
			return numero;
		
		case 16:

			while ((int)numero != 0)
			{
				rem = (int)numero % 8;
				numero /= 8;
				numeroOctal += rem * i;
				i *= 10;
			}

			numero = numeroOctal;
			return numero;

		}
		

	}
	double conversorDecimal(Nodo* nodoBaseActual, Nodo* cantD)
	{
		double numero = nodoBaseActual->getNumero();
		int base = nodoBaseActual->getBase();

		int cantidadDecimales = cantD->getNumero();

		float parteDecimal = numero - (int)numero;

		float nParteDecimal = 0;


		int exp, digito;
		double  numeroDecimal;



		switch (base)
		{

		case 1:
			return numero;

		case 2: //convertir de binario a Decimal
			
			exp = 0;
			numeroDecimal = 0;
			digito = 0;

			

			while (((int)(numero / 10)) != 0)
			{
				digito = (int)numero % 10;
				numeroDecimal = numeroDecimal + digito * pow(2.0, exp);
				exp++;
				numero = (int)(numero / 10);
			}
			numeroDecimal = numeroDecimal + numero * pow(2.0, exp);
			numero = numeroDecimal;

			
			break;
		
		case 8:// la base es ocho  convertimos de octal a decimal 
			
			exp = 0;
			numeroDecimal = 0;
			digito = 0;
			
			while ((int)numero != 0)
			{
				digito = (int)numero % 10;
				numero /= 10;
				numeroDecimal += digito * pow(8, exp);
				++exp;
			}
			numero = numeroDecimal;
			break;

			case 16:
				return numero;

		}

		return numero;

	}

	System::String^ conversorAscii(Nodo * nodoBaseActual){
		
		double numero = nodoBaseActual->getNumero();
		int base = nodoBaseActual->getBase();

		String^ ascii;

		int exp, digito;
		double  numeroDecimal;

		switch (base)
		{
		case 2: // convertios de binario a numeroDecimal para determinar el valor ascii
			exp = 0;
			numeroDecimal = 0;
			digito = 0;

			while (((int)(numero / 10)) != 0){
				digito = (int)numero % 10;
				numeroDecimal = numeroDecimal + digito * pow(2.0, exp);
				exp++;
				numero = (int)(numero / 10);
			}
			numeroDecimal = numeroDecimal + numero * pow(2.0, exp);
			numero = numeroDecimal; // una vez que obtenemos el valor se lo asignamos al numero

			if (numero <= '~' && numero >= ' ') { // se filtra por medio del IF que sea expresable en modo string

				ascii = Convert::ToString(Convert::ToChar((int)numero));
				return gcnew String(ascii);
			}
			else {
				return "0";
			}

		case 8: //convertimos de octal a ascii por medio de una conversion a decimal
			
			exp = 0;
			numeroDecimal = 0;
			digito = 0;

			while ((int)numero != 0)
			{
				digito = (int)numero % 10;
				numero /= 10;
				numeroDecimal += digito * pow(8, exp);
				++exp;
			}
			numero = numeroDecimal;

			if (numero <= '~' && numero >= ' ') {

				ascii = Convert::ToString(Convert::ToChar((int)numero));
				return gcnew String(ascii);
			}
			else {
				return "0";
			}
			break;



		case 10:
			if (numero <= '~' && numero >= ' ') {
				ascii = Convert::ToString(Convert::ToChar((int)numero));
				return gcnew String(ascii);
			}
			else {
				return "0";
			}
		case 16:
			if (numero <= '~' && numero >= ' ') {
				ascii = Convert::ToString(Convert::ToChar((int)numero));
				return gcnew String(ascii);
			}
			else {
				return "0";
			}
		}


	}
};



/*

si se cambia el valor en cualquiera se hace
un setNum()
luego se define por label un conversor
ejemplo: (label es una referencia a la base)

	 si se cambia el decimal:
	 setNum(TipoDato x)
	 labelD = conversorDecimal()
	 labelB = conversorBinario()
	 LabelH = conversorHexadeciaml()

	y asi sucesivamente

*/