#include "aluno.cpp"
#include <string>
#include <iostream>

using namespace std;

int main(){

    Aluno aluno;

    aluno.definirAluno();
    aluno.imprimirAluno();
    cout << (aluno.foiAprovado() ? "Aprovado" : "Reprovado") << endl;

    return 0;
}