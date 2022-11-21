//
// Created by marius on 31.10.2022.
//

#ifndef OOP_MACARA_H
#define OOP_MACARA_H


#include "Utilaj.h"

class Macara : public Utilaj {
public:
    std::shared_ptr<Utilaj> clone() const override;

public:
    void sapa() override;
};


#endif //OOP_MACARA_H
