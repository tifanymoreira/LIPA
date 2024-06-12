//TREINO04.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main (void)
{
    float distancia, tempo, velocidade, litros_usados;

    setlocale(LC_ALL, "Portuguese");

    cout << "Insira o valor da <VELOCIDADE>: "; cin >> velocidade;
    cin.ignore(80, '\n');

    cout << endl;

    cout << "Insira o valor do <TEMPO>: "; cin >> tempo;

    distancia = tempo * velocidade;
    litros_usados = distancia / 12;

    cout << endl << endl;

    cout << "Confira os resultados das operações: " << endl;
    cout << "A DISTÂNCIA percorrida foi de: " << distancia << endl;
    cout << "A quantidade de LITROS USADOS foi de: " << litros_usados;
    cout << endl << endl;

    cout << "Tecle <Enter> para encerrar..." << endl;
    cin.get();
    return 0;


}
