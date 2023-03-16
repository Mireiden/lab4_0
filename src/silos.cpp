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

void Silos::print_element()
{
    std::cout<<p_sifra<<p_sifraMaterijala<<p_kolicina<<m_lot<<m_max_kolicinaMaterijala;
}

std::istream& operator>>(std::istream& instream, Silos& s){
    char templot[50];
    instream>>s.p_sifra>>s.p_sifraMaterijala>>s.p_kolicina>>templot>>s.m_max_kolicinaMaterijala;
    s.m_lot=new char[strlen(templot)+1];
    strcpy(s.m_lot,templot);
    if (s.p_kolicina>s.m_max_kolicinaMaterijala)
    {
        throw std::overflow_error("Greska: kolicina materijala u silosu prekoracuje maksimalnu vrednost.");
    }
    s.p_kolicina = s.m_max_kolicinaMaterijala;
    return instream;
}

