#include "Dueno.h"
#include "Mascota.h"
#include "String.h"

void mostrarMascota(Mascota * m) {
    std::cout << "  Mascota #" << m->getNumero() << " - Apodo: ";
    m->getApodo().print();
    std::cout << " - Peso: " << m->getPeso() << " kg" << std::endl;
}

void mostrarDueno(Dueno & d) {
    std::cout << "Dueno CI " << d.getCedula() << " - Nombre: ";
    d.getNombre().print();
    std::cout << std::endl;
    if (d.tieneMascota())
        mostrarMascota(d.getMascota());
    else
        std::cout << "  (sin mascota)" << std::endl;
}

int main () {
    // ---------- Pruebas de String ----------
    std::cout << "===== String =====" << std::endl;
    char txt1[] = "Hola";
    char txt2[] = " mundo";
    char txt3[] = "Hola";
    char txt4[] = "Abeja";

    String s1(txt1);
    String s2(txt2);
    String s3(txt3);
    String s4(txt4);
    String vacio;

    std::cout << "s1: "; s1.print(); std::cout << std::endl;
    std::cout << "s2: "; s2.print(); std::cout << std::endl;
    std::cout << "vacio: ["; vacio.print(); std::cout << "]" << std::endl;

    String copia(s1);   // constructor de copia
    std::cout << "copia de s1: "; copia.print(); std::cout << std::endl;

    String asignado;
    asignado = s2;      // operator=
    std::cout << "asignado = s2: "; asignado.print(); std::cout << std::endl;

    String concat = s1 + s2;   // operator+
    std::cout << "s1 + s2: "; concat.print(); std::cout << std::endl;

    std::cout << "s1 == s3: " << (s1 == s3 ? "true" : "false") << std::endl;
    std::cout << "s4 < s1: "  << (s4 < s1 ? "true" : "false") << std::endl;
    std::cout << "s1 < s4: "  << (s1 < s4 ? "true" : "false") << std::endl;

    // ---------- Pruebas de Mascota ----------
    std::cout << std::endl << "===== Mascota =====" << std::endl;
    char apodo1[] = "Firulais";
    Mascota m1(1, String(apodo1), 12.5);
    mostrarMascota(&m1);

    Mascota m2(m1);     // constructor de copia
    std::cout << "Copia de m1:" << std::endl;
    mostrarMascota(&m2);

    Mascota mDef;       // constructor por defecto
    std::cout << "Mascota por defecto:" << std::endl;
    mostrarMascota(&mDef);

    // ---------- Pruebas de Dueno ----------
    std::cout << std::endl << "===== Dueno =====" << std::endl;
    Dueno dDef;         // constructor por defecto
    mostrarDueno(dDef);

    char nom1[] = "Juan Perez";
    Dueno d1(12345678, String(nom1));
    mostrarDueno(d1);

    // Se le asigna una mascota en memoria dinamica
    // (el destructor de Dueno se encarga de liberarla)
    char apodo2[] = "Michi";
    d1.setMascota(new Mascota(2, String(apodo2), 4.3));
    std::cout << "Luego de setMascota:" << std::endl;
    mostrarDueno(d1);

    return 0;
}
