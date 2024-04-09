#include <iostream>

using namespace std;

int main() {

    int *ptr;

    cout << ptr << endl;

    int x;
    
    cout << "Digite um numero para x: " << endl;
    cin >> x;

    ptr = &x;

    cout << "O valor de x é: " << *ptr << endl;
    cout << "A posição de x é:" << ptr << endl;

    *ptr *=10;

    cout << "O valor de x agora é: " << *ptr << endl;

    ptr+=10;

    cout << "o valor de ptr agora é: " << ptr << endl;

    return 0;
}