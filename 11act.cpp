#include <iostream>
using namespace std;
int main()
{
    int hrs;
    cout<<"Que hora es en formato de 24 hrs? \n";
    cin>> hrs;
        if (hrs<11)
        {
            cout<<"buenos dias";
        }
            if (hrs>=11 && hrs<19)
    {
        cout<<"buenas tardes";
    }
    if (hrs>=19 && hrs<=24)
    {
        cout<<"buenas noches";
    }
    if (hrs>24 || hrs<0)
    {
        cout<<"Error: Vuelva a introducir el numero por favor ";
    }
    return 0;
}