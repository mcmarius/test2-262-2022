//
// Created by marius on 24.10.2022.
//

#ifndef OOP_ECHIPAMENT_H
#define OOP_ECHIPAMENT_H

#include <string>
#include <ostream>

class Echipament {
    const int id;
    static int id_max;
    std::string model;
public:
    explicit Echipament(const std::string &model_);

    bool sariti() { return false; }

    friend std::ostream &operator<<(std::ostream &os, const Echipament &echipament);

//    Echipament(const Echipament&) = default;
    Echipament(const Echipament &other) : id(id_max++), model(other.model) {}

    Echipament &operator=(const Echipament &other) {
        model = other.model;
        return *this;
    }
};

#endif //OOP_ECHIPAMENT_H
