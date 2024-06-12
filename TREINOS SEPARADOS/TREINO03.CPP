//CAP03EX1.CPP

#include <iostream>

using namespace std;

int main (void)
{
    int a, b, c, d;
    int r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12;

    setlocale(LC_ALL, "Portuguese");

    cout << "Insira o valor de <a>: "; cin >> a;
    cin.ignore(80,'\n');

    cout << endl;

    cout << "Insira o valor de <b>: "; cin >> b;
    cin.ignore(80,'\n');

    cout << endl;

    cout << "Insira o valor de <c>: "; cin >> c;
    cin.ignore(80,'\n');

    cout << endl;

    cout << "Insira o valor de <d>: "; cin >> d;
    cin.ignore(80,'\n');

    r1 = a + b;
    r2 = a + c;
    r3 = a + d;
    r4 = b + c;
    r5 = b + d;
    r6 = d + c;
    r7 = a * b;
    r8 = a * c;
    r9 = a * d;
    r10 = b * c;
    r11 = b * d;
    r12 = d * c;

    cout << endl << endl;

    cout << "Confira abaixo os resultados das operações de SOMA entre os valores fornecidos: " << endl;
    cout << "Resultado 1: " << r1 << endl << endl;
    cout << "Resultado 2: " << r2 << endl << endl;
    cout << "Resultado 3: " << r3 << endl << endl;
    cout << "Resultado 4: " << r4 << endl << endl;
    cout << "Resultado 5: " << r5 << endl << endl;
    cout << "Resultado 6: " << r6 << endl << endl;

    cout << endl << endl;

    cout << "Agora confira abaixo os resultados das operações de MULTIPLICAÇÃO entre os valores fornecidos: " << endl;
    cout << "Resultado 1: " << r7 << endl << endl;
    cout << "Resultado 2: " << r8 << endl << endl;
    cout << "Resultado 3: " << r9 << endl << endl;
    cout << "Resultado 4: " << r10 << endl << endl;
    cout << "Resultado 5: " << r11 << endl << endl;
    cout << "Resultado 6: " << r12 << endl << endl;


    cout << "Para encerar tecle <Enter>...";
    cin.get();
    return 0;
}
