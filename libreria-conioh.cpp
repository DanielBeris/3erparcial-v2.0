#include <iostream>
#include <cmath>
#include <conio.h>
#define yellow 14;
using namespace std;
#ifndef M_PI
#define M_PI 3.1416
#endif
int main() {
    while (true) {
        int opcion = 1;
        double area;
        bool selected = false;
        while (!selected) {
            system("cls");
            cout << "Seleccione una figura para calcular el area:" << endl;
            cout << (opcion == 1 ? "> " : "  ") << "1. Circulo" << endl;
            cout << (opcion == 2 ? "> " : "  ") << "2. Rectangulo" << endl;
            cout << (opcion == 3 ? "> " : "  ") << "3. Triangulo" << endl;
            cout << (opcion == 4 ? "> " : "  ") << "4. Cuadrado" << endl;
            cout << (opcion == 5 ? "> " : "  ") << "5. Salir" << endl;

            int key = _getch();

            if (key == 224) { 
                key = _getch();
                if (key == 72) { 
                    if (opcion > 1) {
                        opcion--;
                    }
                }
                else if (key == 80) {
                    if (opcion < 5) {
                        opcion++;
                    }
                }
            }
            else if (key == 13) { 
                selected = true;
            }
        }
        system("cls");
        switch (opcion) {
        case 1: {
            
            double radio;
            cout << "Ingrese el radio del circulo: ";
            cin >> radio;
            area = M_PI * radio * radio;
            cout << "El area del circulo es: " << area << endl;
            break;
        }
        case 2: {
            double base, altura;
            cout << "Ingrese la base del rectangulo: ";
            cin >> base;
            cout << "Ingrese la altura del rectangulo: ";
            cin >> altura;
            area = base * altura;
            cout << "El area del rectangulo es: " << area << endl;
            break;
        }
        case 3: {
            double base, altura;
            cout << "Ingrese la base del triangulo: ";
            cin >> base;
            cout << "Ingrese la altura del triangulo: ";
            cin >> altura;
            area = (base * altura) / 2;
            cout << "El area del triangulo es: " << area << endl;
            break;
        }
        case 4: {
            double lado;
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            area = lado * lado;
            cout << "El area del cuadrado es: " << area << endl;
            break;
        }
        case 5:
            cout << "Saliendo del programa." << endl;
            return 0;
        default:
            cout << "Opcion invalida. Por favor, seleccione una opcion entre 1 y 5." << endl;
            break;
        }
        cout << "Presione cualquier tecla para volver al menu..." << endl;
        _getch();
    }
    return 0;
}