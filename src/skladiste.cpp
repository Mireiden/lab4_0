#include "skladiste.h"
#include "element.h"
#include <iostream>

Skladiste::Skladiste(double kapacitet, int brel)
    :m_maxKapacitet(kapacitet),m_nNiza(brel)
    {
        m_Elementi=new Element*[m_nNiza];
    }

Skladiste::~Skladiste(){
    delete m_Elementi;
}


void Skladiste::add_element(Element& element) {
    if (getsum_kolicina() + element.get_kolicina() <= m_maxKapacitet) {
        m_nNiza++;
        Element** temp = new Element*[m_nNiza];
        for(int i = 0; i < m_nNiza - 1; i++) {
            temp[i] = m_Elementi[i];
        }
        temp[m_nNiza-1] = &element;
        delete[] m_Elementi;
        m_Elementi = temp;
    }
}

double Skladiste::getsum_kolicina(){
    double kolicina=0;
    for (int i = 0; i < m_nNiza; i++)
    {
        kolicina+=m_Elementi[i]->get_kolicina();
    }
    return kolicina;
}

void Skladiste::printall_sifra(){
    for (int i = 0; i < m_nNiza; i++)
    {
        std::cout<<m_Elementi[i]->get_sifraMaterijala();
    }
    
}

std::ostream& operator<<(std::ostream& stream, const Skladiste& s){
    stream<<"Elementi u skladistu:";
    for (int i = 0; i < s.m_nNiza; i++)
    {
     stream<<s.m_Elementi[i];
    }
    
}