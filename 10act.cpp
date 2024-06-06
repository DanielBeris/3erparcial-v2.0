#include <iostream>
using namespace std;
int main ()
{
    int N,FN;
    do
        {
        cout<<"ingrese un numero\n";
        cin>>N;
        if (N==0)
        {
            printf("operacion finalizada por la intriduccion de un 0\n");
        }
        else
        {
            FN=FN+N;
        }
    }
    while (N!=0);
    cout<<"El resultado es ;"<<FN;
    return 0;
}
