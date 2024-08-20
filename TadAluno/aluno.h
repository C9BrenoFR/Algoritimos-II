class Aluno
{
    private:
        int matricula, idade, qtdNotas;
        double *notas;

    public:
        void definirAluno();
        void imprimirAluno();
        bool foiAprovado();
        double calcularMedia();
};