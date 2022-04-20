#include <iostream>

using namespace std;

double subtotal;
string listaproductos;

void agregarproducto(string descipcion, int cantidad, double precio)
{
    listaproductos = listaproductos + descipcion + '\n'; 
    subtotal = subtotal + (cantidad * precio); 
}

void imprimirfactura()
{
    system("cls");
    cout << "**********" << endl;
    cout << " Factura" << endl;
    cout << "**********" << endl;
    cout << endl;

    cout << " Productos: " <<endl;
    cout << listaproductos;

    cout << endl;
    cout <<" Subtotal: " << subtotal;
    cout << endl;
    cout << endl;
    system ("pause");

}