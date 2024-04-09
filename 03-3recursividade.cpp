#include <iostream>

using namespace std;

void decrescente(int n)
{
    cout << n << " ";

    if( n == 0)
    {
        return;
    }else
    {
        decrescente(n-1);
    }
}

int main() 
{
    cout << "Digite um numero inteiro: ";
    int n;
    cin >> n;

    decrescente(n);
}