#ifndef PAKET_H
#define PAKET_H
#include "element.h"
#include <iostream>

class Paket: public Element{
    private:
    char* m_lot;
    char* m_tip;
    public:
    Paket();
    ~Paket();
    friend std::istream& operator>>(std::istream& instream, Paket& p);



};
#endif