#include "Fecha.h"
#include "Estadia.h"
#include "iterador.h"
#include "Estadias.h"
#include <iostream>

int main() {
    Fecha f1(1, 1, 2020);
    Fecha f2(1, 1, 2021);

    Fecha f3 = f1 + 30; // Sumar 30 días a f1
    Fecha f4 = ++f1; // Incrementar f1 en un día

    
    Estadia estadia1(0, f1, f2);
    //std::cout << "Número de la estadía: " << estadia1.getNumero() << std::endl;
    Estadia estadia2(1, f3, f4);
    //std::cout << "Número de la estadía: " << estadia2.getNumero() << std::endl;
    Estadias estadias;
    estadias.insert(estadia1);
    estadias.insert(estadia2);
    std::cout << "Lista de estadias " << std::endl;
    for (int i = 0; i < 100; i++) {
        if (estadias.member(i)) {
            Estadia e = estadias.find(i);
            std::cout << "Número de la estadía: " << e.getNumero() << std::endl;
        }
    }

    return 0;
}
