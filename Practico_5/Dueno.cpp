#include "Dueno.h"

Dueno::Dueno(): nombre(){
    cedula = 0;
    masc = NULL;
}

Dueno::Dueno(long int ced, String nom): nombre(nom){
    cedula = ced;
    masc = NULL;
}

Dueno::Dueno(const Dueno &d): nombre(d.nombre){
    cedula = d.cedula;
    if (d.masc != NULL){
        masc = new Mascota(*d.masc);
    } else {
        masc = NULL;
    }
}

Dueno :: ~Dueno()
{
    if (masc!=NULL)
    {
        delete masc;
    }
}

long int Dueno::getCedula(){
    return(cedula);
}
String Dueno::getNombre(){
    return(nombre);
}

Mascota * Dueno::getMascota(){
    return(masc);
}

void Dueno::setMascota(Mascota * m){
    delete masc;
    masc = m;
}

bool Dueno::tieneMascota(){
    return(masc != NULL);
}

Dueno Dueno::operator=(const Dueno &d)
{
    if(this != &d)
    {
        cedula = d.cedula;
        nombre = d.nombre;
        delete masc;
        if (d.masc != NULL){
        masc = new Mascota(*d.masc);
        } else {
            masc = NULL;
        }
    }    
    return(*this);
}