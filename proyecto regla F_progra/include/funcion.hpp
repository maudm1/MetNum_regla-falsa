#ifndef FUNCION_HPP
#define FUNCION_HPP

#include <iostream>
#include <cmath>
#include <iomanip>

class Funcion {
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
            double error_relativo = fabs((c - a) / c);
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

#endif // FUNCION_HPP