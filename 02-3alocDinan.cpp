#include <iostream>

using namespace std;

int* pares(int n, int x[])
{
    int m = 0, p = 0;

    if ((n%2) == 0)
    {
        m = (n/2);
    }else{
        m = ((n/2)+1);
    }
    
    int *pt_pares = new int[m];

    for (int i = 0; i < n; i++)
    {
        if ((i%2) == 0)
        {
            pt_pares[p] = x[i];
            p++;
        }   
    }

    return pt_pares;
}

int main() 
{
    int n, m;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    cout << endl;
    int *pt_vet = new int[n];

    if ((n%2) == 0)
    {
        m = (n/2);
    }else{
        m = ((n/2)+1);
    }

    for (int i = 0; i < n; i++)
    {
        cout << endl << "Digite o valor do vetor na posição " << i << ": ";
        cin >> pt_vet[i];
    }

    cout << endl;

    pt_vet = pares(n, pt_vet);

    cout <<"valores dos indices pares do vetor : ";

    for (int i = 0; i < m; i++)
    {
        cout << pt_vet[i] << endl;
    }
    
    delete[] pt_vet;

    return 0;
}