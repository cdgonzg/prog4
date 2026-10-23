#ifndef STRING_H
#define STRING_H
#include <stdio.h>
#include <string.h>
#include <iostream>

const int MAX = 80;
class String {
    private:
        char * cadena;
    public:
        String();
        String(char * s);
        String(const String &s2);
        ~String();

        void scan();
        void print();

        String operator=(const String &s2);
        bool operator==(String s2);
        bool operator<(String s2);
        String operator+(String s2);
        

};

#endif