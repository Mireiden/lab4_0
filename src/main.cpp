#include <iostream>
#include <fstream>
#include "skladiste.h"
#include "element.h"
#include "silos.h"
#include "paket.h"


int main(){

    std::ifstream inFile("../data/unos.txt");
    Skladiste* skladiste= new Skladiste;

    while (!inFile.eof())
    {
        skladiste->add_element();
    }
    

    return 0;
}