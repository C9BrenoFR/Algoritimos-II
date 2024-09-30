#include "conta.h"
#include <iostream>

using namespace std;

Conta::Conta(int valor){
    cout << "Cirando conta" << endl;
    saldo = new double;
    if(valor > 0)
        *saldo = valor;
    else
        *saldo = 0;
}

Conta::~Conta(){
    cout << "Destruindo conta" << endl;
    delete saldo;
}
void Conta::sacar(int valor){
    if(valor <= *saldo)
        *saldo-= valor;
}
void Conta::depositar(int valor){
    *saldo+= valor;
}
double Conta::getSaldo(){
    return *saldo;
}