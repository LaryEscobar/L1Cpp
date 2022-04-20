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
            cout << "2- Expresso" << endl;
            cout << "3- Chocolate caliente" << endl;
            cout << endl;

            cout << " Ingrese una opcion" << endl;
            cin >> opcionproducto;

            switch (opcionproducto)
            {
            case 1:
                agregarproducto("1- Capuchino L. 40.00", 1, 40);
                break;
             case 2:
                agregarproducto("1- Expresso L. 25.00", 1, 25);
                break;
            case 3:
                agregarproducto("1- Chocolate Caliente L. 55.00", 1, 55);
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
        cout << "1- Granita" << endl;
        cout << "2- Granita Supreme" << endl;
        cout << "3- Smothie" << endl;
        cout << endl;

        cout << " Ingrese una opcion" << endl;
        cin >> opcionproducto;

            switch (opcionproducto)
            {
            case 1:
                agregarproducto("1- Granita L.45.00", 1, 45);
                break;
             case 2:
                agregarproducto("1- Granita Suprme L.85.00", 1, 85);
                break;
            case 3:
                agregarproducto("1- Smothie L.65.00", 1, 65);
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
    case 3:
    {
        cout << "Reposteria" << endl;
        cout << "**********" << endl;
        cout << "1- Muffin" << endl;
        cout << "2- Chesee Cake" << endl;
        cout << "3- Crepas" << endl;
        cout << endl;

        cout << " Ingrese una opcion" << endl;
        cin >> opcionproducto;

            switch (opcionproducto)
            {
            case 1:
                agregarproducto("1- Muffin L.30.00", 1, 30);
                break;
             case 2:
                agregarproducto("1- Chesee Cake L. 75.00", 1, 75);
                break;
            case 3:
                agregarproducto("1- Crepas L. 95.00", 1, 95);
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
       
    default:
        break;

}
}