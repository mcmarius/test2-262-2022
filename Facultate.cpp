//
// Created by marius on 09.01.2023.
//
template<class T, class U>
void Facultate<T, U>::f() {
    std::cout << "asd\n";
}

template<class T, class U>
Facultate<T, U>::Facultate(T nrGropiCurte, const U &nume_) : nr_gropi_curte(nrGropiCurte), nume(nume_) {
}
