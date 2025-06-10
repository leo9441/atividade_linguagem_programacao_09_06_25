#include <iostream>
#include <iomanip>
using namespace std;

class Terreno
{
private:
    double largura;
    double comprimento;
    double valorMetroQuadrado;

public:
    void setLargura(double l) { largura = l; }
    void setComprimento(double c) { comprimento = c; }
    void setValorMetroQuadrado(double v) { valorMetroQuadrado = v; }

    double calcularArea() const
    {
        return largura * comprimento;
    }

    double calcularPreco() const
    {
        return calcularArea() * valorMetroQuadrado;
    }
};

int main()
{
    Terreno t;
    double largura, comprimento, valorM2;

    cout << "Digite a largura do terreno: ";
    cin >> largura;
    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;
    cout << "Digite o valor do metro quadrado: ";
    cin >> valorM2;

    t.setLargura(largura);
    t.setComprimento(comprimento);
    t.setValorMetroQuadrado(valorM2);

    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << t.calcularArea() << endl;
    cout << "Preco do terreno = " << t.calcularPreco() << endl;

    return 0;
}
