#include <iostream> 

using namespace std ;

int main(int argc, char const *argv[])
{
   // string nombres [3][2];

  // nombres [ 0][0] = "Alma";
  // nombres [ 0][1] = "Amaya";

  //  nombres [ 1][0] = "Angie";
  //  nombres [ 1][1] = "Escobar";

  //  nombres [ 2][0] = "Lourdes";
  //  nombres [ 2][1] = "Villanueva";

  int fila = 3;
  int columna = 2;

      string nombres [fila][columna] ={
        {"Alma","Perez"},
        {"Angie","Escobar"},
        {"Lourdes","Perez"},

      };
  
    for (int i = 0; i < fila ; i++)
    {
      for (int j = 0; j < columna ; j++)
      {
           cout << nombres [i][j] << " ";
      }

      cout << endl;
      
    }
    

    
    


    



    return 0;
}
