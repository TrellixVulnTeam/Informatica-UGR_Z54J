#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>
#include <climits>
#include <cassert>

//generador de ejemplos para el problema de sumas parciales de elementos consecutivos. Simplemente se genera un vector de n�meros enteros aleatorios entre -50 y 50 

double uniforme() //Genera un n�mero uniformemente distribuido en el
                  //intervalo [0,1) a partir de uno de los generadores
                  //disponibles en C.
{
 int t = rand();
 double f = ((double)RAND_MAX+1.0);
 return (double)t/f;
}

int main(int argc, char * argv[])
{

  if (argc != 2)
    {
      cerr << "Formato " << argv[0] << " <num_elem>" << endl;
      return -1;
    }

  int n = atoi(argv[1]);

  int * T = new int[n];
  assert(T);

srand(time(0));

for (int j=0; j<n; j++) {
    double u=uniforme();
    T[j]= (int) (-51+102*u);
}

for (int j=0; j<n; j++) {cout << T[j] << " ";}
cout << endl;

}