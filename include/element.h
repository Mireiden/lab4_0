#ifndef ELEMENT_H
#define ELEMENT_H

class Element{
    protected:
    int p_sifra;
    int p_sifraMaterijala;
    float p_kolicina;
    public:
    Element();
    Element(int sifra, int sifraMaterijala, float kolicina);
    int get_sifraMaterijala() const ;
    float get_kolicina() const ;
    virtual void print_element()=0;
    bool operator==(const Element& e);//uporedjivanje po sifri
    Element& operator=(const Element& e);
};

#endif