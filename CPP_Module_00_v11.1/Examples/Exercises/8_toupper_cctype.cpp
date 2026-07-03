#include <cctype>
#include <iostream>
#include <string>

int main(void) {
    std::string s = "hola Mundo 123";
    for (size_t i=0; i< s.length(); i++) {
        std::cout << (char)toupper(s[i]);
    }

    for(size_t i = 0; i < s.length(); i++) {
        if(std::isalpha(s[i]))
            std::cout << s[i] << " es letra" << std::endl;
        if(std::isdigit(s[i]))
            std::cout << s[i] << " es numero" << std::endl;
    }
}