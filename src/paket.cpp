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
    char templot[50];
    char temptip[50];
    instream>>p.p_sifra>>p.p_sifraMaterijala>>p.p_kolicina>>templot>>temptip;
    p.m_lot=new char[strlen(templot)+1];
    strcpy(p.m_lot,templot);
    p.m_tip=new char[strlen(temptip)+1];
    strcpy(p.m_tip,temptip);
    if (!std::isalpha(p.m_tip[0]))
    throw std::invalid_argument("Tip paketa mora poceti slovom!");

    return instream;
}

void Paket::print_element(){
    std::cout<<p_sifra<<p_sifraMaterijala<<p_kolicina<<m_lot<<m_tip;
}