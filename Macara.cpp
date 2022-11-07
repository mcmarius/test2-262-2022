//
// Created by marius on 31.10.2022.
//

#include "Macara.h"

void Macara::sapa() {
    std::cout << "sapa mai cu spor\n";
}

Utilaj *Macara::clone() const {
    return new Macara(*this);
}
