#include "Aluno.h"

Aluno::Aluno(string n, string m)
{
    cout << "Criando aluno" << endl;
    nome = n;
    matricula = m;
}

Aluno::~Aluno()
{
    cout << "Destruindo aluno" << endl;
}

// ----------------------------------------------------------------------------
// Exercicio 1
// ----------------------------------------------------------------------------

void Aluno::leNotas()
{
    for (int i = 0; i < 7; i++)
    {
        cout << "Digite a nota " << i + 1 << ": ";
        cin >> notas[i];
    }

}

double Aluno::calculaMedia()
{
    double media = 0;
    for (int i = 0; i < 7; i++)
    {
        media += notas[i];
    }

    return media/7 ;
}

// ----------------------------------------------------------------------------

void Aluno::setNome()
{
    string novo;
    cin >> novo;
    nome = novo;
}

string Aluno::getNome()
{
    return nome;
}

// ----------------------------------------------------------------------------
// Exercicio 2
// ----------------------------------------------------------------------------

void Aluno::setMatricula()
{
    string novo;
    cin >> novo;
    matricula = novo;
}

string Aluno::getMatricula()
{
    return matricula;
}

void Aluno::setIdade()
{
    int novo;
    cin >> novo;
    idade = novo;
}

int Aluno::getIdade()
{
    return idade;
}

void Aluno::setFrequencia()
{
    for (int i = 0; i < 7; i++)
    {
        int dia;
        do{
        cout << "Disciplina " << i + 1 << "(Digite 1 para presente e 0 para ausente): ";
        cin >> dia;
        }while(dia != 0 && dia != 1 );
        frequencia[i] = dia;
    }
}

void Aluno::relatorio()
{
    cout << "Nome: " << nome << endl;
    cout << "idade: " << idade << endl;
    cout << "Matricula" << matricula << endl;

    for(int i = 0; i < 7; i++)
    {
        cout << "Disciplina " << i + 1 << " :" << endl;
        cout << (frequencia[i] ? "Foi frequente " : "Foi infrequente ");
        cout << (notas[i] >= 60 ? "E aprovado por nota" : "E reprovado por nota" ) << endl;
    }
}

