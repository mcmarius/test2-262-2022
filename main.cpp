#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Buldozer.h"
#include "Tractor.h"
#include "Muncitor.h"
#include "Macara.h"
#include "MotoSapa.h"
#include "exceptii.h"
#include "Echipament.h"
#include "MotoRestanta.h"

enum culoare {
    rosu, galben, albastru
};

std::ostream &operator<<(std::ostream &os, const culoare &cul) {
    switch (cul) {
        case rosu:
            os << "rosu";
            break;
        case galben:
            os << "galben";
            break;
        case albastru:
            os << "albastru";
            break;
    }
    return os;
}

/// singleton pattern
class aplicatie {
    aplicatie() = default;

public:
    aplicatie(const aplicatie &) = delete;

    aplicatie &operator=(const aplicatie &) = delete;

    static aplicatie &get_app() {
        static aplicatie app;
        return app;
    }
    void start() { std::cout << "merge\n"; }
};

/*
class aplicatie2 {
    static aplicatie2 *app;

    aplicatie2() = default;

public:
    aplicatie2(const aplicatie2 &) = delete;

    aplicatie2 &operator=(const aplicatie2 &) = delete;

    static aplicatie2 *get_app() {
        if (app == nullptr)
            app = new aplicatie2;
        return app;
    }
};

aplicatie2 *aplicatie2::app = nullptr;
*/

//class test1 {
//    ~test1() = default;
//public:
//    ~test1() = delete;
//};


/*
class scoala {
    int nr_elevi = 1;
public:
    scoala() = default;

    scoala(const scoala &) {
        std::cout << "cc scoala\n";
    }

    scoala &operator=(const scoala &) {
        std::cout << "op= scoala\n";
        return *this;
    }

    void f() { ++nr_elevi; }

    friend std::ostream &operator<<(std::ostream &os, const scoala &scoala) {
        os << "nr_elevi: " << scoala.nr_elevi << "\n";
        return os;
    }
};

class tabla0 {
};

class tabla1 {
    void f() {}
};

class tabla2 {
    virtual void f() {}

    virtual void g() {}

    virtual void h() {}

    virtual void h2() {}

    virtual void h3() {}

    virtual ~tabla2() {}
};

class cls1 {
    char t;
    int u;
    double v;
    char w;
    long long x;
};

class cls2 {
    char t;
    char w;
    int u;
    double v;
    long long x;
};

class cls3 {
    double v;
    long long x;
    int u;
    char t;
    char w;
    char w1;
    char w2;
    char w3;
    char w4;
    char w5;
};


class baza {
public:
    virtual void f() { std::cout << "f baza\n"; }
};

class derivata : public baza {
public:
    void f() { std::cout << "f derivata\n"; }
};

void g1(baza &b) {
    b.f();
}

void g2(baza *b) {
    b->f();
}

void h(baza b) {
    b.f();
}
*/

/*void inspecteaza_1(Utilaj u) {
    std::cout << "insp 1\n";
    u.sapa();
}*/

void inspecteaza_2(Utilaj &u) {
    std::cout << "insp 2\n";
    u.sapa();
    std::cout << "adr u: " << &u << "\n";
    auto copie = u.clone();
    auto copie2 = copie;
    copie->sapa();
    copie2->sapa();
//    delete copie2;
    std::cout << "adr copie: " << copie << "\n";
}

//class Chestie {
//public:
//    Chestie(std::string){}
//};
//
//void f(Chestie) {}
//void f(Echipament) {}

int main() {
    auto& app = aplicatie::get_app();
    app.start();
//    using namespace std::string_literals;
    Echipament router1{"Cisco 2911"}, switch1{"Cisco 2960"};
    Echipament e2 = router1;
    std::cout << e2 << "\n";
    e2 = switch1;
    std::cout << e2 << "\n\n\n";
//    f("asd"s);
//    Echipament e3 = "Cisco 666"s;
//    Echipament e4("Cisco 666");
//    Echipament e5{"Cisco 666"};
//    test1 t1;
//    baza b;
//    derivata d;
//    std::cout << "----- g1(b) -----\n";
//    g1(b);
//    std::cout << "----- g2(&b) -----\n";
//    g2(&b);
//    std::cout << "----- h(b) -----\n";
//    h(b);
//    std::cout << "----- g1(d) -----\n";
//    g1(d);
//    std::cout << "----- g2(&d) -----\n";
//    g2(&d);
//    std::cout << "----- h(d) -----\n";
//    h(d);

    Buldozer b1{"cat", "galben", 7, 222.22};

    Muncitor m1{"Dorel", b1.clone()};
    try {
        Tractor tr1{55, "bmw"};
//    auto* tr2 = tr1.clone();
//    delete tr2;
        m1.lucreaza(b1);
        m1.lucreaza(b1);
        m1.lucreaza(b1);
        m1.sarbatori(b1);
        m1.lucreaza(tr1);
        MotoRestanta mtr{0};
        m1.lucreaza(mtr);
    } catch (eroare_impiedicat &err) {
        std::cout << "iti prescriem atentie!!!\n" << err.what();
    } catch (eroare_santier &err) {
        std::cout << err.what() << "\n";
    }
//    Utilaj u1;
    Macara mac1;
    m1.lucreaza(mac1);
    MotoSapa ms;
    m1.lucreaza(ms);
//    inspecteaza_1(mac1);
    inspecteaza_2(mac1);
    std::cout << "end main\n";
    Muncitor m2{"Gigel", mac1.clone()};
    m2 = m1;
    return 0;
//}


//int main() {

    // std::cout << "sizeof(cls1): " << sizeof(cls1) << "\n";
    // std::cout << "sizeof(cls2): " << sizeof(cls2) << "\n";
    // std::cout << "sizeof(cls3): " << sizeof(cls3) << "\n";
//    tabla0 a, b;
//    if (&a == &b)
//        std::cout << "impossible: report error to compiler supplier";
//    scoala s1, s2;
//    std::cout << s1 << s2;
//    (s1 = s2).f();
//    std::cout << s1 << s2;
    // std::cout << "sizeof(tabla0): " << sizeof(tabla0) << "\n";
    // std::cout << "sizeof(tabla1): " << sizeof(tabla1) << "\n";
    // std::cout << "sizeof(tabla2): " << sizeof(tabla2) << "\n";
    // return 0;

    /*
    sf::RenderWindow window;
    window.create(sf::VideoMode({800, 700}), "My Window", sf::Style::Default);
    window.setVerticalSyncEnabled(true);
    //window.setFramerateLimit(60);

    while (window.isOpen()) {
        sf::Event e;
        while (window.pollEvent(e)) {
            switch (e.type) {
            case sf::Event::Closed:
                window.close();
                break;
            case sf::Event::Resized:
                std::cout << "New width: " << window.getSize().x << '\n'
                          << "New height: " << window.getSize().y << '\n';
                break;
            case sf::Event::KeyPressed:
                std::cout << "Received key " << (e.key.code == sf::Keyboard::X ? "X" : "(other)") << "\n";
                break;
            default:
                break;
            }
        }
        // using namespace std::chrono_literals;
        // std::this_thread::sleep_for(8000ms);

        window.clear();
        window.display();
    }

    return 0;
    */
}
