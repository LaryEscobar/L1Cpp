#include <iostream>
#include <stdio.h>

using namespace std;
int main (){

	int opcion = 0;
	
	while (true){
		
		system("cls"); // limpia las lineas anteriores
		
		cout <<" **********" << endl ;
		cout <<"    Menu   " << endl ;
		cout <<" **********" << endl ;
		
		cout << endl;
		cout <<" 1. Cafe y Granitas " << endl ;
		cout <<" 2. Reposteria" << endl;
		cout <<" 0. Salir" << endl;
		
		cout << " Ingrese una opcion del menu: " << endl;
		cin >> opcion ;
		
		
		if ( opcion == 0){
			
			break;
		}
		
		
		switch (opcion){
			
			case 1: {
				system("cls");
			    cout <<" Menu de Cafe y Granitas " << endl;
			    system("pause");
				
				break;
			}
			
			case 2:{	
				system("cls");
			    cout <<" Menu Reposteria" << endl;
			    system("pause");
				
				break;
			}
			default :{
			    cout <<" Ingrese una opcion valida ( 0,1,2)" << endl;
				break;
				system("pause");
			}
		}
		
		break;	
	
	}
	
	cout <<endl;
	cout << " Salio del sistema" << endl;
	
return 0;    
}