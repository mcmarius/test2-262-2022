//
// Created by marius on 24.10.2022.
//

#include "Tractor.h"
#include "exceptii.h"
#include <iostream>
#include "Echipament.h"

Tractor::Tractor(int pow, const std::string &firma) : Utilaj(firma, "mov"), pow(pow) {
    if (pow < 2000)
        throw eroare_sarak("vai de noi; avem pow doar " + std::to_string(pow));
}


/*int Tractor::getPow() const {
    return pow;
}*/

void Tractor::sapa() {
    poluare += 3;
    if (poluare > 13)
        throw eroare_sapa("s-a blocat");
    std::cout << "tractorul polueaza cand sapa\n";
}

std::shared_ptr<Utilaj> Tractor::clone() const {
    return std::make_shared<Tractor>(*this);
}

void Tractor::afis(std::ostream &os) const {
    const auto &tractor = *this;
    os << "pow: " << tractor.pow;
}

//std::ostream &operator<<(std::ostream &os, const Tractor &tractor) {
//    os << static_cast<const Utilaj &>(tractor) ;//<< " pow: " << tractor.pow << " poluare: " << tractor.poluare;
//    return os;
//}
