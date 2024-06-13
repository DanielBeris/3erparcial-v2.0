#include <iostream>
using namespace std;
int main()
{
    int num[5],numero;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Digite un numero para la posicion "<<i+1<<"\n";
        cin>>numero;
        num[i]=numero;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"El dato de la posicion "<<i+1<<" es: "<<num[i]<<"\n";
    }
    return 0;
}
