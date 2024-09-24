#include <iostream>
#include "Aluno.h"
#include "Prova.h"

using namespace std;

int main()
{
    cout << "ALGORITMOS II - AULA PRATICA 11\n" << endl;

    // ------------------------------------------------------------------------
    // EXERCICIO 1
    // ------------------------------------------------------------------------
    Aluno a("Carlos", "202365123AB");

    // leitura das notas do aluno
    a.leNotas();
    // calculo da media do aluno
    double m = a.calculaMedia();

    cout << "Media do aluno: " << m << endl;

    cout << "Digite a idade do aluno: ";
    a.setIdade();

    cout << "Digite a matricula do aluno: ";
    a.setMatricula();

    cout << "Idade do aluno: " << a.getIdade() << endl;
    cout << "Matricula do aluno: " << a.getMatricula() << endl;

    a.setFrequencia();

    a.relatorio();

    return 0;
}
