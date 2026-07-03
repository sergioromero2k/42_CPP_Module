#include "Animal.hpp"
#include "Coche.hpp"

int main(void) {
    Animal perro("Rex", 3);
    Animal gato("Misu", 5);

    std::cout << perro.getNombre() << std::endl;
    std::cout << gato.getEdad() << std::endl;

    std::cout << Coche::getTotalCoches() << std::endl;

    Coche c1("Toyota");
    Coche c2("Honda");
    std::cout << Coche::getTotalCoches() << std::endl;

    return 0;
}
