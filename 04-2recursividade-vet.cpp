#include <iostream>
#include "biblioteca.h"

using namespace std;

int pares(int vet[], int n){
   
    if(n == 0)
    {
      if (vet[n]%2 == 0) return 1;
      else return 0;
    }

    if (vet[n]%2 == 0) 
        int soma = pares(vet, n-1) + 1;
    else 
        int soma = pares(vet, n-1) + 0;
    
}

int main() 
{
    int n;
    cin >> n;

    int *p = new int[n];

    lerVetorInt(p, n);
    cout << pares(p, n-1);

    return 0;
}