#include <iostream> 
#include<stdio.h>

using namespace std;

int main (){
	
	int pares = 0;
	int impares = 0;
	int total = 0;
	
	for (int i =1; i <= 10; i ++){
		
		if (i%2 == 0){
			
			pares = pares + i ;
		}
		
		cout << i << "  ";
		
		if (i%2 == 1){
			
			impares = impares + i ;
		}

		
		if ( i%1 == 0){
			
			total = total + i ;
		}
		
	
		
	}

cout << endl;
cout << endl;
cout <<" Total pares: " << pares <<endl;

cout << endl;
cout << endl;
cout <<" Total impares: " << impares <<endl;

cout << endl;
cout << endl;
cout <<" Total de numeros: " << total <<endl;

system("pause");
return 0;
}