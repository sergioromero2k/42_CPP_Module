### std::string
---
En C usabas char * o char[] para strings. En C++ tienes la clase std::string que te facilita muchísimo la vida.

```
// Necesitas incluir
#include <string>

// Crear strings
std::string s1 = "hola";
std::string s2("mundo");
std::string s3;            // string vacío ""

// Operaciones básicas
std::string s = "hola mundo";

// Longitud
s.length();    // 10
s.size();      // igual que length()

// Acceder a un caracter
s[0];          // 'h'
s[4];          // ' '

// Concatenar
std::string a = "hola";
std::string b = " mundo";
std::string c = a + b;    // "hola mundo"
a += " tio";              // "hola tio"

// Comparar
if (s == "hola mundo")    // true
if (s != "adios")         // true

// Está vacío?
s.empty();     // false
```
#### Convertir char* a string y viceversa
```
// char* a string (argv es char**, esto te sirve para el ex00)
char *argumento = argv[1];
std::string s = argumento;   // conversión automática

// string a char*
std::string s = "hola";
const char *ptr = s.c_str();
```

#### Diferencia clave con C
```
// En C:
char s[50];
strcpy(s, "hola");   // necesitas saber el tamaño

// En C++:
std::string s = "hola";   // se gestiona sola, sin tamaño fijo
```