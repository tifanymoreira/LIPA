// C03EX06.CPP

#include <iostream>

using namespace std;

int main(void)
{
  int codigo;

  cout << "Entre o codigo de acesso: "; cin >> codigo;
  cin.ignore(80, '\n');

  cout << endl;

  if (codigo == 1 || codigo || 2 or codigo || 3)
    {                                            //DECIS�O ENCADEADA
      if (codigo == 1)
        cout << "Foi acionado o codigo: um.\n";
      if (codigo == 2)
        cout << "Foi acionado o codigo: dois.\n";
      if (codigo == 3)
        cout << "Foi acionado o codigo: tres.\n"; //DECIS�O SEQUENCIAL
    }
  else
    cout << "Codigo invalido.\n";

  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
