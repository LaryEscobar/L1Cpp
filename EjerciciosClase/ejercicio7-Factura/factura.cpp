#include <iostream> 
#include<stdio.h>

using namespace std;
int main (){

double subtotal = 0;
double total = 0;
double imp = 0.15;


cout <<" Ingrese el subtotal de la facura: " <<endl;
cin >> subtotal; 

total = subtotal + (subtotal * 0.15);

cout <<" Total a pagar: " <<total << endl;



 		
system("pause");
return 0;
}