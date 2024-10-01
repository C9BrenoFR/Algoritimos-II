class Matriz
{
private:
    int* vet;
    int nl, nc;
    int getInd(int i, int j);
public:
    Matriz(int l, int c);
    ~Matriz();
    void set(int i, int j, int val);
    int get(int i, int j);
    void imprime();
    int maior();
    Matriz transposta();
};

