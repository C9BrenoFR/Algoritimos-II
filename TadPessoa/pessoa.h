#include <string>

class Pessoa
{
    private:
        std::string *nome = new std::string;
        std::string *cpf = new std::string;
        int *idade = new int;
    public:
        Pessoa(std::string n, std::string c, int i);
        ~Pessoa();
        bool ehMaior();
        bool cpfIgual(std::string c);
        std::string getNome();
        std::string getCpf();
};