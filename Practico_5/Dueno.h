#ifndef DUENO_H
#define DUENO_H
#include "Mascota.h"
#include "String.h"


class Dueno{
    private:
        long int cedula;
        String nombre;
        Mascota * masc;
    public:
        Dueno(); // Constructor por defecto
        Dueno(long, String); // Constructor comun
        Dueno(const Dueno &); // Constructor de copia
        ~Dueno(); // Destructor

        long int getCedula(); // Selector Cedula
        String getNombre(); // Selector Nombre
        Mascota * getMascota();   //selector Mascota
        void setMascota(Mascota *);   //cargar mascota
        bool tieneMascota();    //devuelve si tiene al menos una mascota

        Dueno operator=(const Dueno &);
    };





#endif