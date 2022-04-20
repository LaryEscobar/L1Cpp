#include <iostream>

using namespace std ;

string nombrecompleto (string nombre, string apellido)
{
    return nombre + "  " +apellido ;

}

int main(int argc, char const *argv[])
{

    string nombre1 = "" , apellido1 = "";

    cout << " Ingrese su primer nombre: " << endl;
    cin >> nombre1;

    cout <<" Ingrese su primer apellido: " << endl;
    cin >> apellido1;

    cout << " Nombre Completo: " <<nombrecompleto (nombre1, apellido1);
    

    return 0;
}
