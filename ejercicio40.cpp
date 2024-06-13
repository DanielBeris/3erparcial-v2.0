#include <iostream>
using namespace std;
int main()
{
    int n,pos;
    cout<<"Digite el numero de paises: ";
    cin>>n;
    string paises[n];
    string nombre;
    for (int i = 1; i < n+1; i++)
    {
        cout<<"Digite pais: "<<i<<"\n";
        getline(std::cin, nombre);
        paises[i]=nombre;
    }
    cout<<"Digite la posicion: ";
    cin>>pos;
    cout<<"El pais de la posicion "<<pos<<" es "<<paises[pos];
    return 0;
}
