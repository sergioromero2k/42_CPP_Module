## Arrays estáticos dentro de clases
---
Un array estático es un array de tamaño fijo que defines en la clase.
Sin `new`, sin punteros dinámicos - tamaño fijo desde el principio.

### Array normal vs array en clase
```c++
int numeros[5] = {1,2,3,4,5};

class Caja {
private:
    int _numeros[5];
};

```