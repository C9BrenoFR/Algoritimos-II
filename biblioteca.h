#include <iostream>
#include <cstdlib>

using namespace std;

void lerVetorInt(int *vet, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }
    cout << endl;
}

void imprimirVetorInt(int *vet, int n)
{
    cout << "vetor de " << n << " numeros :";
    for (int i = 0; i < n; i++)
    {
        cout << vet[i] << " ";
    }
    cout << endl;
}

int* autoVetorInt(int n)
{
    int* vet = new int[n];
    for (int i = 0; i < n; i++)
    {
        *(vet + i) = rand() % 100 + 1;
    }
    return vet;
}