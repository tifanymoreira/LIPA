//C02EX05.CPP

#include <iostream>

using namespace std;

int main (void)
{
    char nome[50];

    setlocale(LC_ALL, "Portuguese_Brazil.1252"); //Este comando permitirá que a escrita contenha acentuação gráfica, uma vez que o programa estará em PORTUGUÊS.

    cout << "Olá.\n Qual é a sua graça?";
    cin.getline (nome, 50);

    cout << endl;
    cout << "Oi" << nome << ", vamos estudar." << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
