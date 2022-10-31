//
// Created by marius on 31.10.2022.
//

#include <iostream>
#include "Utilaj.h"

Utilaj::Utilaj(const std::string &firma, const std::string &culoare) : firma(firma), culoare(culoare) {}

std::ostream &operator<<(std::ostream &os, const Utilaj &utilaj) {
    os << "firma: " << utilaj.firma << " culoare: " << utilaj.culoare;
    return os;
}

const std::string &Utilaj::getFirma() const {
    std::cout << "NU MAI FOLOSI FUNCTIA ASTA!!!\n";
    return firma;
}
