#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int input (int cant)
{
  if (cant == 1)
    {
      cout << "Presione \"ENTER\" para lanzar el dado 1";
    }
  else
    {
      cout << "Presione \"ENTER\" para lanzar el dado 2";
    }
  cin.ignore ();
}


int tirardado ()
{
  int ran;
  srand (time (0));
  ran = rand () % 6 + 1;
  cout << "Obtuvo " << ran << std::endl;
  return ran;
}
int main ()
{
  int total, primerdado, segundodado;

  input (1);
  primerdado = tirardado ();
  input (2);
  segundodado = tirardado ();
  return 0;
}