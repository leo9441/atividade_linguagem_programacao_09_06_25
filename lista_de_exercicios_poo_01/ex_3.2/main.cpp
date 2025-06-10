#include <iostream>
using namespace std;

class ValorContainer
{
private:
    int valor;

public:
    void setValor(int v)
    {
        valor = v;
    }

    int getValor()
    {
        return valor;
    }

    static void trocarValores(ValorContainer &refA, ValorContainer &refB)
    {
        int temp = refA.valor;
        refA.valor = refB.valor;
        refB.valor = temp;
    }
};

int main()
{
    ValorContainer objA, objB;
    int valA, valB;

    cout << "Digite o valor para objA: ";
    cin >> valA;
    cout << "Digite o valor para objB: ";
    cin >> valB;

    objA.setValor(valA);
    objB.setValor(valB);

    cout << "Antes da troca:\n";
    cout << "objA.valor = " << objA.getValor() << endl;
    cout << "objB.valor = " << objB.getValor() << endl;

    ValorContainer::trocarValores(objA, objB);

    cout << "Depois da troca:\n";
    cout << "objA.valor = " << objA.getValor() << endl;
    cout << "objB.valor = " << objB.getValor() << endl;

    return 0;
}
