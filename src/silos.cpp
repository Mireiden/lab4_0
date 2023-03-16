#include "element.h"
#include "silos.h"
#include <iostream>
#include <cstring>

Silos::Silos(){
    m_lot=nullptr;
    m_max_kolicinaMaterijala=0;
}

Silos::Silos(int sifra, int sifraMaterijala, float kolicina, char* lot, float maxkolicina):Element(sifra, sifraMaterijala, kolicina)
{
    this->m_lot=new char[strlen(lot)+1];
    strcpy(m_lot,lot);
    m_max_kolicinaMaterijala=maxkolicina;
}

Silos::~Silos(){
    delete[] m_lot;
}

std::istream& operator>>(std::istream& instream, Silos& s){
    instream>>s.p_sifra>>s.p_sifraMaterijala>>s.m_lot>>s.m_max_kolicinaMaterijala;
}


