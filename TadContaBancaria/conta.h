
class Conta
{
private:
    double *saldo;
public:
    Conta(int valor);
    ~Conta();
    void sacar(int valor);
    void depositar(int valor);
    double getSaldo();
};

