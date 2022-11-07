//
// Created by marius on 31.10.2022.
//

#ifndef OOP_MACARA_H
#define OOP_MACARA_H


#include "Utilaj.h"

class Macara : public Utilaj {
public:
    Utilaj *clone() override;

public:
    void sapa() override;
};


#endif //OOP_MACARA_H
