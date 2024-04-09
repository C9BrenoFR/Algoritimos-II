#include <iostream>

using namespace std;

void incremento(int a, int b, int inc)
{
    if(a > b)
    {
        return;
    }
    cout << a << " ";
    incremento(a+inc, b , inc);
}

int main() 
{
    int a, b, inc;

    cout << "Digite os dois numeros do intervalo e o incremento: ";

    cin >> a >> b >> inc;

    incremento(a, b, inc);

    return 0;
}