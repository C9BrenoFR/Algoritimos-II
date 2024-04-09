#include <iostream>
#include <cmath>

using namespace std;

float soma(float x, int n){
    if(n == 1)
    {
        return x;
    }else{
        return (pow(x, n))/n + soma(x, n-1);
    }
}

int main() 
{
    int n, x;
    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de n: ";
    cin >> n;

    cout << "Soma: " << soma(x, n) << endl;

    return 0;
}