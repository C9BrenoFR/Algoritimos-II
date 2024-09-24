#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>

using namespace std;

class Aluno
{
  public:
    Aluno(string n, string m);
    ~Aluno();

    // exercicio 1
    void leNotas();
    double calculaMedia();

    // operacoes
    void setNome();
    string getNome();

    // exercicio 2
    // implemente aqui

    void setMatricula();
    string getMatricula();

    void setIdade();
    int getIdade();

    void setFrequencia();

    void relatorio();

    // exercicio 6
    // implemente aqui

  private:
    int idade;
    string nome, matricula;
    double notas[7];
    bool frequencia[7];
};

#endif // ALUNO_H
