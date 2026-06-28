#include <iostream>

namespace Perro {
    std::string name = "Firulais";
    void ladrar(void) {
        std::cout << "Guaauuu" << std::endl;
    }
}

namespace Gato {
    std::string name = "Michi";
    void Maullar(void) {
        std::cout << "Miauuuu" << std::endl;
    }
}

int main(void) {
    std::cout << Perro::name << std::endl;
    Perro::ladrar();
    Gato::Maullar();
}
