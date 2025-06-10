#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Pessoa
{
private:
    string nome;
    int idade;

public:
    void setNome(const string& n) { nome = n; }
    void setIdade(int i) { idade = i; }

    string getNome() const { return nome; }
    int getIdade() const { return idade; }
};

int main()
{
    Pessoa p1, p2;
    string nome;
    int idade;

    cout << "Dados da primeira pessoa:\n";
    cout << "Nome: ";
    getline(cin, nome);
    cout << "Idade: ";
    cin >> idade;
    cin.ignore(); // limpar buffer

    p1.setNome(nome);
    p1.setIdade(idade);

    cout << "Dados da segunda pessoa:\n";
    cout << "Nome: ";
    getline(cin, nome);
    cout << "Idade: ";
    cin >> idade;

    p2.setNome(nome);
    p2.setIdade(idade);

    double media = (p1.getIdade() + p2.getIdade()) / 2.0;

    cout << fixed << setprecision(1);
    cout << "A idade media de " << p1.getNome() << " e " << p2.getNome()
         << " eh de " << media << " anos\n";

    return 0;
}

