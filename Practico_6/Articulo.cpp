#include "Articulo.h"

Articulo::Articulo (int cod, String name, float costo): nombre(name)
{
    codigo = cod;
    precioCosto = costo;
}

int Articulo::getCodigo(){
    return codigo;
}
String Articulo::getNombre(){
    return nombre;
}
float Articulo::getPrecioCosto(){
    return precioCosto;
}
void Articulo::setPrecioCosto(float valor){
    precioCosto = valor;
}

float Articulo::precioVenta(){
    return (precioCosto * 1.2);
}

Articulo::~Articulo(){
    
}
