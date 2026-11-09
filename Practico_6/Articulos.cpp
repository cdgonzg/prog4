#include "Articulos.h"

Articulos::Articulos() {
    for (int i = 0; i < MAX_ARTICULOS; i++) {
        Hash[i] = NULL;
    }
}

Articulos::~Articulos() {
    for (int i = 0; i < MAX_ARTICULOS; i++) {
        NodoLis * current = Hash[i];
        while (current != NULL) {
            NodoLis * temp = current;
            current = current->sig;
            delete temp->info;
            delete temp;
        }
    }
}

bool Articulos::member(int id) {
    int cubeta = h(id);
    return perteneceLista (Hash[cubeta], num);
}

void Articulos::insert(Articulo a) {
}

Articulo Articulos::find(int id) {
}

void Articulos::remove(int id) {
}

bool Articulos::estaVacio() {
}

bool Articulos::estaLleno() {
}

Articulo Articulos::articuloMasCaro() {
}

int Articulos::cuantosNacionales(String) {
}

int Articulos::cuantosImportados(Fecha) {
}