#include "Nacional.h"

Nacional::Nacional(int cod, String name, float precio, String dpto, bool sub): Articulo(cod, name, precio), departamento(dpto)
{
    subsidiado = sub;
}

String Nacional::getDepartamento(){
    return departamento;
}

bool Nacional::getSubsidiado(){
    return subsidiado;
}

void Nacional::setSubsidiado(bool sub){
    subsidiado = sub;
}

float Nacional::precioVenta(){
    float precio = Articulo::precioVenta();
    if (!getSubsidiado()){
        if (departamento=="Montevideo") {
            precio = precio * 1.15;
        } else {
            precio = precio * 1.10;
        }
    }
    return precio;
}

String Nacional::tipoArticulo(){
    return ("Nacional");
}

Nacional::~Nacional(){

}