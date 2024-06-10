#include <iostream>
using namespace std;
#define anonimo , registrado, administrador;
int main(){
  int usu;
  cout << "ingresa el tipo de usuario que eres: ";
  cout<<"(1)anonimo, (2)registrado, (3)administrador";
  cin >> usu;
switch(usu){
  case 1:
        cout<<"Bienvenido \n"<<"Ingresaste como anonimo";
          break;
  case 2:
  cout<<"bienvenido ";
    cout<<"mostrar  mis vendedores recomendados ";
     cout<<"ver los productos de la venta ";
    break;

  case 3:
    cout << "bienvenido administrador, que desea hacer?";
    break;

      }
}
  return 0;

