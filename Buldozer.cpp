//
// Created by marius on 24.10.2022.
//

#include <iostream>
#include "Buldozer.h"

Buldozer::Buldozer(const Buldozer &other) : Utilaj(other), nr_roti(other.nr_roti), greutate(other.greutate) {
    std::cout << "cc buldozer\n";

}

Buldozer &Buldozer::operator=(const Buldozer &other) {
    Utilaj::operator=(other);
    std::cout << "op= buldozer\n";
    nr_roti = other.nr_roti;
    greutate = other.greutate;
    return *this;
}

Buldozer::~Buldozer() {
    std::cout << "destr buldozer\n";
}


Buldozer::Buldozer(const std::string &firma, const std::string &culoare, int nrRoti, double greutate) : Utilaj(firma,
                                                                                                               culoare),
                                                                                                        nr_roti(nrRoti),
                                                                                                        greutate(
                                                                                                                greutate) {}

std::ostream &operator<<(std::ostream &os, const Buldozer &buldozer) {
    os << static_cast<const Utilaj &>(buldozer) << " nr_roti: " << buldozer.nr_roti << " greutate: "
       << buldozer.greutate;
    return os;
}

void Buldozer::sapa() {
    kg += 5;
    std::cout << "buldozerul sapa\n";
}
