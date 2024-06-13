#include <iostream>
using namespace std;
int main()
{
    int acum,acum2,t,num;
    cout<<"Digite el tamaño del vector 1:  ";
    cin>>t;
    int vector1[t];
    for (int i = 0; i < t; i++)
    {
        cout<<"Digite el numero  "<<i+1<<"\n";
        cin>>num;
        vector1[i]=num;
        acum=acum+vector1[i];
    }
    cout<<"Digite el tamaño del vector 2:  ";
    cin>>t;
    int vector2[t];
    for (int i = 0; i < t; i++)
    {
        cout<<"Digite el numero  "<<i+1<<"\n";
        cin>>num;
        vector2[i]=num;
        acum2=acum2+vector2[i];
    }
    int vector3[2];
    vector3[1]=acum2+acum;
    cout<<"Resultado total: "<<vector3[1];
    return 0;
}
