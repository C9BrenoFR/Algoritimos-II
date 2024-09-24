#include "Prova.h"

Prova::Prova()
{
    cout << "Criando prova" << endl;
    cout << "Numero de questoes: ";
    cin << n;
    *notasQuestoes = new double[n];
    notaFinal = 0;
}

Prova::~Prova()
{
    // implemente o destrutor aqui
    cout << "Destruindo prova" << endl;
}

void Prova::leNotas()
{
    for(int i = 0; i < n;i++){
        cout << "Digite a " << i + 1 << " nota:";
        cin >> *notasQuestoes[i];
    }

}

void Prova::calculaNotaFinal()
{
    for(int i = 0; i < n;i++)
        notaFinal += *notasQuestoes[i];
}

double Prova::obtemNotaFinal(){
    return notaFinal;
}

