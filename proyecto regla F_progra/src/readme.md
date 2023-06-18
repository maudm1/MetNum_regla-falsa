## Regla Falsa

Este es un programa en C++ que implementa el método de la Regla Falsa para encontrar aproximaciones de las raíces de una función dada. El método de la Regla Falsa es una técnica numérica utilizada para encontrar soluciones a ecuaciones no lineales.

### Descripción del Programa

El programa utiliza la función `reglaFalsa()` para aplicar el método de la Regla Falsa. Toma como entrada los valores iniciales `a` y `b`, que definen el intervalo en el cual se buscará la raíz, y el número de iteraciones deseado. La función `funcion()` representa la función para la cual se desea encontrar la raíz. 

Durante la ejecución del programa, se mostrará una tabla que contiene información sobre cada iteración del método de la Regla Falsa. Esto incluye los valores de `a`, `b`, `c`, el valor de la función en cada punto, y el error relativo. El programa continuará iterando hasta alcanzar el número de iteraciones especificado o hasta que se encuentre una aproximación suficientemente cercana a la raíz.

### Uso del Programa

Para utilizar el programa, sigue estos pasos:

1. Asegúrate de tener un entorno de desarrollo de C++ instalado en tu computadora.
2. Abre el archivo del programa en tu editor de código preferido (por ejemplo, Visual Studio Code).
3. Modifica la función `funcion()` para que represente la función para la cual deseas encontrar la raíz.
4. Compila y ejecuta el programa.
5. Se te solicitará ingresar los valores de `a`, `b` y el número de iteraciones.
6. Después de proporcionar los valores requeridos, el programa calculará y mostrará la aproximación de la raíz.

### Requisitos del Sistema

- Compilador de C++ compatible
- Biblioteca estándar de C++

### Contribuciones

¡Las contribuciones son bienvenidas! Si deseas mejorar el programa, hacer correcciones o agregar nuevas características, puedes hacerlo a través de solicitudes de extracción (pull requests) en el repositorio correspondiente.

### Notas Finales

Este programa proporciona una implementación básica del método de la Regla Falsa en C++. Puede ser utilizado como punto de partida para desarrollar algoritmos más avanzados o como referencia para aprender sobre métodos numéricos.
