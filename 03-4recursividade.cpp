#include <iostream>

using namespace std;

bool primo(int n, int m)
{
    if(n <= 1)
    {
        return false;
    }else if (m%n == 0 && n != m)
    {
        return false;
    }else if(m == n)
    {
        return true;
    }else
    {
        return primo(n+1, m);
    }
    
}

int main() 
{
    int n;
    cout << "Digite um numero inteiro: ";
    cin >> n;
    if (primo(2, n))
    {
        cout << "O numero " << n << " e primo" << endl;
    }else
    {
        cout << "O numero " << n << " nao e primo" << endl;
    }
    
      
    
}