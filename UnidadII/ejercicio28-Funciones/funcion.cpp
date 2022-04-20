#include <iostream>

using namespace std ;

int sumar (){
	
	return 5 + 7;
}

string nombrecompleto (){
	
	return "Alma Amaya";
	
}

int main(int argc, char** argv) {
	
	int resultado = 0;
	resultado = sumar ();
	
	string nombreyapellido = nombrecompleto();
	
	cout << resultado << endl;
	
	cout << nombreyapellido << endl;	
	
	return 0;
}