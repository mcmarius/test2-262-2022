//
// Created by marius on 24.10.2022.
//

#ifndef OOP_TRACTOR_H
#define OOP_TRACTOR_H

#include <iosfwd>
#include <string>
#include "Utilaj.h"

class Tractor : public Utilaj {
    int pow;
    int poluare = 2;
public:
    Tractor(int pow, const std::string &firma);

    friend std::ostream &operator<<(std::ostream &os, const Tractor &tractor);

    int getPow() const;

    void sapa() override;

};


#endif //OOP_TRACTOR_H
