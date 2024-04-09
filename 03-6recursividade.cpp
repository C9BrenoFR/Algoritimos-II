#include <iostream>

using namespace std;

float harmonico(int n)
{
    if(n == 1)
    {
        return 1;
    }else
    {
        return 1.0/n + harmonico(n-1);
    }
}

int main() 
{
    int n;
    cout << "Digite um numero inteiro: ";
    cin >> n;
    cout << "O numero harmonico de " << n << " e " << harmonico(n) << endl;

    return 0;
}