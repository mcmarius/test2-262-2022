//
// Created by marius on 31.10.2022.
//

#ifndef OOP_MUNCITOR_H
#define OOP_MUNCITOR_H


#include "Utilaj.h"

class Muncitor {
    int xp = 1;
    std::string nume;
    Utilaj *cadou;
public:
    Muncitor(const std::string& nume_, Utilaj *u) : nume(nume_), cadou(u->clone()) {}

    void lucreaza(Utilaj &);

    ~Muncitor() {
        delete cadou;
    }

    Muncitor(const Muncitor &other) : xp(other.xp), cadou(other.cadou->clone()) {}

    Muncitor &operator=(Muncitor other) {
        swap(*this, other);
        return *this;
    }

    friend void swap(Muncitor &m1, Muncitor &m2) {
        using std::swap;
        swap(m1.xp, m2.xp);
        swap(m1.cadou, m2.cadou);
    }
};


#endif //OOP_MUNCITOR_H
