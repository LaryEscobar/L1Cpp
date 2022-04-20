#include <iostream> 
#include<stdio.h>

using namespace std;
int main (){

int a = 0;
int b = 0;
int suma, resta, mult, div;

cout <<"Ingrese el primer valor: " <<endl;
cin >> a;

cout <<" Ingrese el segundo valor: " <<endl;
cin >> b;


suma = a + b ;
resta = a-b ;
mult = a*b;
div = a/b;

cout << "La suma es: " << suma << endl;
cout << "La resta es: " << resta << endl;
cout << "La multiplicacion es: " << mult << endl;
cout << "La division es: " << div << endl;
 		
system("pause");
return 0;
}