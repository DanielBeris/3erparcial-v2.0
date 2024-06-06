#include <iostream>
#include <cstring> 
using namespace std;
int main() {
    char contraseña[20];
    char name[50];
    cout << "Hola, ¿cómo te llamas? ";
    cin.getline(name, 50); 
    int i = 0;
    while (i < 3) {
    cout << "Ingresa tu contraseña (te quedan " << 3 - i << " intentos): ";
    cin.getline(contraseña, 20); 
    if (strcmp(contraseña, "2b03") == 0 && strcmp(name, "Daniel") == 0)  {
        cout << "¡Contraseña correcta, " << name <<"\n";
        cout << "Bienvenido, " << name << "\n";
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
