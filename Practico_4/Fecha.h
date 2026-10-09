#ifndef FECHA_
#define FECHA_

class Fecha
{
    private:
        int dia, mes, anio;

        void diaSiguiente();

    public:
        Fecha();
        Fecha (int, int, int);
        Fecha (const Fecha &);

        int getDia();
        int getMes();
        int getAnio();

        bool operator==(Fecha);
        bool operator<(Fecha);

        void diaSiguiente();
    };

#endif