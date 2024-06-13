#include <iostream>
using namespace std;
int main()
{
    int p,numero,cont,cont1,cont2;
    cout<<"Digite un numero de posiciones ";
    cin>>p;
    int num[p];
    for (int i = 1; i < p+1; i++)
    {
        cout<<"Digite numero "<<i<<"\n";
        cin>>numero;
        num[i]=numero;
    }
    for (int i = 1; i < p+1; i++)
    {
        if (num[i]>0)
        {
            cont=cont+1;
            cout<<"Los numeros integrados son: "<<num[i]<<" es positivo"<<"\n";
        }
        if (num[i]<0)
        {
            cont1=cont1+1;
            cout<<"Los numeros integrados son: "<<num[i]<<" es negativo"<<"\n";
        }
        if (num[i]==0)
        {
            cont2=cont2+1;
            cout<<"Los numeros integrados son: "<<num[i]<<" es nulo"<<"\n";
        }
    }
    cout<<"Hay "<<cont<<" numeros positivos";
        cout<<"Hay "<<cont1<<" numeros negativos";
            cout<<"Hay "<<cont<<" numeros nulos";
    return 0;
}
