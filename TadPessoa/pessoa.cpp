#include "pessoa.h"
#include <string>
#include <iostream>

using namespace std;

Pessoa::Pessoa(string n, string c, int i){
    cout << "Criando pessoa" << endl;
    *nome = n;
    *cpf = c;
    *idade = i;
}

Pessoa::~Pessoa(){
    cout << "Destruindo pessoa" << endl;
    delete nome;
    delete cpf;
    delete idade;
}

bool Pessoa::ehMaior(){
    if(*idade >= 18)
        return true;
    return false;
}
bool Pessoa::cpfIgual(string c){
    if(*cpf == c)
        return true;
    return false;
}

string Pessoa::getNome(){
    return *nome;
}

string Pessoa::getCpf(){
    return *cpf;
}