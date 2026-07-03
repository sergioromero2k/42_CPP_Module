#include "Animal.hpp"

Animal::Animal(std::string nombre, int edad) {
    _nombre = nombre;
    _edad = edad;
}

Animal::~Animal() {
    std::cout << "Animal Destruido" << std::endl;
}

std::string Animal::getNombre() const {
    return _nombre;
}

int Animal::getEdad() const {
    return _edad;
}


