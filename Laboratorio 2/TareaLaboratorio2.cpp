#include <iostream>

struct Nodo{
	int dato;
	Nodo *sig;
	Nodo *prev;
}*inicio , *fin;

class Lista{
	
	Nodo* crearNodo(int valor){
		Nodo *n = new Nodo;
		n->dato = valor;
		n->sig = nullptr;
		n->prev = nullptr;
		return n;
	}
	
	void AgregarDato (int valor){
		Nodo *a= crearNodo(valor), *temp;
		if(!inicio)
			inicio = a;
			fin = a;
		else{
			fin->sig=a;
			n->prev=fin;
			fin=n;
		}
	}
	
	void Cambiar(int v1, int v2 ){
		Nodo *temp1 = inicio;
		Nodo *temp2 = inicio;
		
		if(!inicio){
			cout<< "Lista vacia"<<endl;
		}
		
		else{
			while(temp){
				if(temp1->dato == v1){
					int a = temp1->dato;
				}
				if(temp2->dato == v2){
					int b = temp2->dato;
				}
			}
		}
	}
	
	
};

int main (void){
	Lista lista1;
	
	lista1.AgregarDato(1);
	lista1.AgregarDato(2);
	lista1.AgregarDato(3);
	lista1.AgregarDato(4);
	lista1.AgregarDato(5);
	
	lista1.Cambiar(2,3);
	
	
	
	return 0;
}
