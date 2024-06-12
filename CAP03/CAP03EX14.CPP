// C03EX14.CPP

#include <iostream>

using namespace std;

int main(void)
{
  char caractere;

  cout << "Entre o caractere de uma vogal: "; cin >> caractere; cin.ignore(80,'\n');


  switch (caractere ) //variável local
    {
      case  'a': cout << "\nLetra: a\n"; break;
      case  'A': cout << "\nLetra: A\n"; break;
      case  'e': cout << "\nLetra: e\n"; break;
      case  'E': cout << "\nLetra: E\n"; break;
      case  'i': cout << "\nLetra: i\n"; break;
      case  'I': cout << "\nLetra: I\n"; break;
      case  'o': cout << "\nLetra: o\n"; break;
      case  'O': cout << "\nLetra: O\n"; break;
      case  'u': cout << "\nLetra: u\n"; break;
      case  'U': cout << "\nLetra: U\n"; break;
    }
  cin.ignore(80, '\n');

  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
