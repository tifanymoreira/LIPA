#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int NUM_ALUNOS = 10;
    const int NUM_NOTAS = 4;
    char NOME[NUM_ALUNOS][40];
    float NOTAS[NUM_NOTAS], SOMA = 0, MEDIA;

    cout << setprecision(2) << fixed << right;
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    cout << "C�lculo de notas bimestrais." << endl;


    for (int i = 0; i < NUM_ALUNOS; ++i) {
        cout << "Nome do aluno " << i + 1 << ": ";
        cin.ignore();
        cin.getline(NOME[i], 40);


        for (int j = 0; j < NUM_NOTAS; ++j) {
            cout << "Entre o valor da " << j + 1 << " nota: ";
            cin >> NOTAS[j];
            SOMA += NOTAS[j];
        }


        MEDIA = SOMA / NUM_NOTAS;


        if (MEDIA >= 7) {
            cout << "Parab�ns! Voc� foi aprovado(a). Sua m�dia foi de: " << MEDIA << endl;
        } else {
            cout << "Infelizmente voc� foi reprovado(a). A sua m�dia foi de: " << MEDIA << endl;
        }


        cout << "Nome: " << NOME[i] << "M�dia: " << MEDIA << endl;
    }

    cout << "Tecle <ENTER> para encerrar";
    cin.ignore();
    cin.get();

    return 0;
}

