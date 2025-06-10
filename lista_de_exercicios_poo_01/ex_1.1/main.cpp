#include <iostream>
using namespace std;

class Calculadora
{
public:
    double soma(double a, double b)
    {
        return a + b;
    }

    double subtracao(double a, double b)
    {
        return a - b;
    }

    double multiplicacao(double a, double b)
    {
        return a * b;
    }

    double divisao(double a, double b)
    {
        return a / b;
    }
};

int main()
{
    Calculadora calcul;

    double num1, num2;

    char operacao;

    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Escolha uma operacao: ";
    cin >> operacao;

    double resultado;

    switch (operacao)
    {
    case '+':
        resultado = calcul.soma(num1, num2);
        break;
    case '-':
        resultado = calcul.subtracao(num1, num2);
        break;
    case '*':
        resultado = calcul.multiplicacao(num1, num2);
        break;
    case '/':
        resultado = calcul.divisao(num1, num2);
        break;
    default:
        cout << "Operacao invalida!\n";
        return 1;
    }

    cout << "Resultado = " << resultado << endl;

    return 0;
}