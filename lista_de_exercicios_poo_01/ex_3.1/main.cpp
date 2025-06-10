#include <iostream>
using namespace std;

class Numero
{
private:
    int valor;

public:
    void setValor(int v)
    {
        valor = v;
    }

    void imprimirValor()
    {
        cout << "Valor do atributo: " << valor << endl;
    }
};

int main()
{
    Numero num;
    int x;

    cout << "Digite um valor inteiro: ";
    cin >> x;

    num.setValor(x);
    num.imprimirValor();

    // Exibir endereco de memoria do objeto (simulando System.identityHashCode)
    cout << "Endereco de memoria do objeto: " << &num << endl;

    return 0;
}
