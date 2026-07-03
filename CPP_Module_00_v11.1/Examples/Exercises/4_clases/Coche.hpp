#ifndef COCHE_HPP
#define COCHE_HPP

#include <string>

class Coche {
private:
    std::string _marca;
    static int _totalCoches;    // compartido entre TODOS los coches

public:
    Coche(std::string marca);
    ~Coche();
    static int getTotalCoches();    // método static

};

#endif