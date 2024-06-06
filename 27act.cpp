#include <iostream>
using namespace std;
int main ()
{
    int N=1,intento;
    char usuario[100];
    cout<<"Cual es su nombre de usuario:\n";
    cin>>usuario;
    do
    {
        cout<<"Ingrese la contrasena: ";
        cin>>intento;
        if (intento==1234)
        {
            cout<<"acceso permitido\n";
            cout<<"Bienvenido "<<usuario;
            break;
        } else {
            cout<<"acceso denegado\n";
            cout<<"llevas "<< N <<" intemtos";
            N=N+1;
        }
    } while (intento!=1234 && N<4);
}
//Incompleto todavia :D