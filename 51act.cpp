#include <iostream>
#include <cstring> 
using namespace std;
int main() {
    char contraseña[20],name[50];
    int Articulos=1, precio,j, factura[j],cont;
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
            j++;
            cout << "Para finalizar introduzca '0'\n";
            do {
                cout << "Cuantos articulos compro? \n";
                cin >> Articulos;
                i++;
                if (Articulos==0)
                {
                    break;
                }
                cout << "Cual es el precio del articulo "<<i<<" \n";
                cin >> precio;
                factura[j]=(precio*Articulos)+factura[j];
                cout << "Su factura es de " << factura[j]<<"\n";
                cont=cont+1;
        } while (Articulos!=0);
        cout << "Desea agregar otra factura de algun otro cliente? \n";
        cin >> resp;
        } while (resp=="si");
        for (j=0; j == cont; j++)
        {
            cout << "la factura del clente "<<j+1<<" es "<< factura[j+1]<<"\n";
        }
        
        break;
    } 
    else 
    {
        cout << "Contraseña o usuario incorrecta. Prueba de nuevo.\n";
        i++;
    }
    }
    if (i == 3) 
    {
    cout << "Demasiados intentos. Intenta más tarde.\n";
    }
    return 0;
}