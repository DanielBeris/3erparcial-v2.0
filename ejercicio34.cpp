#include <iostream>
using namespace std;
int main()
{
    int n,numero;
    cout<<"Ingrese el tamaño del arreglo :";
    cin>>n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Digite un numero para la posicion "<<i+1<<"\n";
        cin>>numero;
        num[i]=numero;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"El dato de la posicion "<<i+1<<" es: "<<num[i]<<"\n";
    }
    return 0;
}
