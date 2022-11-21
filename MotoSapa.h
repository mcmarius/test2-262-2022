//
// Created by marius on 07.11.2022.
//

#ifndef OOP_MOTOSAPA_H
#define OOP_MOTOSAPA_H


#include "Utilaj.h"

class MotoSapa : public Utilaj {
public:
    std::shared_ptr<Utilaj> clone() const override;
};


#endif //OOP_MOTOSAPA_H
