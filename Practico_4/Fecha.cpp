#include "Fecha.h"

class Fecha
{
    private:
        int dia, mes, anio;

        void Fecha::diaSiguiente() {
            // 1. Meses de 30 días: Abril (4), Junio (6), Septiembre (9), Noviembre (11)
            if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                if (dia == 30) {
                    dia = 1;
                    mes++;
                } else {
                    dia++;
                }
            } 
            // 2. Meses de 31 días: Enero (1), Marzo (3), Mayo (5), Julio (7), Agosto (8), Octubre (10), Diciembre (12)
            else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) { 
                if (dia == 31) {
                    dia = 1;
                    if (mes == 12) {
                        mes = 1; // Reinicia el mes a Enero
                        anio++;
                    } else {
                        mes++;
                    }
                } else {
                    dia++;
                }
            } 
            // 3. Febrero (2)
            else if (mes == 2) {
                // Corrección de sintaxis en C++: usar && y || con paréntesis correctos
                bool esBisiesto = ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0));

                if (esBisiesto) {
                    if (dia == 29) {
                        dia = 1;
                        mes = 3;
                    } else {
                        dia++;
                    }
                } else {
                    if (dia == 28) {
                        dia = 1;
                        mes = 3;
                    } else {
                        dia++;
                    }
                }   
            }
        }


    public:
        // Constructor por defecto
        Fecha :: Fecha (){
            dia = 1;
            mes = 1;
            anio = 2000;
        } 

        // Constructor común
        Fecha :: Fecha (int d, int m, int a){
            dia = d;
            mes = m;
            anio = a;
        }

        // Constructor común, año por omisión
        Fecha :: Fecha (int d, int m){
            dia = d;
            mes = m;
            anio = 2000;
        }

        // Constructor común, mes y año por omisión
        Fecha :: Fecha (int d){
            dia = d;
            mes = 1;
            anio = 2000;
        }

        // Métodos de la clase
        Fecha :: Fecha(const Fecha& F){
            dia = F.dia;
            mes = F.mes;
            anio = F.anio;
        }

        int Fecha :: getDia(){ 
            return dia; 
        }
        int Fecha :: getMes(){ 
            return mes; 
        }
        int Fecha :: getAnio(){ 
            return anio; 
        }

        ~Fecha (){ 

        }

        //determina si ambas fechas son iguales
        bool Fecha :: operator ==(Fecha F){
            return (dia == F.dia && mes == F.mes && anio == F.anio);
        }

        //determina si la primer fecha es anterior a la segunda
        bool Fecha :: operator <(Fecha F){
            return (anio < F.anio || (anio == F.anio && mes < F.mes) || (anio == F.anio && mes == F.mes && dia < F.dia));
        }
        
        //suma un día a una fecha dada
        Fecha Fecha :: operator ++(){
            dia++;
        }
        //suma una cantidad dada de días a una fecha dada
        Fecha operator +(int dias){
            dia += dias;
        }

        //cantidad de días de diferencia entre dos fechas dadas
        int operator -(Fecha F){
            return (dia - F.dia);
        }
        //determina si una fecha es válida
        bool esValida(Fecha F){
            // Implementación para validar la fecha
        }
    
};