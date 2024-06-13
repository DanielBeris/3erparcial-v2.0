#include <iostream>
using namespace std;
int main()
{
    int acum,t,num;
    cout<<"Digite el tamaño del vector: \n";
    cin>>t;
    int vector[t];
    for (int i = 0; i < t; i++)
    {
        cout<<"Digite un numero: \n";
        cin>>num;
        vector[i]=num;
        acum=acum+vector[i];
    }
    for (int i = 0; i < t; i++)
    {
        cout<<"La suma de "<<vector[i]<<"\n";
    }
    cout<<"es "<<acum;
    return 0;
}
