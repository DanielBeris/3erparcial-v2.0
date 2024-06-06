#include <iostream>
using namespace std;
int main ()
{
    int N[10];
    int FN;
    int Mayor, Menor;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Ingrese el digito "<<i+1<<"\n";
        cin>>N[i];
        FN=FN+N[i];
        if (Mayor<N[i])
        {
            Mayor=N[i];
        }
        if (Menor>N[i])
        {
            Menor=N[i];
        }
    }
    cout<<"La suma es de "<< FN <<"\n";
    cout<<"El mayor es: "<< Mayor <<"\n";
    cout<<"el menor es: "<< Menor;
    return 0;
}