#include <iostream> 

using namespace std ;

int main(int argc, char const *argv[])
{
    string nombres [3][2];

    nombres [ 0][0] = "Alma";
    nombres [ 0][1] = "Amaya";

    nombres [ 1][0] = "Angie";
    nombres [ 1][1] = "Escobar";

    nombres [ 2][0] = "Lourdes";
    nombres [ 2][1] = "Villanueva";

    for (int i = 0; i < 3 ; i++)
    {
      for (int j = 0; j < 2; j++)
      {
           cout << nombres [i][j] << " ";
      }

      cout << endl;
      
    }
    

    
    


    



    return 0;
}
