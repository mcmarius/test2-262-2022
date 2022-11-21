//
// Created by marius on 31.10.2022.
//

#include "Muncitor.h"
#include "exceptii.h"

void Muncitor::lucreaza(Utilaj &u) {
    u.sapa();
    xp++;
    if (xp % 4 == 0)
        throw eroare_impiedicat("cine-a pus bordura-n drum");
}
