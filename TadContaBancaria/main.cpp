/*
TAD Conta Bancária
Desenvolva um TAD que modele uma conta bancária com saldo. Ele deve permitir:

Depósito de dinheiro.
Saque de dinheiro (verificando se o saldo é suficiente).
Consultar o saldo.
*/
#include <iostream>
#include "conta.cpp"

using namespace std;

int main(){
    Conta teste = Conta(120);
    cout << "Saldo atual: " << teste.getSaldo() << endl;
    teste.depositar(500);
    cout << "Saldo atual: " << teste.getSaldo() << endl;
    teste.sacar(2000);
    cout << "Saldo atual: " << teste.getSaldo() << endl;
    teste.sacar(500);
    cout << "Saldo atual: " << teste.getSaldo() << endl;
}