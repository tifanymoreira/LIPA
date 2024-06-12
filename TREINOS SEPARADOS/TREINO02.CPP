//TREINO02.CPP

#include <iostream>

using namespace std;

int main (void)
{
    char nome[50], curso[60];

    cout << "Ola! Como voce se chama? "; cin >> nome;
    cin.ignore(80, '\n');

    cout << endl;

    cout << "Ola, " << nome << "! Qual o seu curso? "; cin >> curso;
    cin.ignore(50, '\n');

    cout << endl;

    cout << "Que legal, " << nome << "! " << curso << " e um excelente curso!";
    cin.ignore(1000, '\n');

    cout << endl;

    cout << "Tecle <Enter> para encerrar..." << endl;
    cin.get();
    return 0;
}
