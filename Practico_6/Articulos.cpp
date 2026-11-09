#include "Articulos.h"

void Articulos::crearLista (NodoL * &lista) {
    lista = NULL;
}

void Articulos::destruirLista (NodoL * &lista) {
    NodoLis * current = lista;
    while (current != NULL) {
        NodoLis * temp = current;
        current = current->sig;
        delete temp->info;
        delete temp;
    }
    lista = NULL;
}

bool Articulos::perteneceLista (NodoL * lista, int id) {
    NodoLis * current = lista;
    while (current != NULL) {
        if (current->info->getId() == id) {
            return true;
        }
        current = current->sig;
    }
    return false;
}

void Articulos::insFrontEnLista (NodoL * &lista, Articulo * a) {
    NodoLis * nuevo = new NodoLis;
    nuevo->info = a;
    nuevo->sig = lista;
    lista = nuevo;
}

Articulo * Articulos::obtenerEnLista (NodoL * lista, int id) {
    NodoLis * current = lista;
    while (current != NULL) {
        if (current->info->getId() == id) {
            return current->info;
        }
        current = current->sig;
    }
    return NULL;
}

Articulos::Articulos() {
    for (int i = 0; i < cant; i++) {
        crearLista(Hash[i]);
    }
}

Articulos::~Articulos() {
    for (int i = 0; i < cant; i++) {
        destruirLista(Hash[i]);
    }
}

bool Articulos::member(int id) {
    int cubeta = h(id);
    return perteneceLista (Hash[cubeta], id);
}

void Articulos::insert(Articulo a) {
    int cubeta = h(a.getId());
    Articulo * nuevo = new Articulo(a);
    insFrontEnLista(Hash[cubeta], nuevo);
}

Articulo Articulos::find(int id) {
    int cubeta = h(id);
    Articulo * a = obtenerEnLista(Hash[cubeta], id);
    if (a != NULL) {
        return *a;
    }
    // Manejar caso no encontrado según sea necesario
    return Articulo(); // Retorna un artículo por defecto
}

void Articulos::remove(int id) {
    int cubeta = h(id);
    NodoLis * current = Hash[cubeta];
    NodoLis * prev = NULL;
    while (current != NULL) {
        if (current->info->getId() == id) {
            if (prev == NULL) {
                Hash[cubeta] = current->sig;
            } else {
                prev->sig = current->sig;
            }
            delete current->info;
            delete current;
            return;
        }
        prev = current;
        current = current->sig;
    }
}

bool Articulos::estaVacio() {
    for (int i = 0; i < cant; i++) {
        if (Hash[i] != NULL) {
            return false;
        }
    }
    return true;
}

bool Articulos::estaLleno() {
    for (int i = 0; i < cant; i++) {
        if (Hash[i] == NULL) {
            return false;
        }
    }
    return true;
}

Articulo Articulos::articuloMasCaro() {
}

int Articulos::cuantosNacionales(String) {
}

int Articulos::cuantosImportados(Fecha) {
}