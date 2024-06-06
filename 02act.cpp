#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4, n5, menor, mayor;

    cout << "Ingresa 5 numeros: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    menor = n1;
    mayor = n1;

    if (n2 < menor) {
        menor = n2;
    }
    if (n3 < menor) {
        menor = n3;
    }
    if (n4 < menor) {
        menor = n4;
    }
    if (n5 < menor) {
        menor = n5;
    }

    if (n2 > mayor) {
        mayor = n2;
    }
    if (n3 > mayor) {
        mayor = n3;
    }
    if (n4 > mayor) {
        mayor = n4;
    }
    if (n5 > mayor) {
        mayor = n5;
    }

    cout << "El menor numero es: " << menor  <<"\n";
    cout << "El mayor numero es: " << mayor <<"\n";
    int iguales = 0;
    if (n1 == n2 || n1 == n3 || n1 == n4 || n1 == n5) {
        iguales++;
    }
    if (n2 == n3 || n2 == n4 || n2 == n5) {
        iguales++;
    }
    if (n3 == n4 || n3 == n5) {
        iguales++;
    }
    if (n4 == n5) {
        iguales++;
    }
    if (iguales > 0) {
        cout << "Hay " << iguales << " par(es) de numeros iguales."  ;
    } else {
        cout << "No hay numeros iguales."  ;
    }
}