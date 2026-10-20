#ifndef STRING_H
#define STRING_H

class String {
private:
    char* data;
    int length;

public:
    String();
    String(char*);
    String(const String &);

    
};

#endif