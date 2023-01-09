//
// Created by marius on 09.01.2023.
//

#include "MotoRestanta.h"

void MotoRestanta::afis(std::ostream &os) const {
    for (int i = 0; i < rps; i++)
        os << "aoleu viata mea (powered by ciscopapa55)\n";
}

std::shared_ptr<Utilaj> MotoRestanta::clone() const {
    return std::make_shared<MotoRestanta>(*this);
}

void MotoRestanta::sapa() {
    std::cout << "Eu sap restanțele sau restanțele mă sapă pe mine???\n";
}

MotoRestanta::MotoRestanta(int rps) : rps(rps) {}
