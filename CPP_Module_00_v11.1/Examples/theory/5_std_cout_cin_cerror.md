**cout** → salida normal, va a la pantalla
**cerr** → salida de errores, va a la pantalla pero es un canal distinto
**getline** → ``cin >>`` solo lee hasta el primer espacio. Para leer una línea entera usas ``getline``.

#### Ojo con mezclar `cin >>` y `getline`
**cin** - Lee el número pero deja un \n en el buffer, debes limpiar ese \n
**cin.ignore()** - Con esto limpias ese \n.
**std::getline(std::cin, variable)** - Ahora si funcionara correctamente.