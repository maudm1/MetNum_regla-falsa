#include <iostream>
#include <cmath>
#include <iomanip> //libreria que nos permite usar el setpresition

using namespace std;

double funcion(double x) {
    // Aquí debes definir la función para la cual deseas encontrar la raíz
    return pow(x,2)-cos(x); // Ejemplo: f(x) = x^3 - 11
}

double reglaFalsa(double a, double b, int num_iteraciones) {
    double c;
    int iteraciones = 0;

    cout << "No. Iteracion\tValor de a\tf(a)\t\tValor de b\tf(b)\t\tValor de c\tf(c)\t\tError Relativo" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;

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

        

        cout << setw(13) << iteraciones << "\t" << setw(12) << fixed << setprecision(3) << a
             << "\t" << setw(12) << fixed << setprecision(8) << funcion(a)
             << "\t" << setw(12) << fixed << setprecision(8) << b
             << "\t" << setw(12) << fixed << setprecision(8) << funcion(b)
             << "\t" << setw(12) << fixed << setprecision(8) << c
             << "\t" << setw(12) << fixed << setprecision(8) << funcion(c)
             << "\t" << setw(12) << fixed << setprecision(8) << error_relativo << endl;	
	}

    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;

    return c;
}

int main() {
    double a, b;
    int num_iteraciones;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el número de iteraciones: ";
    cin >> num_iteraciones;

    double raiz = reglaFalsa(a, b, num_iteraciones);

    cout << "La raíz aproximada es: " << fixed << setprecision(8) << raiz << endl;

    return 0;
}