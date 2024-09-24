#include "aluno.h"
#include <string>
#include <iostream>

void Aluno::definirAluno()
{
    std::cout << "Digite a matricula: ";
    std::cin >> matricula;

    std::cout << std::endl << "Digite a idade: ";
    std::cin >> idade;

    std::cout << "Quantas notas vão ser digitadas? ";
    std::cin >> qtdNotas;

    notas = new double[qtdNotas];

    for (int i = 0; i < qtdNotas; i++)
    {
        std::cout << "Digite a " 
        << i+1 << " nota: ";

        std::cin >> *(notas+i);
    }
    
}

void Aluno::imprimirAluno()
{
    std::cout << "Matricula: " << matricula << std::endl;
    std::cout << "Idade: " << idade << std::endl;
    for (int i = 0; i < qtdNotas; i++)
    {
        std::cout << i+1 << " nota: " << *(notas+i) << std::endl;
    }
    
}

double Aluno::calcularMedia()
{
    double media = 0;

    for (int i = 0; i < qtdNotas; i++)
        media += *(notas + i);
    return (media/qtdNotas) ;
}

bool Aluno::foiAprovado()
{
    return this->calcularMedia() >= 60 ? true : false;
}
