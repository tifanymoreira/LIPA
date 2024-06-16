//CAP03EX1C

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    float V, R, A;

        cout << setprecision(2);
        cout << setiosflags(ios::right);
        cout << setiosflags(ios::fixed);

        cout << "Entre o valor do raio: "; cin >> R;
        cout << endl;
        cout << "Entre o valor da altura: "; cin >> A;
        cout << endl;
        cin.ignore(80,'\n');

            V = 3.14159 * pow(R,2) * A;

            cout << "O Valor do volume foi de: ";
            cout << setw(8) << V << endl;

            cout << "Tecle <ENTER> para encerrar.";
            cin.get();

    return 0;

}
