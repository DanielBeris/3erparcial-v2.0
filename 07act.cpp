#include <iostream>
using namespace std;
int main ()
{
    int num, base,altura, BaseMayor;
    float area;
    cout<<"CALCULO DE AREAS\n================\n";
    cout<<"1 Calcular area de un triangulo\n2 Calcular area de un trapecio\n3 Calcular area de un rectangulo\n";
    cin>>num;
    switch (num)
    {
    case 1:
        cout<<"\nPara imprimir el area ingrese la base: ";
        cin>>base;
        cout<<"\nahora ingrese la altura: ";
        cin>>altura;
        area=base*altura/2;
        cout<<area<<" es el area del triangulo";
        break;
    case 2:
        cout<<"\ningrese la base mayo rpara calcular el area: ";
        cin>>BaseMayor;
        cout<<"\nPara imprimir el area ingrese la base: ";
        cin>>base;
        cout<<"\nahora ingrese la altura: ";
        cin>>altura;
        area=(BaseMayor+base)*altura/2;
        cout<<area<<" es el area del trapecio";
        break;
    case 3:
        cout<<"\nPara imprimir el area ingrese la base: ";
        cin>>base;
        cout<<"\ningrese la base mayo rpara calcular el area: ";
        cin>>BaseMayor;
        area=BaseMayor*base;
        cout<<area<<" es el area del rectangulo";
        break;
    default:
        break;
    }
    return 0;
}