// C03EX15.CPP

#include <iostream>

using namespace std;

int main(void)
{
  setlocale(LC_ALL, "Portuguese");

  int n, r4, r5;

  cout << "Entre um numero natural: "; cin >> n;
  cin.ignore(80, '\n');
  cout << endl;

  r4 = n % 4;
  r5 = n % 5;

  if (r4 == 0 and r5 == 0)
    cout << "Resultado = " << n << endl;
  else
    cout << "Valor não é divisível por 4 e 5" << endl;

  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
