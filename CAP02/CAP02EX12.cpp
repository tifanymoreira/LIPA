//C02EX11.CPP

#include <iostream>

using namespace std;

int main (void)
{
    bool x;

    cout << boolalpha; //apresentar� os resultados de forma alfab�tica.

    x = true;
    cout << "Valor X como verdadeiro...:" << x << endl;

    x = false;
    cout << "Valor X como falso........:" << x << endl;

    cout << noboolalpha;

    x = true;
    cout << "Valor X como verdadeiro"


    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;
}

