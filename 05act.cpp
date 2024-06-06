#include <iostream>
using namespace std;
int main()
{
    
    float p,s;
    int h;
    cout<<"Ingresa las horas trabajadas: ";
    cin>>h;
    cout<<"Ingresa lo cobrado por hora: ";
    cin>>s;
    if (h<=40){
        p=h*s;
    }
    else{
        p=40*s+(h-40)*s*1.5;
    }
    if (h>=50){
        p=50*s+(h-50)*s*0.5;
    }
    cout<<"Salario: "<<p;
    return 0;
}