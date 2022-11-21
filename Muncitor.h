//
// Created by marius on 31.10.2022.
//

#ifndef OOP_MUNCITOR_H
#define OOP_MUNCITOR_H


#include <vector>
#include <utility>
#include <memory>
#include "Utilaj.h"

class Muncitor {
    int xp = 1;
    std::string nume;
    std::vector<std::shared_ptr<Utilaj>> cadoiase;
public:
    Muncitor(const std::string &nume_, const std::shared_ptr<Utilaj> &u) : nume(nume_), cadoiase({u->clone()}) {}

    void sarbatori(const Utilaj &u) {
        cadoiase.push_back(u.clone());
    }

    void lucreaza(Utilaj &);

    ~Muncitor() {
//        for (auto &cadou: cadoiase)
//            delete cadou;
    }

    Muncitor(const Muncitor &other) : xp(other.xp) {
        for (const auto &cadou: other.cadoiase)
            cadoiase.push_back(cadou->clone());
    }

    Muncitor &operator=(Muncitor other) {
//        std::swap(*this, other);
//        std::exchange(*this, other);
        swap(*this, other);
        return *this;
    }

    friend void swap(Muncitor &m1, Muncitor &m2) {
        using std::swap;
        swap(m1.xp, m2.xp);
        swap(m1.cadoiase, m2.cadoiase);
    }
};


#endif //OOP_MUNCITOR_H
