//CAP04EX1B.CPP

#include <iostream>

using namespace std;

int main ()
{
    int a;

        cout << "Entre um valor para a: "; cin >> a;
        cout << endl;
        cin.ignore(80,'\n');

            if (a < 0) {

                a = a * -1;
                cout << "O valor de A foi de: " << a << endl;
            }

            else

                cout << "O valor de A foi de: " << a << endl;

        cout << "Tecle <ENTER> para encerrar." << endl;
        cin.get();

    return 0;
}
