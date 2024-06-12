//TREINO01.CPP

#include <iostream>

using namespace std;

int main (void)
{
    int a, b, r;

    cout << "Insira o valor de <A>: "; cin >> a;
    cout << endl;
    cin.ignore(80,'\n');

    cout << "Insira o valor de <B>: "; cin >> b;
    cout << endl;
    cin.ignore(80,'\n');

    r = a + b;

    cout << "O resultado desta soma é de: " << r << endl;

    cout << endl;

    cout << "Tecle <Enter> para encerrar..." << endl;
    cin.get();
    return 0;
}
