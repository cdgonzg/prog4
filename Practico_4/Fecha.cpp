class Fecha
{
    private:
        int dia, mes, anio;

    public :
        // Constructor por defecto
        Fecha (){
            dia = 1;
            mes = 1;
            anio = 2000;
        } 

        // Constructor común
        Fecha (int d, int m, int a){
            dia = d;
            mes = m;
            anio = a;
        }

        // Constructor común, año por omisión
        Fecha (int d, int m){
            dia = d;
            mes = m;
            anio = 2000;
        }

        // Constructor común, mes y año por omisión
        Fecha (int d){
            dia = d;
            mes = 1;
            anio = 2000;
        }

        // Métodos de la clase
        Fecha Copia(const Fecha& F){
            return Fecha(F.dia, F.mes, F.anio);
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

        Fecha :: ~Fecha (){ 

        } 

        //determina si ambas fechas son iguales
        bool operator ==(Fecha F1, Fecha F2){
            return (F1.dia == F2.dia && F1.mes == F2.mes && F1.anio == F2.anio);
        }

        //determina si la primer fecha es anterior a la segunda
        bool operator <(Fecha F1, Fecha F2){
            return (F1.anio < F2.anio || (F1.anio == F2.anio && F1.mes < F2.mes) || (F1.anio == F2.anio && F1.mes == F2.mes && F1.dia < F2.dia));
        }
        
        //determina si la primer fecha es anterior a la segunda
        bool operator < (Fecha F1, Fecha F2){
            return (F1.anio < F2.anio || (F1.anio == F2.anio && F1.mes < F2.mes) || (F1.anio == F2.anio && F1.mes == F2.mes && F1.dia < F2.dia));
        }
        
        //suma un día a una fecha dada
        Fecha operator ++ (Fecha F){
            F.dia++;
            return F;
        }
        //suma una cantidad dada de días a una fecha dada
        Fecha operator+ (Fecha F, int dias){
            F.dia += dias;
            return F;
        }

        //cantidad de días de diferencia entre dos fechas dadas
        int operator- (Fecha F1, Fecha F2){
            return (F1.dia - F2.dia);
        }
        //determina si una fecha es válida
        bool esValida(Fecha F){
            // Implementación para validar la fecha
        }
    
};