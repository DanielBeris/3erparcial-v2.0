#include <iostream>
using namespace std;
int main()
{
    int f,c,numero,acum;
    cout<<"Digita el nuemro de filas: ";
    cin>>f;
    cout<<"Digita el nuemro de columnas: ";
    cin>>c;
    int matriz[f][c];
    for (int i = 1; i < f+1; i++)
    {
        for (int j = 1; j < c+1; j++)
        {
            cout<<"Digite dato para la fila "<<i<<" columna "<<j<<"\n";
            cin>>numero;
            matriz[i][j]=numero;
        }
        acum=acum+matriz[i][1];
    }
    for (int i = 1; i < f+1; i++)
    {
        for (int j = 1; j < c+1; j++)
        {
            cout<<"Los datoos que hay en la matriz son "<<matriz[i][j]<<"\n";
        }
    }
    cout<<"Todos los elementos de la columna 1 sumanun total de: "<<acum;
    return 0;
}
