#include <iostream> 
#include<stdio.h>

using namespace std;
int main (){

int nota ;

cout <<" Ingrese la nota obtenida: " << endl;
cin >> nota; 


if (nota > 100 || nota  < 0 ){
	
	cout <<" Ingrese una nota de 0 a 100" <<endl;
	
	return 0 ;
	
}

if (nota >= 95 && nota <= 100 ){
	
	cout <<" Obtuvo una A " <<endl;
	
}
if (nota >= 85 && nota <= 94 ){
	
	cout <<" Obtuvo una  B" <<endl;
	
}
if (nota >= 75 && nota <= 84){
	
	cout <<" Obtuvo una C" <<endl;
	
}

if (nota >= 65 && nota <= 74 ){
	
	cout <<" Obtuvo una D" <<endl;
	
}

if (nota >= 60 && nota <= 64 ){
	
	cout <<" Obtuvo una E" <<endl;
	
}
if (nota <= 60 ){
	
	cout <<" Obtuvo una F,  Busque a trabajar mejor " <<endl;
	
}

system("pause");
return 0;
}