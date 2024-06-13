#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int num[10];
    srand(time(NULL));
    for (int i = 1; i <= 10; i++)
    {
        num[i]=1+rand()%(100+1-1);
    }
    for (int i = 1; i <= 10; i++)
    {
        cout<<"El numero de la posicion "<<i+1<<" es "<<num[i]<<"\n";
    }
}
