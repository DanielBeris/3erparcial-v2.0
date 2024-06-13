#include <iostream>
using namespace std;
int main()
{
    char arreglo1[2];
    int arreglo2[3];
    arreglo1[1]='Fer';
    arreglo1[2]='Oscar';
    arreglo2[1]=76;
    arreglo2[2]=56;
    arreglo2[3]=10;
    cout<<"Arreglo 1 \n";
    for (int i=1; i<=2; i++)
    {
        cout<<"El dato de la posicion "<<i<<" es: "<<arreglo1[i]<<"\n";
    }
    cout<<"Arreglo 2 \n";
    for (int i=1; i<=3; i++)
    {
        cout<<"El dato de la posicion "<<i<<" es: "<<arreglo2[i]<<"\n";
    }
    return 0;
}
