#include "String.h"


        String::String()
        {
                cadena = new char[1];
                cadena[0] = '\0'; 
        }

        String::String(char * s)
        {
                int largo = strlen(s);   // cantidad de caracteres de la cadena 
                cadena = new char[largo + 1];  // un lugar mas para el '\0'.
                strcpy(cadena, s); // se copian los caracteres de la cadena
        }

        String::String(const String &s2)
        {
                int largo = strlen(s2.cadena);    // cantidad de caracteres de la cadena 
                cadena = new char [largo + 1];     // un lugar mas para el '\0'.   
                strcpy(cadena, s2.cadena);      // se copian los caracteres de la cadena 
        }

        String::~String()
        {
             delete [] cadena;
        }

        void String::scan()
        {
            int i = 0;
            char aux[MAX];
            char c;
            c = std::cin.get();

            while( c != '\n' && i < MAX - 1){
                aux[i] = c;
                i++;
                c = std::cin.get();
            }
            aux[i] = '\0';

            cadena = new char[i + 1];
            strcpy(cadena, aux);
        }

        void String :: print(){
            std::cout << cadena;
        }

        String String::operator=(const String &s2)
        {
            if (this != &s2) { 
                delete [] cadena; 
                int largo = strlen(s2.cadena); 
                cadena = new char [largo + 1]; 
                strcpy (cadena, s2.cadena); 
            }
            return(*this);
        }

        bool String::operator==(String s2)
        {
            int largoThis = strlen(this->cadena);
            int largo = strlen(s2.cadena);
            bool sonIguales = true;
            if(largo != largoThis){
                sonIguales = false;
            }else{
                for (int i = 0; i < largoThis; i++) {
                    if (this->cadena[i] != s2.cadena[i]) {
                        sonIguales = false;
                    }
                }
            }
            return sonIguales;
        }

        bool String::operator<(String s2)
        {
            int i = 0;
            while(this->cadena[i] != '\0' && s2.cadena[i] != '\0' 
                && this->cadena[i] == s2.cadena[i]){
                i++;
            }

            return this->cadena[i] < s2.cadena[i];
        }

        String String::operator+(String s2)
        {
            int largoThis = strlen(this->cadena);
            int largo = strlen(s2.cadena);

            if(largoThis + largo > MAX)
                return String();

            char * aux = new char[largo + largoThis + 1];
            strcpy(aux, this->cadena);
            strcat(aux, s2.cadena);

            String resultado(aux);
            delete[] aux;

            return resultado;
        }