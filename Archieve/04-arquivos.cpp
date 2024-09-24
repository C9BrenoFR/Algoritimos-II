#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() 
{
    // 4: abrir um arquivo nomes.txt e escrever mais 5 nomes nele
    ofstream file;

    file.open("nomes.txt", ios::app);
    if (!file) return 1;

    for(int c = 0; c < 5; c++){
        string name;
        getline(cin, name);
        file << endl << name ;
    }

    return 0;
    

}