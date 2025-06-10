#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Funcionario
{
private:
    string nome;
    int id;
    double salario;
    string departamento;

public:
    void setNome(const string& n) { nome = n; }
    void setId(int i) { id = i; }
    void setSalario(double s) { salario = s; }
    void setDepartamento(const string& d) { departamento = d; }

    string getNome() const { return nome; }
    int getId() const { return id; }
    double getSalario() const { return salario; }
    string getDepartamento() const { return departamento; }

    void imprimir() const
    {
        cout << "Nome: " << nome << ", ID: " << id << ", Salario: " << salario << ", Departamento: " << departamento << endl;
    }
};

int main()
{
    vector<Funcionario> funcionarios;
    char escolha;
    do
    {
        Funcionario f;
        string nome, departamento;
        int id;
        double salario;

        cout << "Digite o nome do funcionario: ";
        getline(cin, nome);
        cout << "Digite o ID do funcionario: ";
        cin >> id;
        cout << "Digite o salario do funcionario: ";
        cin >> salario;
        cin.ignore(); // limpar buffer
        cout << "Digite o departamento do funcionario: ";
        getline(cin, departamento);

        f.setNome(nome);
        f.setId(id);
        f.setSalario(salario);
        f.setDepartamento(departamento);

        funcionarios.push_back(f);

        cout << "Deseja cadastrar outro funcionario? (s/n): ";
        cin >> escolha;
        cin.ignore();

    } while (escolha == 's' || escolha == 'S');

    string deptConsulta;
    cout << "Digite o nome do departamento para calcular total de salarios: ";
    getline(cin, deptConsulta);

    double totalSalarios = 0;
    cout << "Funcionarios cadastrados:\n";
    for (const Funcionario& f : funcionarios)
    {
        f.imprimir();
        if (f.getDepartamento() == deptConsulta)
            totalSalarios += f.getSalario();
    }

    cout << "Total de salarios no departamento " << deptConsulta << " eh: " << totalSalarios << endl;

    return 0;
}
