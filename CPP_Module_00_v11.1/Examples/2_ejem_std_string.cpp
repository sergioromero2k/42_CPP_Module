#include <string>
#include <iostream>

int main(void) {
    std::string name = "Sergio";
    std::string apellido = "Romero";
    std::string saludo = "Hola";

    std::cout << saludo << " " << name << " " << apellido << std::endl;
    if (name == "Sergio") {
        std::cout << "Hellowww" << std::endl;
    }
    std::cout << name.find("e") << std::endl;
}