//CAP04EX1C

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    float n1, n2, n3, n4, m;

        cout << setprecision(2);
        cout << setiosflags(ios::right);
        cout << setiosflags(ios::fixed);
        setlocale (LC_ALL, "Portuguese_BRAZIL.1252");

            cout << "Insira a N1: "; cin >> n1; cout << endl;
            cout << "Insira a N2: "; cin >> n2; cout << endl;
            cout << "Insira a N3: "; cin >> n3; cout << endl;
            cout << "Insira a N4: "; cin >> n4; cout << endl;
            cin.ignore(80,'\n');

                m = (n1 + n2 + n3 + n4) / 4;

                if (m >= 5) {
                    cout << "Aprovado! A sua média foi de: "<< m << endl;
                }
                else {
                    cout << "Reprovado. A sua média foi de: " << m << endl;
                }
        cout << "Tecle <ENTER> para encerrar.";
        cin.get();

    return 0;

}
