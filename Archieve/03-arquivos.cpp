#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() 
{
    // 2: fazer um arquivo nomes.txt e escrever uma string contento um nome nele
    ofstream file;
    string name;

    file.open("nomes.txt", ios::out);
    if (!file) return 1;

    getline(cin, name);
    file << name;

    return 0;
    

}