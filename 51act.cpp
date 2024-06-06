#include <iostream>
#include <cstring> 
using namespace std;
int main() {
    char contraseña[20],name[50];
    int Articulos=1, precio, factura=0;
    string resp;
    int i = 0;
    while (i < 3) {
    cout << "Hola, ¿cómo te llamas? ";
    cin.getline(name, 50); 
    cout << "Ingresa tu contraseña (tienes " << 3 - i << " intentos): ";
    cin.getline(contraseña, 20); 
    if (strcmp(contraseña, "2b03") == 0 && strcmp(name, "Daniel") == 0) 
    {
        cout << "¡Contraseña correcta, "<<"\n";
        cout << "Bienvenido, " << name << "\n";
        do {
        cout << "Para finalizar introduzca '0'";
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
        cout << "Su factura es de " << factura<<"\n";
        cout << "Desea agregar otra factura de algun otro cliente? \n";
        cin >> resp;
        } while (resp=="si");
        break;
    } 
    else 
    {
        cout << "Contraseña o usuario incorrecta. Prueba de nuevo.\n";
        i++;
    }
    }
    if (i == 3) {
    cout << "Demasiados intentos. Intenta más tarde.\n";
    }
    return 0;
}