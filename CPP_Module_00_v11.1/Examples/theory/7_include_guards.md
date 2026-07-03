## Include guards

Evita que un header se incluya 2 veces, es decir un **sistema de protección** contra doble inclusión, nada más, la 2da vez que alguien incluya el archivo.
Y ya está. No tiene más misterio, es simplemente el compilador diciendo:

* **primera vez** -> "no lo he visto, lo proceso"
* **segunda vez** -> "ya lo vi, lo ignoro"

* Sin include guards - si 2 archivos incluyen `Animal.hpp`.
* El compilador ve la clase Animal DOS veces -> ERROR.
* La 2da vez que se incluye el archivo, `ANIMAL_HPP` ya está definido, así que el compilador salta todo el contenido.

* **Conveción del nombre:** `NOMBREARCHIVO_HPP` todo en mayúsculas.
