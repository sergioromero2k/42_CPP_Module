# C++ Module 00 — Introduction to Object-Oriented Programming

This module is the starting point of the C++ journey at 42, focusing on the transition from C to C++ and introducing fundamental concepts like namespaces, classes, member functions, and stdio streams.

---

## General Rules

- **Standard:** All code must follow the **C++98** standard.
- **Compilation:** Use `c++` with flags `-Wall -Wextra -Werror`.
- **Naming:** Classes use `UpperCamelCase`; files are named after the class they contain (e.g., `ClassName.cpp` / `ClassName.hpp`).

### Forbidden
- C functions: `*printf()`, `*alloc()`, and `free()`.
- **STL:** No containers (`vector`, `list`, etc.) or algorithms until Module 08.
- `using namespace` and `friend` keywords (unless specified otherwise).

### Memory
- Avoid all memory leaks; manual allocation requires the `new` keyword.

---

## Exercises Summary & Difficulty

### Ex00 — Megaphone
| | |
|---|---|
| **Objective** | Create a program that converts input strings to uppercase. |
| **Files** | `Makefile`, `megaphone.cpp` |
| **Key Concept** | Basic I/O (`std::cout`) and string manipulation. |
| **Difficulty** | 1/10 |

---

### Ex01 — My Awesome PhoneBook
| | |
|---|---|
| **Objective** | Implement a simple contact management system that stores up to 8 contacts. |
| **Files** | `Makefile`, `*.cpp`, `*.h` / `*.hpp` |
| **Difficulty** | 4/10 |

**Requirements:**
- Must use two classes: `PhoneBook` and `Contact`.
- Commands: `ADD`, `SEARCH`, `EXIT`.
- No dynamic allocation allowed.
- Formatted output (columns of 10 characters, right-aligned, truncated with a dot).

---

### Ex02 — The Job Of Your Dreams *(not mandatory)*
| | |
|---|---|
| **Objective** | Recreate a missing `Account.cpp` file based on a provided header (`Account.hpp`) and log files. |
| **Files** | `Makefile`, `Account.cpp`, `Account.hpp`, `tests.cpp` |
| **Key Concept** | Understanding class structure, static members, and matching log timestamps/output. |
| **Difficulty** | 6/10 |

> This exercise is **not mandatory** to pass the module.

---

## AI Policy

- **Reasoning first:** Apply your own logic before turning to AI tools.
- **No Direct Answers:** Do not ask AI for direct solutions to the exercises.
- **The Goal:** Focus on the learning journey and developing the ability to solve problems, rather than just getting the result.