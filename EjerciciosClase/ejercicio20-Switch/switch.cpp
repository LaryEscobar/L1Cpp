#include <iostream>
#include <stdio.h>

using namespace std;
int main (){

    int opcion = 0;

    cout <<" Ingrese una opcion: " << endl;
    cin >> opcion ;

    switch (opcion)
    {
    case 1:
        cout << " Escogiste 1 " << endl;
        break;
    case 2:
        cout << " Escogiste 2 " << endl;
        break;
    case 3:
        cout << " Escogiste  3" << endl;
        break;
    
    default:
    cout << " Ingrese una opcion de 1 a 3 " << endl;
        break;
    }



system("pause");
return 0;    
}