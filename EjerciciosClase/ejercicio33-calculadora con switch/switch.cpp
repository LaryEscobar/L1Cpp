#include <iostream>

using namespace std;

int suma ( int a, int b){

return a + b;

}

int resta ( int a, int b){

return a - b;

}

int multi ( int a, int b){

return a * b;

}

int divi ( int a, int b){

    if ( b == 0){
        throw " No se puede dividir entre 0";
    }

return a / b;

}

int calculadora (int a, int b, char operador){

  switch (operador)
  {
  case '+':
            return suma (a,b);
        break;

    case '-':
            return resta (a,b);
        break;
    case '*':
            return multi (a,b);
        break;
    case '/':
            return divi (a,b);
        break;
  
  default:
      break;
  }

    throw " El operador no existe";
}


int main(int argc, char const *argv[])
{

    int n1 = 0; 
    int n2 = 0;
    int resultado = 0;
    char operador;


    cout << " Ingrese a: " << endl;
    cin >> n1;

    cout << " Ingrese b: " << endl;
    cin >> n2;

    cout << " Ingrese el operador (+, -, *,/ ): " << endl;
    cin >> operador; 


    try
    {
        resultado = calculadora ( n1, n2, operador);
        cout << " Resultado de " << n1 << " " << operador << " " << n2 << " " << " es: ";
        cout << resultado;

    }
    catch(const char* error)
    {
        cout << error;
    }
    
    return 0;
}
