#include <iostream>

using namespace std;

int mod(int x, int y){
    if(x < y)
    {
        return x;
    }else
    {
        return mod(x-y, y);
    }
}

int main() 
{
    int x, y;
    cout << "Digite o dividendo: ";
    cin >> x;
    cout << "Digite o divisor: ";
    cin >> y;
    cout << "O resto da divisao de " << x << " por " << y << " e " << mod(x, y) << endl;

    return 0;
}