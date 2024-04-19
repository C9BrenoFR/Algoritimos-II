#include <iostream>
#include "biblioteca.h"

using namespace std;

int func1(int n, int* vet, int val){
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        if (*vet > val)
        {
            cont++;
            cout << "Posicao: " << i;
            cout << " Valor: " << *vet;
            cout << " Endereco: " << vet << endl;
        }
        vet++;
    }
    return cont;
}

int* func2(int n, int* vet, int val, int tam)
{
    int* novoVet = new int[tam];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (*vet > val)
        {
            *(novoVet + j) = *vet;
            j++;
        }
        vet++;
    }
    return novoVet;
}

int main() 
{
    int n, val;

    cin >> n >> val;

    int* vet = autoVetorInt(n);

    int tam = func1(n, vet, val);

    int* novoVet = func2(n, vet, val, tam);

    imprimirVetorInt(vet, n);
    imprimirVetorInt(novoVet, tam);

    return 0;
}