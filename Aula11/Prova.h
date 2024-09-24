#ifndef PROVA_H
#define PROVA_H

#include <iostream>
#include <string>

using namespace std;

class Prova
{
  private:
    int n;
    double *notasQuestoes;
    double notaFinal;

  public:
    Prova(int nq);
    ~Prova();
    void leNotas();
    void calculaNotaFinal();
    double obtemNotaFinal();
};

#endif // PROVA_H
