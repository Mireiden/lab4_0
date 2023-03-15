#ifndef SILOS_H
#define SILOS_H
#include "element.h"
#include <iostream>
class Silos: public Element{
    private:
    char* m_lot;
    float max_kolicinaMaterijala;
    public:
    Silos();
    ~Silos();
    friend std::istream& operator>>(std::istream& instream, Silos& s);

};

#endif