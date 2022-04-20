#include <iostream> 
#include<stdio.h>

using namespace std;
int main (){

double subtotal = 0;
double total = 0;
double imp = 0.15;
int descuento= 0;
double Cdescuento = 0;
double Cimp = 0;

cout <<" Ingrese el subtotal de la facura: " <<endl;
cin >> subtotal; 

cout <<" Ingrese el descuento (0,10,15,20): " <<endl;
cin >> descuento;


Cdescuento = (subtotal * descuento) /100 ;
Cimp = (subtotal - Cdescuento )* 0.15 ;
total = subtotal - Cdescuento + Cimp;

cout <<" Total a pagar: " <<total << endl;;
		
system("pause");
return 0;
}