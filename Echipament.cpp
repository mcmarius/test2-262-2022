//
// Created by marius on 28.11.2022.
//

#include "Echipament.h"

#include <string>

Echipament::Echipament(const std::string &model_) : id(id_max++), model(model_) {}

int Echipament::id_max = 1;

std::ostream &operator<<(std::ostream &os, const Echipament &echipament) {
    os << "id: " << echipament.id << " model: " << echipament.model;
    return os;
}

