/*
1-
Implemente uma operacão do TAD MatrizLin para 
imprimir a matriz. Voce deverá imprimir uma linha da 
matriz em cada linha da tela, com os elementos separados
por uma tabulacão

2-
Implementar uma funcão no programa principal que
determina se uma matriz quadrada  ́e simétrica. 
A funcão deve retornar true ou false.

3-
Implemente uma funcão para encontrar o maior valor da matriz.
*/

#include "matriz.cpp"
#include <iostream>

using namespace std;

bool simetria(Matriz matriz){
    Matriz transposta = matriz.transposta();
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (transposta.get(i,j) != matriz.get(i,j))
                return false;
            
        }
        
    }
    
    return true;
}

int main(){
    Matriz matriz = Matriz(5, 5);

    int val = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz.set(i, j, val++);
        }
        
    }



    cout << "e simetrica: " << simetria(matriz) << endl;

    return 0;
}