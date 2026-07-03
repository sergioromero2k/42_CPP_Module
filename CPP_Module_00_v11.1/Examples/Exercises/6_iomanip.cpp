#include <iomanip>
#include <iostream>

int main(void) {
    // setw(10) - ancho de 10 caracteres
    // right - alineado a la derecha
    std::cout << std::setw(10) << std::right << "hola" << "|" << std::endl;
    std::cout << std::setw(10) << std::right << "Juan" << "|" << std::endl;
    std::cout << std::setw(20) << std::right << 42 << "|" << std::endl;
    std::cout << std::setw(10) << "hola " << "mundo" << std::endl;
    std::cout << std::setw(10) << "hola" << std::setw(10) << "mundo" << std::endl;
}
