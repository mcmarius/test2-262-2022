//
// Created by marius on 31.10.2022.
//

#ifndef OOP_UTILAJ_H
#define OOP_UTILAJ_H


#include <string>
#include <iostream>
#include <memory>

class Utilaj {
    std::string firma = "NoName";
    std::string culoare = "gri";
    std::string tip;

    virtual void afis(std::ostream &os) const;

public:
//    Utilaj* clone_urat();
    Utilaj(const std::string &firma, const std::string &culoare);

    Utilaj() = default;

    //const std::string &getFirma() const;

    friend std::ostream &operator<<(std::ostream &os, const Utilaj &utilaj);

    virtual void sapa() {
        std::cout << "sapa si tu pe acolo de sus in jos\n";
    }

    virtual std::shared_ptr<Utilaj> clone() const = 0;

    virtual ~Utilaj();
};

#endif //OOP_UTILAJ_H
