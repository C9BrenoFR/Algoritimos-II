#include <iostream>

using namespace std;

int main() 
{
    int n, media = 0;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int *pt_v = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << endl << "Digite o valor da posição " << i << ": ";
        cin >> pt_v[i];

        media += pt_v[i];
    }

    media /= n;

    cout << endl << "A média dos numeros digitados é : " << media;

    delete[] pt_v;

    return 0;
    
}