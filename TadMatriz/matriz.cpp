#include "matriz.h"
#include <iostream>

using namespace std;

Matriz::Matriz(int l, int c){
    cout << "Criando matriz..." << endl << endl;
    nl = l;
    nc = c;
    vet = new int[nl*nc];
}

Matriz::~Matriz(){
    cout << endl << "Deletando matriz..." << endl;
    delete[] vet;
}

int Matriz::getInd(int i, int j){
    if(i > nl || j > nc)
        return -1;
    return i * nl + j;
}

void Matriz::set(int i, int j, int val){
    int ind = getInd(i, j);
    if(ind < 0)
        exit(1);
    *(vet + ind) = val;
}

int Matriz::get(int i, int j){
    int ind = getInd(i, j);
    if(ind < 0)
        exit(1);
    return *(vet + ind);
}

void Matriz::imprime(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << this->get(i, j) << " ";
        }
        cout << endl;
    }
}

int Matriz::maior(){
    int maior = *(vet);
    
    for (int i = 1; i < nl*nc; i++)
    {
        if(maior < *(vet + i))
            maior = *(vet + i);
    }
    
    return maior;
}     

Matriz Matriz::transposta(){
    Matriz transposta = Matriz(nc, nl);

    for (int i = 0; i < nc; i++)
    {
        for (int j = 0; j < nl; j++)
        {
            transposta.set(i, j, this->get(j, i));
        }
        
    }
    
    return transposta;
}