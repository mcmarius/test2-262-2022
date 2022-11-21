//
// Created by marius on 31.10.2022.
//

#include "Macara.h"

void Macara::sapa() {
    std::cout << "sapa mai cu spor\n";
}

std::shared_ptr<Utilaj> Macara::clone() const {
    return std::make_shared<Macara>(*this);
}
