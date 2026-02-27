# C++ Módulo 00 — Introducción a la Programación Orientada a Objetos

Este módulo es el punto de partida del camino de C++ en 42, centrado en la transición de C a C++ e introduciendo conceptos fundamentales como namespaces, clases, funciones miembro y flujos de stdio.

---

## Normas Generales

- **Estándar:** Todo el código debe seguir el estándar **C++98**.
- **Compilación:** Usar `c++` con los flags `-Wall -Wextra -Werror`.
- **Nomenclatura:** Las clases usan `UpperCamelCase`; los archivos llevan el nombre de la clase que contienen (ej. `ClassName.cpp` / `ClassName.hpp`).

### Prohibido
- Funciones de C: `*printf()`, `*alloc()` y `free()`.
- **STL:** No se permiten contenedores (`vector`, `list`, etc.) ni algoritmos hasta el Módulo 08.
- Las palabras clave `using namespace` y `friend` (salvo que se indique lo contrario).

### Memoria
- Evitar todas las fugas de memoria; la asignación manual requiere el uso de `new`.

---

## Resumen de Ejercicios y Dificultad

### Ex00 — Megaphone
| | |
|---|---|
| **Objetivo** | Crear un programa que convierta cadenas de texto a mayúsculas. |
| **Archivos** | `Makefile`, `megaphone.cpp` |
| **Concepto clave** | E/S básica (`std::cout`) y manipulación de cadenas. |
| **Dificultad** | 1/10 |

---

### Ex01 — My Awesome PhoneBook
| | |
|---|---|
| **Objetivo** | Implementar un sistema de gestión de contactos que almacene hasta 8 contactos. |
| **Archivos** | `Makefile`, `*.cpp`, `*.h` / `*.hpp` |
| **Dificultad** | 4/10 |

**Requisitos:**
- Debe usar dos clases: `PhoneBook` y `Contact`.
- Comandos: `ADD`, `SEARCH`, `EXIT`.
- No se permite asignación dinámica.
- Salida formateada (columnas de 10 caracteres, alineadas a la derecha, truncadas con un punto).

---

### Ex02 — The Job Of Your Dreams *(no obligatorio)*
| | |
|---|---|
| **Objetivo** | Recrear el archivo `Account.cpp` a partir de la cabecera proporcionada (`Account.hpp`) y los archivos de log. |
| **Archivos** | `Makefile`, `Account.cpp`, `Account.hpp`, `tests.cpp` |
| **Concepto clave** | Comprensión de la estructura de clases, miembros estáticos y coincidencia de timestamps/salida en los logs. |
| **Dificultad** | 6/10 |

> Este ejercicio **no es obligatorio** para superar el módulo.

---

## Política de IA

- **Razona primero:** Aplica tu propia lógica antes de recurrir a herramientas de IA.
- **Sin respuestas directas:** No pidas a la IA soluciones directas a los ejercicios.
- **El objetivo:** Centrarse en el proceso de aprendizaje y desarrollar la capacidad de resolver problemas, no solo en obtener el resultado.