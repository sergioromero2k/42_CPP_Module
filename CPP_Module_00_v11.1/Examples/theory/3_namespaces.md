### Namespaces
---
**Un namespace es como una caja con nombre** donde metes código para evitar que choque con código de otras partes. El ejemplo más claro es **std** — todo lo de la librería estándar está dentro de esa caja.

#### El problema que resuelven
```
// Imagina dos librerías que tienen una función con el mismo nombre
void saludar() { std::cout << "Hola desde libreria 1" << std::endl; }
void saludar() { std::cout << "Hola desde libreria 2" << std::endl; }

// El compilador no sabe cual usar -> ERROR

// Con namespaces:
namespace Libreria1 {
    void saludar() { std::cout << "Hola desde libreria 1" << std::endl; }
}

namespace Libreria2 {
    void saludar() { std::cout << "Hola desde libreria 2" << std::endl; }
}

// Ahora no hay conflicto
Libreria1::saludar();   // "Hola desde libreria 1"
Libreria2::saludar();   // "Hola desde libreria 2"
```
