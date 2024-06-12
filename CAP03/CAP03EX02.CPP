//CAP03EX01.CPP

#include <iostream>

using namespace std;

int main (void)
{
    int a, b, r;

    cout << "Entre o valor de <A>"; cin >> a;
    cin.ignore(80,'\n');
    cout << "Entre o valor de <B>"; cin >> b;
    cin.ignore(80,'\n');

    cout << "\n";


    if (int r=a+b; r > 10)
        cout << "Resultado = " << r << endl << endl;

    cout << "Tecle <Enter> para encerrar..." << endl;
    cin.get();
    return 0;


}
