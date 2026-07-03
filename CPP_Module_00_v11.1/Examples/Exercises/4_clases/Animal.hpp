#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    private:
        std::string _nombre;
        int _edad;

    public:
        Animal(std::string nombre, int edad); // Constructor
        ~Animal();  // Destructor
        std::string getNombre() const;
        int getEdad() const;
};

#endif