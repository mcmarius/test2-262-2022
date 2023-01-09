//
// Created by marius on 09.01.2023.
//

#ifndef OOP_FACULTATE_H
#define OOP_FACULTATE_H


#include <string>
#include <iostream>

template<class T, class U>
class Facultate {
    T nr_gropi_curte;
    U nume;
public:
    Facultate(T nrGropiCurte, const U &nume);

    void f();
};

#include "Facultate.cpp"

#endif //OOP_FACULTATE_H
