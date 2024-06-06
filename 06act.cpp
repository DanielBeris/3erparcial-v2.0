#include <iostream>
using namespace std;
int main ()
{
    int carta;
    cout<<"Que carta es ";
    cin>>carta;
    switch (carta)
    {
    case 1:cout<<"Es un As";
        break;
    case 10:cout<<"es una sota";
        break;
    case 11:cout<< "es un caballo";
        break;
    case 12:cout<< "es un rey";
        break;
    case 2:cout<< "No es ni figura ni es un as" ;
        break;
    case 3:cout<< "No es ni figura ni es un as" ;
        break;
    case 4:cout<< "No es ni figura ni es un as" ;
        break;
    case 5:cout<< "No es ni figura ni es un as" ;
        break;
    case 6:cout<< "No es ni figura ni es un as" ;
        break;
    case 7:cout<< "No es ni figura ni es un as" ;
        break;
    case 8:cout<< "No es ni figura ni es un as" ;
        break;
    case 9:cout<< "No es ni figura ni es un as" ;
        break;
    default:cout<< "no es de la baraja " ;
        break;
    }
    return 0;
}