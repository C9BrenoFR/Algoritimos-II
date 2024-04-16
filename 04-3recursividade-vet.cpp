#include <iostream>
#include "biblioteca.h"

using namespace std;

bool negativo(int vet[], int n)
{
    if(n == 0)
    {
        return vet[n] < 0 ? true : false;
    }

    return vet[n] < 0 ? true : negativo(vet, n-1);
}

int main() 
{
    int n;
    cin >> n;

    int *p = new int[n];

    lerVetorInt(p, n);
    
    if(negativo(p, n-1) == true)
        cout << "Tem negativo";
    else
        cout << "Nao tem negativo";

    return 0;
}