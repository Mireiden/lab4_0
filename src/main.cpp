#include <iostream>
#include <fstream>
#include "skladiste.h"
#include "element.h"
#include "silos.h"
#include "paket.h"

// //potrebno srediti add za uslov za kolicinu,
// getsum mi ne racuna lepo,
// i ostatak maina
int main(){

    std::ifstream inFile("../data/unos.txt");
    Skladiste* skladiste= new Skladiste;

    if (!inFile.good()){
        std::cerr<<"Nije moguce pristupiti fajlu.";
    }
    while (!inFile.eof())
    {
    std::string tip;
    inFile>>tip;
        Silos* temp=new Silos;
    if (tip[0]=='s')
    {
        inFile>>*temp;
        skladiste->add_element(temp);
    }
    else if (tip[0]=='p')
    {
        Paket* temp=new Paket;
        inFile>>*temp;
        skladiste->add_element(temp);
    }
    else 
        std::cerr<<"Nepoznati tip elementa";
    }


    skladiste->printall_sifra();
    std::cout<<skladiste->getsum_kolicina();
    inFile.close();

    return 0;
}