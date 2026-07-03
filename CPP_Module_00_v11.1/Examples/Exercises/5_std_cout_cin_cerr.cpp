#include <iostream>

int main(void) {
    std::string nombre;
    std::string apellidos;

    // cout - output normal
    std::cout << "Hola mundo" << std::endl;
    
    std::cout << "Escribe tu nombre: ";
    // cin - input del usuario, una palabra, pero deja un \n en el buffer.
    std::cin >> nombre;
    
    // getline lee toda la línea
    std::cin.ignore();
    std::cout << "Introduce tus apellidos: ";
    std::getline(std::cin, apellidos);
    std::cout << "Hola " << nombre << " " << apellidos << std::endl;

    // cerr - output de errores (no se guarda en buffer)
    std::cerr << "Error: Algo salio mal" << std::endl;
}
