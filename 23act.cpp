#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int n,exponente,resultado;
    cout<<"Digite el numero base: ";
    cin>>n;
    cout<<"Diigite el numero espomnente: ";
    cin>>exponente;
    resultado=pow(n, exponente);
    cout<<"El resultado es: "<<resultado;
}