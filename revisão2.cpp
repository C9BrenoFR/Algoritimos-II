#include <iostream>
#include "biblioteca.h"

using namespace std;

int sequencia(int n, int* npar, int* nimpar)
{
    if(n == 1)
        cout << n << " ";
    else{
        cout << n << " ";
        if(n%2 == 0)
        {
            (*npar)++;
            sequencia((n/2), npar, nimpar);
        }
        else
        {
            (*nimpar)++;
            sequencia((n *3)+1, npar, nimpar);
        }
    }
    return *npar + *nimpar;
}

int main() 
{
    int* npar = new int;
    int* nimpar = new int;
    int n;

    *npar = 0;
    *nimpar = 0;

    cin >> n;

    int total = sequencia(n, npar, nimpar);

    cout << endl << "Pares: " << *npar << endl
        << "Impares: " << *nimpar << endl
        << "Total: " << total;

    return 0;
}