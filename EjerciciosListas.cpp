#include "EjerciciosListas.h" 


NodoLista* invertirParcial(NodoLista* l) {
    if (l == NULL ) {
        return NULL;
    }
    int cont = 0;
    NodoLista* temp = l;
    while (temp != NULL) {
        cont++;
        temp = temp->sig;
    }
    int elementos = cont - 1;
    NodoLista* nuevaLista = NULL;
    temp = l;

    for (int i = 0; i < elementos; i++) {
        NodoLista* nuevoNodo = new NodoLista;
        nuevoNodo->dato = temp->dato;
        nuevoNodo->sig = nuevaLista;
        nuevaLista = nuevoNodo;
        temp = temp->sig;
    }
    return nuevaLista;
}

void eliminarNesimoDesdeElFinal(NodoLista*& lista, int& n) {
    if (lista == NULL) {
        return;
    }
    eliminarNesimoDesdeElFinal(lista->sig, n);
    n--;
    if (n == 0) {
        NodoLista* nodoAEliminar = lista;
        lista = lista->sig;
        delete nodoAEliminar;
    }
}

NodoLista* listaOrdenadaInsertionSort(NodoLista* l) {
    if (l == NULL) {
        return NULL;
    }

    NodoLista* res = NULL;
    

    while (l != NULL) {
        NodoLista* nuevo = new NodoLista;
        nuevo->dato = l->dato;
        nuevo->sig = NULL;

        if (res == NULL || nuevo->dato <= res->dato) {
            nuevo->sig = res;
            res = nuevo;
        }
        else {
            NodoLista* temp = res;
            while (temp->sig != NULL && temp->sig->dato < nuevo->dato) {
                temp = temp->sig;
            }
            nuevo->sig = temp->sig;
            temp->sig = nuevo;
        }
        l = l->sig;
    }

    return res;
}

void listaOrdenadaSelectionSort(NodoLista*& l)
{
	// IMPLEMENTAR SOLUCION
}

NodoLista* intercalarIter(NodoLista* l1, NodoLista* l2)
{
	// IMPLEMENTAR SOLUCION
	return NULL;
}

NodoLista* intercalarRec(NodoLista* l1, NodoLista* l2)
{
	// IMPLEMENTAR SOLUCION
	return NULL;
}

NodoLista* insComFin(NodoLista* l, int x)
{
	// IMPLEMENTAR SOLUCION
	return NULL;
}

NodoLista* exor(NodoLista* l1, NodoLista* l2)
{
	// IMPLEMENTAR SOLUCION
	return NULL;
}

void eliminarDuplicadosListaOrdenadaDos(NodoLista*& l) 
{
	// IMPLEMENTAR SOLUCION
}

bool palindromo(NodoLista* l)
{
	// IMPLEMENTAR SOLUCION
	return false;
}

void eliminarSecuencia(NodoLista* &l, NodoLista* secuencia) 
{
	// IMPLEMENTAR SOLUCION
}

void moverNodo(NodoLista* &lista, unsigned int inicial, unsigned int final)
{
	// IMPLEMENTAR SOLUCION
}
