#include <iostream> 
#include<stdio.h>

using namespace std;

int main (){
	
	int opcion = 0;
	
	while (true){
		
		system("cls");
		
		cout <<" **********" << endl ;
		cout <<"    Menu   " << endl ;
		cout <<" **********" << endl ;
		
		cout << endl;
		cout <<" 1. Cafe y Granitas " << endl ;
		cout <<" 2. Reposteria" << endl;
		cout <<" 0. Salir" << endl;
		
		cout << " Ingrese una opcion del menu: " << endl;
		cin >> opcion ;
		
		if (opcion == 1){
			
			system("cls");
			cout <<" Menu de Cafe y Granitas " << endl;
			system("pause");	
		}
		
		if ( opcion == 2){
			
			system("cls");
			cout<< " Menu de Reposteria" << endl;
			system("pause");
		}
		if ( opcion == 0){
			
			break;
		}
	}
	
	cout <<endl;
	cout << " Salio del sistema";

return 0;
}