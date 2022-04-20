#include <iostream>

using namespace std;

double subtotal;
string listaproductos;

void agregarproducto(string descipcion, int cantidad, double precio)
{
    listaproductos = listaproductos + descipcion + '\n'; 
    subtotal = subtotal + (cantidad * precio); 
}