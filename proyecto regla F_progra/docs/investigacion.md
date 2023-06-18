
# Investigación sobre el Método de la Regla Falsa

## Introducción

El método de la Regla Falsa, también conocido como método de la interpolación lineal, es un algoritmo numérico utilizado para encontrar aproximaciones de las raíces de una función. Este método se basa en el principio de la interpolación lineal para estimar el valor de la raíz dentro de un intervalo dado.

## Desarrollo del Método de la Regla Falsa

El método de la Regla Falsa se basa en el teorema del valor medio y se utiliza para encontrar una solución numérica de una ecuación no lineal de la forma f(x) = 0. El proceso comienza con la selección de un intervalo inicial [a, b] en el cual se espera que se encuentre la raíz de la función.

El método de la Regla Falsa se basa en la idea de que si f(a) y f(b) tienen signos opuestos, entonces la función f(x) debe cruzar el eje x en algún punto dentro del intervalo [a, b]. El método calcula el punto c, conocido como el punto de interpolación, mediante la siguiente fórmula:

c = (a * f(b) - b * f(a)) / (f(b) - f(a))

Después de calcular el punto de interpolación c, se evalúa la función f(c). Si f(c) es igual a cero, se ha encontrado una raíz exacta. En caso contrario, se actualiza el intervalo [a, b] de tal manera que se reduzca el tamaño del intervalo en el cual se espera encontrar la raíz. El nuevo intervalo se selecciona dependiendo del signo de f(c) en comparación con los valores de f(a) y f(b).

El proceso de actualización del intervalo se repite hasta que se alcance una aproximación suficientemente cercana a la raíz o se cumpla un criterio de convergencia predefinido.

## Implementación en C++ del Método de la Regla Falsa

El código proporcionado en C++ implementa el Método de la Regla Falsa para encontrar la raíz de una función dada. El programa utiliza la función `reglaFalsa` para realizar el cálculo de la raíz aproximada.

La función `reglaFalsa` toma tres parámetros: los valores iniciales del intervalo [a, b] y el número máximo de iteraciones permitidas. En cada iteración, se calcula el punto de interpolación c utilizando la fórmula mencionada anteriormente. Luego se actualiza el intervalo [a, b] y se evalúa la función en el punto c.

El programa muestra una tabla en la consola que presenta los resultados de cada iteración, incluyendo los valores de a, b, c, f(a), f(b), f(c) y el error relativo. El error relativo se calcula como el valor absoluto de la diferencia entre el punto c y el punto anterior a dividido por c.

Finalmente, el programa muestra la raíz aproximada calculada utilizando el Método de la Regla Falsa.

## Conclusiones

El Método de la Regla Falsa es una técnica útil para encontrar aproximaciones de las raíces de una función. Su implementación en C++ permite obtener rápid

amente una raíz aproximada mediante un proceso iterativo. Sin embargo, es importante tener en cuenta las limitaciones de este método y considerar otros métodos numéricos más precisos y eficientes dependiendo de las características de la función y los requisitos de precisión.

Con el código proporcionado y una comprensión adecuada del método, es posible utilizar el Método de la Regla Falsa para resolver problemas numéricos y encontrar raíces de funciones en el ámbito de la programación en C++.

**Nota:** Este manual es solo una breve introducción al Método de la Regla Falsa y su implementación en C++. Se recomienda investigar y estudiar más a fondo el método y su aplicación en situaciones específicas antes de utilizarlo en proyectos reales.