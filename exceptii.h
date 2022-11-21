//
// Created by marius on 21.11.2022.
//

#ifndef OOP_EXCEPTII_H
#define OOP_EXCEPTII_H

#include <stdexcept>

class eroare_santier : public std::runtime_error {
    using std::runtime_error::runtime_error;
};

class eroare_sapa : public eroare_santier {
    using eroare_santier::eroare_santier;
};

class eroare_impiedicat : public eroare_santier {
    using eroare_santier::eroare_santier;
};

class eroare_sarak : public eroare_santier {
    using eroare_santier::eroare_santier;
};

#endif //OOP_EXCEPTII_H
