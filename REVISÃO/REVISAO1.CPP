//CAP03EX1A

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    float F, C;


    cout << setprecision(2);
    cout << setiosflags(ios::right);
    cout << setiosflags(ios::fixed);

    cout << "Entre a temperatura em Celsius: "; cin >> C;
    cin.ignore (80,'\n');

    F = C * 9 / 5 + 32;

    cout << "A temperatura em Fahrenheit é de: ";
    cout << setw(8) << F << endl;

    cout << "Tecle <ENTER> para encerrar";
    cin.get();
    return 0;

}
