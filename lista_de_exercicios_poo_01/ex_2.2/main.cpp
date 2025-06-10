#include <iostream>
using namespace std;

class MatrizQuadrada
{
private:
    int** dados;
    int ordem;

public:
    MatrizQuadrada(int n)
    {
        ordem = n;
        dados = new int*[ordem];
        for (int i = 0; i < ordem; i++)
            dados[i] = new int[ordem];
    }

    ~MatrizQuadrada()
    {
        for (int i = 0; i < ordem; i++)
            delete[] dados[i];
        delete[] dados;
    }

    void preencher()
    {
        for (int i = 0; i < ordem; i++)
        {
            for (int j = 0; j < ordem; j++)
            {
                cout << "Digite o elemento [" << i << "][" << j << "]: ";
                cin >> dados[i][j];
            }
        }
    }

    int somaDiagonalPrincipal()
    {
        int soma = 0;
        for (int i = 0; i < ordem; i++)
            soma += dados[i][i];
        return soma;
    }

    int somaDiagonalSecundaria()
    {
        int soma = 0;
        for (int i = 0; i < ordem; i++)
            soma += dados[i][ordem - 1 - i];
        return soma;
    }
};

int main()
{
    int n;

    cout << "Digite a ordem da matriz quadrada: ";
    cin >> n;

    MatrizQuadrada matriz(n);
    matriz.preencher();

    cout << "Soma da diagonal principal eh: " << matriz.somaDiagonalPrincipal() << endl;
    cout << "Soma da diagonal secundaria eh: " << matriz.somaDiagonalSecundaria() << endl;

    return 0;
}
