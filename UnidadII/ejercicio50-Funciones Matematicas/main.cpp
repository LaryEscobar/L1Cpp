#include <iostream>
#include <math.h>
#define pi 3.1416

using namespace std ;

int main(int argc, char const *argv[])
{

    double numero = 0;
    double seno = 0 ;
    double conseno = 0 ;
    double tangente = 0 ;

    numero = 2*pi ;
    seno = sin (numero);
    conseno = cos (numero);
    tangente = tan ( numero);

    cout << " Numero: " << numero << endl;
    cout << " Seno: " << seno << endl;
    cout << " conseno: " << conseno << endl;
    cout << " Tangente: " << tangente << endl ;


    return 0;
}