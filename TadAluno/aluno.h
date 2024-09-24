#include <string>

class Aluno
{
    private:
        std::string matricula, nome; 
        int idade, qtdNotas;
        double *notas;

    public:
        void definirAluno();
        void imprimirAluno();
        bool foiAprovado();
        double calcularMedia();
};