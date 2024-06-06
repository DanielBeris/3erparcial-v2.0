#include <iostream>
#include <cstring> 
using namespace std;
int main() {
    char contraseña[20];
    char name[50];
    int Articulos=1, precio, factura=0;
    cout << "Hola, ¿cómo te llamas? ";
    cin.getline(name, 50); 
    int i = 0;
    while (i < 3) {
    cout << "Ingresa tu contraseña (te quedan " << 3 - i << " intentos): ";
    cin.getline(contraseña, 20); 
    if (strcmp(contraseña, "2bm03") == 0) {
        cout << "¡Contraseña correcta, " << name <<"\n";
        cout << "Bienvenido, " << name << "\n";
        do {
            cout << "Cuantos articulos compro? \n";
            cin >> Articulos;
            if (Articulos==0)
            {
                break;
            }
            cout << "Cual es el precio de dicho articulo? \n";
            cin >> precio;
            factura=(precio*Articulos)+factura;
        } while (Articulos!=0);
        cout << "Su factura es de " << factura;
        break;
    } else {
        cout << "Contraseña incorrecta. Prueba de nuevo.\n";
        i++;
    }
    }
    if (i == 3) {
    cout << "Demasiados intentos. Intenta más tarde.\n";
    }
    return 0;
}
//Supongo que aqui se refiere a otra estructura de repeticion
//En este caso 'while' y 'do'