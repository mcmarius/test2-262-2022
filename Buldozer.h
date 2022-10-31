//
// Created by marius on 24.10.2022.
//

#ifndef TEST2_262_2022_BULDOZER_H
#define TEST2_262_2022_BULDOZER_H


#include <string>
#include <ostream>
#include "Utilaj.h"

class Buldozer : public Utilaj {
    int nr_roti;
    double greutate;
    int kg = 0;
public:
    Buldozer(const std::string &firma, const std::string &culoare, int nrRoti, double greutate);

    Buldozer(const Buldozer &other);

    Buldozer &operator=(const Buldozer &other);

    friend std::ostream &operator<<(std::ostream &os, const Buldozer &buldozer);

    void sapa() override;

    ~Buldozer();
};


#endif //TEST2_262_2022_BULDOZER_H
