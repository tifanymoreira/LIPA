// C04EX04.CPP

#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{
  int n, i;
  long int fat;
  char resp {'S'};

  do
    {
      fat = 1;
      i = 1;
      cout << "Programa Fatorial" << endl << endl;
      cout << "Fatorial de que valor: "; cin >> n;
      cin.ignore(80, '\n');

      do
        {
           fat *= i;
           ++i;
        }
      while (i <= n);

      cout << endl;
      cout << "Fatorial de " << n << " = "<< fat << endl;
      cout << endl;

      cout << "Deseja continuar?" << endl;
      cout << "Tecle [S] p/ SIM | outra letra p/ NAO: ";
      cin.get(resp);
      cin.ignore();
      cout << endl;
    }
  while (toupper(resp) == 'S');

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
