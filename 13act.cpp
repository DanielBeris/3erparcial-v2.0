#include <iostream>
using namespace std;
int main()
{
    int residuo,n;
    cout<<"Digite numero \n";
    cin >>n;
    residuo=n%2;
    if(residuo ==0)
    {
        cout<<"es par \n";
    }
    else
    {
        cout <<"es impar \n";
    }
    residuo=n%3;
    if (residuo ==0)
    {
        cout <<"es multiplo de 3 ";
    }
    return 0;
}