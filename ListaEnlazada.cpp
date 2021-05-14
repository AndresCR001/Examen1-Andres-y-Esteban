#include "ListaEnlazada.h"
#include <iostream>

using namespace std;

void ListaEnlazada::crearLista(Nodo** lista)
{
    *lista = NULL;
}

Nodo* ListaEnlazada::buscar(Nodo* lista, const char* nom) //mejorar el metodo buscar de forma que si lo encuentra me retorne el nodo en caso contrario null 
{
    int encontrado = 0;
    while (!encontrado && lista != NULL)
    {
        if (nom == lista->nombre)
            encontrado = 1;
        else 
            lista = lista->siguiente;
    }
    return lista; //me retorna la lista que posee el mismo nombre que estoy buscando
}

int ListaEnlazada::listaVacia(Nodo* lista)
{
    return lista==NULL;
}

void ListaEnlazada::insertar(Nodo** lista , TipoDato dato, const char* nom)
{
    Nodo* nuevo;
    strcpy(nuevo -> nombre, nom);
    nuevo -> dato = dato;
    nuevo -> siguiente = *lista;
    (*lista) = nuevo;
}

void ListaEnlazada::suprimir(Nodo** lista)
{
    if (!listaVacia(*lista))
    {
    Nodo* f;
    f = *lista;
    (*lista) = (*lista) -> siguiente;
    }
}


TipoDato ListaEnlazada::quitar(Nodo** lista)
{
    TipoDato tem;
    Nodo* q;

    if (listaVacia(*lista))
    {
        cout<<"Se intento sacar un dato en lista vacia";
        exit(1);
    }
    tem = (*lista) -> dato;
    q = *lista;
    (*lista) = (*lista) -> siguiente;

    return tem;
}

/*TipoDato quitar(Nodo** lista)
{
    TipoDato tem = cima(*lista);
    suprimir(lista);
    return tem;
}*/

void ListaEnlazada::limpiarLista(Nodo** lista)
{
    while (!listaVacia(*lista))
    {
        suprimir(lista);
    }
    
}

TipoDato ListaEnlazada::cima(Nodo* lista)
{
    if(listaVacia(lista))
    {
        cout<<"Error de ejecucion, lista vacia";
        exit(1);
    }
    return lista -> dato;
}

