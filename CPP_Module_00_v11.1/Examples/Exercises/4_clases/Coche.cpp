// Coche.cpp
#include "Coche.hpp"

int Coche::_totalCoches = 0;

Coche::Coche(std::string marca): _marca(marca) {
    _totalCoches++;
}

Coche::~Coche() {
    _totalCoches--;
}

int Coche::getTotalCoches() {
    return _totalCoches;
}