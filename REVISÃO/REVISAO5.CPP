//CAP03EX1E.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    float V, TA, TE, P;

        cout << setprecision(2);
        cout << setiosflags(ios::right);
        cout << setiosflags(ios::fixed);

            cout << "Insira o valor do bem: "; cin >> V;
            cout << endl;
            cout << "Insira o valor da taxa: "; cin >> TA;
            cout << endl;
            cin.ignore(80,'\n');

                P = V + (V * (TA / 100) * TE);

                cout << "O valor da prestação foi de: " << setw(8) << P;
                cout << endl;

            cout << "Tecle <ENTER> para encerrar.";
            cin.get();

    return 0;
}
