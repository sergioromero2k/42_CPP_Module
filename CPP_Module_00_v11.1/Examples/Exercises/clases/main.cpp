#include "Animal.hpp"

int main(void) {
    Animal perro("Rex", 3);
    Animal gato("Misu", 5);

    std::cout << perro.getNombre() << std::endl;
    std::cout << gato.getEdad() << std::endl;

    return 0;
}
