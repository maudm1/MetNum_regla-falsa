#ifndef SETPRECISION_HPP
#define SETPRECISION_HPP

#include <iostream>
#include <cmath>
#include <iomanip>

class SetPrecisionCalculator {
public:
    double funcion(double x) {
        // Aquí debes definir la función para la cual deseas encontrar la raíz
        return pow(x, 2) - cos(x); // Ejemplo: f(x) = x^3 - 11
    }

    double reglaFalsa(double a, double b, int num_iteraciones) {
        double c;
        int iteraciones = 0;

        std::cout << "No. Iteracion\tValor de a\tf(a)\t\tValor de b\tf(b)\t\tValor de c\tf(c)\t\tError Relativo" << std::endl;
        std::cout << "-----------------------------------------------------------------------------------------------------------------------" << std::endl;

        while (iteraciones < num_iteraciones) {
            c = (a * funcion(b) - b * funcion(a)) / (funcion(b) - funcion(a));
            iteraciones++;
            double error_relativo = std::fabs((c - a) / c);
            if (funcion(c) == 0.0)
                break;
            else if (funcion(c) * funcion(a) < 0)
                b = c;
            else
                a = c;

            std::cout << std::setw(13) << iteraciones << "\t" << std::setw(12) << std::fixed << std::setprecision(3) << a
                      << "\t" << std::setw(12) << std::fixed << std::setprecision(8) << funcion(a)
                      << "\t" << std::setw(12) << std::fixed << std::setprecision(8) << b
                      << "\t" << std::setw(12) << std::fixed << std::setprecision(8) << funcion(b)
                      << "\t" << std::setw(12) << std::fixed << std::setprecision(8) << c
                      << "\t" << std::setw(12) << std::fixed << std::setprecision(8) << funcion(c)
                      << "\t" << std::setw(12) << std::fixed << std::setprecision(8) << error_relativo << std::endl;
        }

        std::cout << "-----------------------------------------------------------------------------------------------------------------------" << std::endl;

        return c;
    }
};

#endif  // SETPRECISION_HPP


/*El código anterior representa un archivo de encabezado (header file) llamado "setprecision.hpp" que contiene la declaración de una clase "SetPrecisionCalculator".

El archivo de encabezado también incluye las bibliotecas necesarias como "iostream", "cmath" e "iomanip" para admitir la funcionalidad requerida en el código.

Para utilizar esta clase en tu programa principal, debes incluir el archivo de encabezado en el archivo fuente correspondiente utilizando la directiva "#include":

#include "setprecision.hpp"

Después de incluir el archivo de encabezado, puedes crear una instancia de la clase SetPrecisionCalculator y llamar a la función "reglaFalsa" 
con los parámetros necesarios para ejecutar el método de regla falsa y obtener la raíz aproximada.

Recuerda compilar tu programa asegurándote de que todos los archivos fuente y los archivos de encabezado estén presentes en el mismo directorio 
y que los enlaces necesarios estén configurados correctamente. */