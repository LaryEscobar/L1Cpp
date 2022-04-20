#include <iostream> 
#include<stdio.h>

using namespace std;

int main (){
	
	
	for (int i =0; i < 10; i ++){
		
		cout << i << "  ";
		
	}
	
	cout << endl;
	
	for (int i =9; i >= 0; i --){
		
		cout << i << "  ";
		
	}
	
	cout <<endl;
	
	for (int i =0; i < 100000; i ++){
		
		cout << i << "  ";
		if (i == 115){
			break;
		}
		
	}
cout << endl;
cout << endl;

for (int i =0; i < 10; i ++){
	
	if (i ==5 || i == 7){
		
		continue;
	}
		
		cout << i << "  ";
		
	}
	cout << endl;
	
system("pause");
return 0;
}