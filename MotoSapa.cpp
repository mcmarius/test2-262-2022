//
// Created by marius on 07.11.2022.
//

#include "MotoSapa.h"

Utilaj *MotoSapa::clone() {
    return new MotoSapa(*this);
}
