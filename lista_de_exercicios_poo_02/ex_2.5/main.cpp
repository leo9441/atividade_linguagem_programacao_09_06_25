#include <iostream>
#include <iomanip>
using namespace std;

class Venda
{
private:
    double precoUnitario;
    int quantidade;
    double dinheiroRecebido;

public:
    void setDados(double preco, int qtd, double dinheiro)
    {
        precoUnitario = preco;
        quantidade = qtd;
        dinheiroRecebido = dinheiro;
    }

    double calcularTroco() const
    {
        double total = precoUnitario * quantidade;
        return dinheiroRecebido - total;
    }
};

int main()
{
    Venda v;
    double preco;
    int qtd;
    double dinheiro;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> qtd;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    v.setDados(preco, qtd, dinheiro);

    cout << fixed << setprecision(2);
    cout << "TROCO = " << v.calcularTroco() << endl;

    return 0;
}

