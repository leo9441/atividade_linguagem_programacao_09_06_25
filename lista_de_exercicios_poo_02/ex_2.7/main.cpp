#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Funcionario
{
private:
    string nome;
    double valorPorHora;
    int horasTrabalhadas;

public:
    void setDados(const string& n, double valor, int horas)
    {
        nome = n;
        valorPorHora = valor;
        horasTrabalhadas = horas;
    }

    double calcularPagamento() const
    {
        return valorPorHora * horasTrabalhadas;
    }

    string getNome() const
    {
        return nome;
    }
};

int main()
{
    Funcionario f;
    string nome;
    double valorHora;
    int horas;

    cout << "Nome: ";
    getline(cin, nome);
    cout << "Valor por hora: ";
    cin >> valorHora;
    cout << "Horas trabalhadas: ";
    cin >> horas;

    f.setDados(nome, valorHora, horas);

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << f.getNome() << " deve ser " << f.calcularPagamento() << endl;

    return 0;
}

