#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int matriz[3][3];
    srand(time(NULL));
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            matriz[i][j]=1+rand()%(100+1-1);
        }
    }
    for (int i = 1; i < 4; i++)
    {
        cout<<matriz[i][1]<<" "<<matriz[i][3]<<" "<<matriz[i][3];
    }
}
