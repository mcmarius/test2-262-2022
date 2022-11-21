//
// Created by marius on 07.11.2022.
//

#include "MotoSapa.h"

std::shared_ptr<Utilaj> MotoSapa::clone() const {
    return std::make_shared<MotoSapa>(*this);
}
