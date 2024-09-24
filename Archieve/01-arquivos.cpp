#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    // 1: fazer um arquivo e inserir um numero inteiro pelo teclado nele
    ofstream file;
    int number;

    file.open("number.txt", ios::out);
    if (!file) return 1;

    cin >> number;
    file << number;

    return 0;
    

}