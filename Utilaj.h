//
// Created by marius on 31.10.2022.
//

#ifndef OOP_UTILAJ_H
#define OOP_UTILAJ_H


#include <string>
#include <iostream>

class Utilaj {
    std::string firma = "NoName";
    std::string culoare = "gri";
public:
    Utilaj(const std::string &firma, const std::string &culoare);

    Utilaj() = default;

    const std::string &getFirma() const;

    friend std::ostream &operator<<(std::ostream &os, const Utilaj &utilaj);

    virtual void sapa() {
        std::cout << "utilajul sapa\n";
    }
};


#endif //OOP_UTILAJ_H
