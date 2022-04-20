#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{ 

    int numeroS = 0 ;
    int numero =0;

    srand (time (NULL));

    numeroS = rand () % 10 +1;

    do
    {
       cout << " Advina el numero de (1 a 10): " << endl;
        cin >> numero;

        if (numeroS < numero)
        {
            cout << " El numero secreto puede ser menor" << endl;
        } else {

            if (numeroS > numero){

                cout << " El numero secreto puede ser mayor" << endl;
            }
        }
        

    } while (numeroS != numero);


    cout << endl;
    cout << " Felicidades Acertatstes!!" << endl ;
    
  
    return 0;
}
