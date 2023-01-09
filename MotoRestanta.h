//
// Created by marius on 09.01.2023.
//

#ifndef OOP_MOTORESTANTA_H
#define OOP_MOTORESTANTA_H


#include "Utilaj.h"

class MotoRestanta : public Utilaj {
    int rps; /// restanțe pe sesiune
    void afis(std::ostream &os) const override;

public:
    explicit MotoRestanta(int rps);

public:
    void sapa() override;

public:
    std::shared_ptr<Utilaj> clone() const override;
};


#endif //OOP_MOTORESTANTA_H
