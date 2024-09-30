/*
TAD Pessoa
Implemente um TAD para modelar uma pessoa com nome, idade e CPF. O TAD deve fornecer as seguintes operações:

Inicializar uma pessoa.
Verificar se duas pessoas têm o mesmo CPF.
Calcular se uma pessoa é maior de idade (18 anos ou mais).
*/

#include "pessoa.cpp"
#include <iostream>

int main(){
    Pessoa pessoa1 = Pessoa("Breno", "225.146.976-11", 19);
    Pessoa pessoa2 = Pessoa("Aurea", "225.146.976-11", 20);
    Pessoa pessoa3 = Pessoa("Esthefany", "012.869.745-26", 9);

    cout << pessoa1.getNome();
    if (pessoa1.ehMaior())
        cout << " e de maior" << endl;
    else
        cout << " nao e de maior" << endl;
    
    cout << pessoa3.getNome();
    if (pessoa3.ehMaior())
        cout << " e de maior" << endl;
    else
        cout << " nao e de maior" << endl;

    cout << pessoa1.getNome() << " e " << pessoa2.getNome();
    if(pessoa1.cpfIgual(pessoa2.getCpf()))
        cout << " tem o mesmo cpf" << endl;
    else
        cout << " nao tem o mesmo cpf" << endl;
}