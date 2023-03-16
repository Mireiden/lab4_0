#include "element.h"
#include "paket.h"
#include <iostream>
#include <cstring>

Paket::Paket(){
    m_tip=nullptr;
    m_lot=nullptr;
}

Paket::Paket(int sifra, int sifraMaterijala, float kolicina, const char* tip, const char* lot):Element(sifra, sifraMaterijala, kolicina){
    this->m_tip = new char[strlen(tip)+1];
    strcpy(m_tip,tip);
    this->m_lot=new char[strlen(tip)+1];
    strcpy(m_lot,lot);
}


Paket::~Paket(){
    delete[] m_lot;
    delete[] m_tip;
}

std::istream& operator>>(std::istream& instream, Paket& p){
    instream>>p.p_sifra>>p.p_sifraMaterijala>>p.p_kolicina>>p.m_tip>>p.m_lot;
}