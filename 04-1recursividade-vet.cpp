#include <iostream>
#include "biblioteca.h"

using namespace std;

int menor(int vet[], int n){
    if(n == 0)
    {
        return vet[n];
    }

    int x = menor(vet, n-1);

    if(x < vet[n]) return x; 
    else return vet[n];
}

int main() 
{
    int n;
    cin >> n;

    int *p = new int[n];

    lerVetorInt(p, n);
    cout << menor(p, n-1);

    return 0;
}