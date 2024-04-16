#include <iostream>
#include "biblioteca.h"

using namespace std;

int iguais(int vet1[], int vet2[], int n)
{   
    if(n == 0)
    {
        return vet1[n] == vet2[n] ? -1 : n;
    }
    return vet1[n] == vet2[n] ? iguais(vet1, vet2, n-1) : n;
}

int main() 
{
    int n;
    cin >> n;

    int *vet1 = new int[n];
    int *vet2 = new int[n];

    lerVetorInt(vet1, n);
    lerVetorInt(vet2, n);

    cout << iguais(vet1, vet2, n-1);

    return 0;
}