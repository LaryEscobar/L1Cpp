#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int numeroS = 7;

void AdivinarNumeroS (int numero){

    if (numero == numeroS)
    {
        cout << " Advinaste " << endl;

    }else {
        cout << " Intento Fallido con "<< numero << endl ;

        int intento2 = 0;

        cout <<" Ingrese otro numero: " << endl;
        cin >> intento2;

        AdivinarNumeroS (intento2);
    }  

}
int main(int argc, char const *argv[])
{ 
    AdivinarNumeroS (5);

    return 0;
}
