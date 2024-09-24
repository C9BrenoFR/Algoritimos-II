#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    // 2: abrir e ler o arquivo do exercicio anterior.
    ifstream file;
    int number;

    file.open("number.txt", ios::in);
    if (!file) return 1;

    file >> number;
    cout << number;

    return 0;
}