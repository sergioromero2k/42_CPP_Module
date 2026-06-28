### argc / argv
---
Cuando ejecutas un programa desde la terminal, puedes pasarle información. Esa información llega al main a través de dos parámetros:

```
int main(int argc, char **argv)
```
* **argc (argument count)** — número de argumentos, siempre es mínimo 1 porque el propio nombre del programa cuenta.
* **argv (argument vector)** — array de strings con los argumentos. argv[0] es siempre el nombre del programa.