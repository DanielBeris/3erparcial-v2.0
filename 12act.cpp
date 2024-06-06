#include <iostream>
using namespace std;
int main()
{
    int n[2],residuo;
    cout<<"Digite 2 numeros \n";
    cin>>n[1];
    cin>>n[2];
    residuo=n[1]%n[2];
    if(residuo ==0)
    {
        cout<<"el residuo es "<<residuo;
        cout<<"es dividible";
    }
    else
    {
        cout<<"el residuo es "<<residuo;
        cout <<"no es divisible";
    }
    return 0;
}