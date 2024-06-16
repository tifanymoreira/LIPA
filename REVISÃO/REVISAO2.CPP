//CAP03EX1B

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    float C, F;

    cout << setprecision(2);
    cout << setiosflags(ios::right);
    cout << setiosflags(ios::fixed);

    cout << "Entre a temperatura em Fahrenheit: "; cin >> F;
    cin.ignore(80,'\n');

        C = (( F - 32 ) * 5 ) / 9;

    cout << "A temperatura em Celsius é de: ";
    cout << setw(8) << C << endl;

    cout << "Tecle <ENTER> para encerrar.";
    cin.get();
    return 0;
}
