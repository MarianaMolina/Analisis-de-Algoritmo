#include <iostream>

struct Nodo{
	int dato;
	Nodo *sig;
	Nodo *prev;
}*inicio, *fin;

class Lista{
	
	Nodo* crearNodo(int valor){
		Nodo *n = new Nodo;
		n->dato = valor;
		n->sig = nullptr;
		n->prev = nullptr;
		return n;
	}
	
	Cambiar(int v1, int v2 ){
		
	}
	
};
