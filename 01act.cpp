#include <iostream>
using namespace std;
int main()
{
    int n[3];
    cout << "introduzca la contraseña \n";
    cin>>n[1];
    cin>>n[2];
    cin>>n[3];
    if (n[1]==1 && n[2]==2 && n[3]==3 )
    {
        cout<<"Contraseña correcta, Bienvenido ";
    }
    else
    {
        cout<<"Contraseña incorrecta, vuelva a intentarlo";
    }
}