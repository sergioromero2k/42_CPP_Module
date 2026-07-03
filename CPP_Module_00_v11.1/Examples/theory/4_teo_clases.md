### Clases
---
Es un molde para crear objetos.
Define qué datos tiene y qué se puede hacer.

*En C++ las clases se representan en 2 archivos*

#### Atributos y métodos — public vs private
* **private** - Solo accesible desde DENTRO de la clase.
* **public** - Solo accesible desde FUERA de la clase.

#### Constructores y destructores
**Constructor** - Se llama AUTOMATICAMENTE al crear el objeto.
**Destructor** - Se llama AUTOMATICAMENTE al destruir el objeto.

* El constructor tiene el mismo nombre que la clase.
* El destructor tiene ~ delante.
* Ninguno tiene tipo de retorno.
* S e llama **solos**, tú no los llamas manualmente.

#### Initialization lists
En vez de asignar dentro del cosntructor, inicializas directamente.
```c++
// SIN initialization list:
Coche::Coche(std::string marca) {
    _marca = marca; // Primero crea _marca vacío, luego asigna.
}

// CON initialization list:
Coche::Coche(std::string marca): _marca(marca) {


// Con varios atributos:
class Coche {

private:
    std::string _marca;
    int _velocidad;
    int _anio;

public:
    Coche(std::string marca, int velocidad, int anio)
        : _marca(marca), _velocidad(velocidad), _anio(anio){
            // cuerpo vacçio o con lógica extra
        }
};
}
```
#### static
* Un atributo static pertenece a la clase entera, no a cada objeto.
* Se comparte entre todas las instancias.

### const
Le dices al compilador que ese método no va a tocar nada del objeto.
Si intentas modificar dentro de un método `const`: ERROR - prometiste que no modificabas.
`void saludar(const std::string nombre) {}`

Sin `const` - podrías modificar el string dentro.
`void saludar(std::string nombre) {}`

Con const y referencia - lo más eficiente, no lo copias y no lo modificas
`void saludar(const std::string &nombre) {}`

