#include <iostream>

int main(int argc, char **argv) {
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            std::cout << i << " arguments: " << argv[i] << std::endl;
        }
    } else {
        std::cout << "Poner un argumento chaval..." << std::endl;
    }
    return 0;
}

// c++ -Wall -Wextra -Werror -std=c++98 ex_argv.cpp