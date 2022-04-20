#include <iostream> 
using namespace std;

extern void agregarproducto(string descipcion, int cantidad, double precio);

void productos (int opcion)
{

    system ("cls");

    int opcionproducto ;

    switch (opcion)
    {

    case 1:{

         
            cout << " Bebidas Calientes " << endl;
            cout << "*****************" << endl;
            cout << "1- Capuchino" << endl;
            cout << "1- Expresso" << endl;
            
            cin >> opcionproducto;

            switch (opcionproducto)
            {
            case 1:
                agregarproducto("Capuchino", 1, 40);
                break;
             case 2:
                agregarproducto("Expresso", 1, 25);
                break;
            default:{
            cout << " opcion no valida"<< endl;
            return;
            break;
            }
        }

            cout << " Producto Agregado" << endl;
            system ("pause");
        break;
    }
    case 2:
    {
        cout << "Bebidas Frias" << endl;
        cout << "*************" << endl;
        system("pause");
        break;
    }
    case 3:
    {
        cout << "Reposteria" << endl;
        cout << "**********" << endl;
        system("pause");
        break;
    } 
       
    default:
        break;

}
}