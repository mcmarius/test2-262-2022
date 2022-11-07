//
// Created by marius on 24.10.2022.
//

#include "Tractor.h"
#include <iostream>

Tractor::Tractor(int pow, const std::string &firma) : Utilaj(firma, "mov"), pow(pow) {}

std::ostream &operator<<(std::ostream &os, const Tractor &tractor) {
    os << "pow: " << tractor.pow;
    return os;
}

int Tractor::getPow() const {
    return pow;
}

void Tractor::sapa() {
    poluare += 3;
    std::cout << "tractorul polueaza cand sapa\n";
}

Utilaj *Tractor::clone() const {
    return new Tractor(*this);
}
