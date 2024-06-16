//CAP04EX1A.CPP

#include <iostream>

using namespace std;

int main ()
{
    int a, b, r;
    char RESP;

    setlocale(LC_ALL, "Portuguese_BRAZIL.1252");

    do
    {

        cout << "Entre o valor de A: "; cin >> a;
        cout << endl;
        cout << "Entre o valor de B: "; cin >> b;
        cout << endl;
        cin.ignore(80,'\n');

            if (a > b)
                r = a - b;
            else
                r= b - a;


        cout << "O valor da diferença é de: " << r;
        cout << endl << endl;

        cout << "Deseja continuar? Tecle [S] para sim, ou qualquer tecla para não";
        cout << endl;
        cin.get(RESP);
        cout << endl << endl;
    }

    while (RESP == 'S' || RESP == 's');

        cout << endl;

        cout << "Tecle <ENTER> para encerrar.";
        cin.get();

    return 0;

}
