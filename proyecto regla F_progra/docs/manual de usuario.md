# Manual de Usuario - Programa de Regla Falsa

Este es un programa que utiliza el método de la Regla Falsa para encontrar una aproximación de la raíz de una función dada. Sigue las instrucciones a continuación para utilizar el programa correctamente.

## Requisitos del Sistema

- El programa está escrito en C++ y requiere un compilador de C++ para ser ejecutado.
- Se recomienda tener instalado un entorno de desarrollo integrado (IDE) como Visual Studio Code o Code::Blocks para facilitar la compilación y ejecución del programa.

## Instrucciones de Uso

1. Abre el archivo fuente del programa en tu entorno de desarrollo integrado (IDE) de preferencia.
2. Compila el programa utilizando el compilador de C++. Asegúrate de que no haya errores de compilación.
3. Ejecuta el programa compilado para iniciar la aplicación.
4. El programa solicitará ingresar los siguientes valores:

   - **Valor de a**: Ingresa el valor inicial del intervalo [a, b] donde se buscará la raíz.
   - **Valor de b**: Ingresa el valor final del intervalo [a, b] donde se buscará la raíz.
   - **Número de iteraciones**: Ingresa la cantidad de iteraciones que deseas realizar para encontrar la raíz.

5. Una vez ingresados los valores, el programa realizará las iteraciones necesarias utilizando el método de la Regla Falsa y mostrará los resultados en cada iteración.
6. Al finalizar, el programa mostrará la raíz aproximada encontrada.
7. Cierra el programa para finalizar la ejecución.

## Consideraciones Importantes

- Asegúrate de ingresar correctamente los valores de a, b y el número de iteraciones. Valores inadecuados pueden conducir a resultados incorrectos o a una ejecución prolongada del programa.
- El programa utiliza la función `funcion(x)` para calcular el valor de la función en un punto dado. Asegúrate de definir correctamente esta función en el código según la función que desees encontrar la raíz.
- Los resultados de cada iteración se mostrarán en la salida estándar (consola). Verifica que la consola esté visible para ver los resultados.
- La precisión de los resultados mostrados se configura utilizando la librería `iomanip` y la función `setprecision`. Puedes ajustar la precisión modificando el valor de `setprecision(8)` según tus necesidades.

## Conclusión

Este programa te permite encontrar una aproximación de la raíz de una función utilizando el método de la Regla Falsa. Siguiendo las instrucciones de uso y teniendo en cuenta las consideraciones importantes, podrás utilizar el programa de manera efectiva. ¡Disfruta explorando y experimentando con diferentes funciones y valores de entrada!