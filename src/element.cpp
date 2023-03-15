#include "element.h"
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



