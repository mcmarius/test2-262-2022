//
// Created by marius on 31.10.2022.
//

#include <iostream>
#include "Utilaj.h"
#include "Macara.h"
#include "Tractor.h"

Utilaj::Utilaj(const std::string &firma, const std::string &culoare) : firma(firma), culoare(culoare) {}

std::ostream &operator<<(std::ostream &os, const Utilaj &utilaj) {
    os << "firma: " << utilaj.firma << " culoare: " << utilaj.culoare;
    utilaj.afis(os);
    return os;
}

/*const std::string &Utilaj::getFirma() const {
    std::cout << "NU MAI FOLOSI FUNCTIA ASTA!!!\n";
    return firma;
}*/

//Utilaj *Utilaj::clone_urat() {
//    {
//        if(tip == "macara")
//            return new Macara(???);
//        else if(tip == "tractor")
//            return new Tractor(??);
//    }
//}

Utilaj::~Utilaj() { std::cout << "destr utilaj\n"; }

void Utilaj::afis([[maybe_unused]] std::ostream &os) const {

}
