#include <iostream>
#include <math.h>


using namespace std ;

int main(int argc, char const *argv[])
{

int  numero = 0;

cout << " CALCULO DE RAIZ CUADRADA " << endl ;
cout << " Ingrese un numero a calcular : " << endl ;
cin >> numero ;


numero = sqrt(numero) ;

cout << " La raiz cuadrada es: " << numero << endl;

    return 0;
}