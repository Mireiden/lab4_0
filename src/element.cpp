#include "element.h"
Element::Element():p_sifra(0),p_kolicina(0),p_sifraMaterijala(0){}//default konstruktor mi je sranje al dobro
Element::Element(int sifra, int sifraMaterijala, float kolicina)
        :p_sifra(sifra),p_sifraMaterijala(sifraMaterijala),p_kolicina(kolicina){}


int Element::get_sifraMaterijala()const {
    return p_sifraMaterijala;
}

float Element::get_kolicina() const { 
    return p_kolicina;
}

bool Element::operator==(const Element& e){
    if (p_sifra==e.p_sifra)
        return true;
    else
        return false;
}

Element &Element::operator=(const Element &e)
{
    p_kolicina=e.p_kolicina;
    p_sifra=e.p_sifra;
    p_sifraMaterijala=e.p_sifraMaterijala;
}
