#include <iostream>
using namespace std;
int main ()
{
    int n,exponente,resultado;
    cout<<"Digite el numero base: ";
    cin>>n;
    cout<<"Diigite el numero espomnente: ";
    cin>>exponente;
    resultado=n;
    for (int i; i!= exponente; i++)
    {
        resultado=resultado*n;
    }
    cout<<"El resultado de la operacion es "<<resultado;
    return 0;
}