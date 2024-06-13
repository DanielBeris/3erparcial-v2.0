#include <iostream>
#include <string>

int main() {
    const int filas_arreglo1 = 2;
    const int filas_arreglo2 = 3;
    
    std::string arreglo1[filas_arreglo1][1];
    int arreglo2[filas_arreglo2][1];

    arreglo1[0][0] = "Fernando";
    arreglo1[1][0] = "Oscar";

    arreglo2[0][0] = 74;
    arreglo2[1][0] = 56;
    arreglo2[2][0] = 10;

    std::cout << "Arreglo 1:" << std::endl;
    for (int i = 0; i < filas_arreglo1; i++) {
        std::cout << "El dato en la posición " << i << " es: " << arreglo1[i][0] << std::endl;
    }

    std::cout << "Arreglo 2:" << std::endl;
    for (int i = 0; i < filas_arreglo2; i++) {
        std::cout << "El dato en la posición " << i << " es: " << arreglo2[i][0] << std::endl;
    }

    return 0;
}
