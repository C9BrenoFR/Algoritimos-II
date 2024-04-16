#include <iostream>

using namespace std;

void lerVetorInt(int vet[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }
    cout << endl;
}

void imprimirVetorInt(int vet[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << vet[i] << " ";
    }
    cout << endl;
}