#include <iostream>
#include <cmath>
#include "biblioteca.h"

using namespace std;

int preencheVet(int vet[], int n)
{
    if(n == 1)
    {
        vet[n-1] = 1;
        return 1;
    }
    vet[n-1] = pow(n , 2) + 1;
    return preencheVet(vet, n-1);
}

int main() 
{
    int n;

    cin >> n;

    int *vet = new int[n];
    preencheVet(vet, n);

    imprimirVetorInt(vet, n);

    return 0;
}