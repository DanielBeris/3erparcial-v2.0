#include <iostream>

using namespace std;

int main() {
    double num, decimal;
    cout << "Ingrese un numero natural: ";
    cin >> num;
    cout << "Ingrese dos numeros decimales: ";
    cin >> decimal;

    // Raíz cuadrada
    double raizCuadrada = 1.0;
    for (int i = 0; i < 10; ++i) {
        raizCuadrada = 0.5 * (raizCuadrada + num / raizCuadrada);
    }
    cout << "La raiz cuadrada de " << num << " es: " << raizCuadrada << endl;

    // Factorial
    unsigned long long factorial = 1;
    for (int i = 2; i <= static_cast<int>(num); ++i) {
        factorial *= i;
    }
    cout << "El factorial de " << static_cast<int>(num) << " es: " << factorial << endl;

    // Primo o no
    bool esPrimo = true;
    for (int i = 2; i <= static_cast<int>(num) / 2; ++i) {
        if (static_cast<int>(num) % i == 0) {
            esPrimo = false;
            break;
        }
    }
    cout << "El numero " << static_cast<int>(num) << (esPrimo ? " es primo." : " no es primo.") << endl;

    // Potencia
    double potencia = 1.0;
    for (int i = 0; i < static_cast<int>(decimal); ++i) {
        potencia *= num;
    }
    cout << static_cast<int>(num) << " elevado a la potencia " << decimal << " es: " << potencia << endl;

    // Menor que 100 o mayor que 50
    if (static_cast<int>(num) < 100) {
        cout << "El numero es menor que 100." << endl;
    } else if (static_cast<int>(num) > 50) {
        cout << "El numero es mayor que 50." << endl;
    } else {
        cout << "El numero no es ni mayor que 50 ni menor que 100." << endl;
    }

    return 0;
}