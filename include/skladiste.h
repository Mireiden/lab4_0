#ifndef SKLADISTE_H
#define SKLADISTE_H
#include "element.h"
#include <iostream>

class Skladiste {
    private:
    double m_maxKapacitet;
    int  m_nNiza;
    Element** m_Elementi;
    public:
    Skladiste(double kapacitet, int brel);
    ~Skladiste();
    void add_element();
    double getsum_kolicina();
    void printall_sifra();
    friend std::ostream& operator<<(std::ostream& stream, Skladiste& s);
};

#endif