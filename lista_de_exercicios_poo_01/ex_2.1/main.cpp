#include <iostream>
using namespace std;

class Matriz
{
private:
    int** dados;
    int linhas;
    int colunas;

public:
    Matriz(int m, int n)
    {
        linhas = m;
        colunas = n;
        dados = new int*[linhas];
        for (int i = 0; i < linhas; i++)
            dados[i] = new int[colunas];
    }

    ~Matriz()
    {
        for (int i = 0; i < linhas; i++)
            delete[] dados[i];
        delete[] dados;
    }

    void preencher()
    {
        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                cout << "Digite o elemento [" << i << "][" << j << "]: ";
                cin >> dados[i][j];
            }
        }
    }

    int maiorElemento()
    {
        int maior = dados[0][0];
        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                if (dados[i][j] > maior)
                    maior = dados[i][j];
            }
        }
        return maior;
    }

    int menorElemento()
    {
        int menor = dados[0][0];
        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                if (dados[i][j] < menor)
                    menor = dados[i][j];
            }
        }
        return menor;
    }
};

int main()
{
    int m, n;

    cout << "Digite o numero de linhas: ";
    cin >> m;
    cout << "Digite o numero de colunas: ";
    cin >> n;

    Matriz matriz(m, n);
    matriz.preencher();

    cout << "Maior elemento da matriz eh: " << matriz.maiorElemento() << endl;
    cout << "Menor elemento da matriz eh: " << matriz.menorElemento() << endl;

    return 0;
}
