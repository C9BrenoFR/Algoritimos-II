#include <iostream>

using namespace std;

float prod(int n, float x[], float y[])
{
    float escalar = 0;

    for (int i = 0; i < n; i++)
    {
        escalar += x[i] * y[i];
    }

    return escalar;
    
}

int main() 
{
    int n;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    cout << endl;

    float *pt_x = new float[n];
    float *pt_y = new float[n];

    for (int i = 0; i < n; i++)
    {
        cout << endl << "Digite o valor do primeiro vetor na posição " << i << ": ";
        cin >> pt_x[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << endl << "Digite o valor do segundo vetor na posição " << i << ": ";
        cin >> pt_y[i];
    }

    cout << endl << "O produto escalar dos vetores é: " << prod(n, pt_x, pt_y);

    delete[] pt_x;
    delete[] pt_y;
    
    return 0;
}

