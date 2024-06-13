#include <iostream>
using namespace std;
int main()
{
    int n;
    string nombre;
    cout<<"Digite el nunmero de la posicion: ";
    cin>>n;
    string personas[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Digite un nombre para la posicion: "<<i+1<<"\n";
        getline(std::cin, nombre);
        personas[i]=nombre;
    }
    for (int i = 0; i < n-1; i++)
    {
        cout<<"El nombre de la persona "<<i+1<<" es "<<nombre<<"\n";
    }
    return 0;
}
