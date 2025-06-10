#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Contato
{
private:
    string nome;
    string telefone;
    string email;

public:
    void setNome(const string& n) { nome = n; }
    void setTelefone(const string& t) { telefone = t; }
    void setEmail(const string& e) { email = e; }

    string getNome() const { return nome; }
    string getTelefone() const { return telefone; }
    string getEmail() const { return email; }

    void imprimir() const
    {
        cout << "Nome: " << nome << ", Telefone: " << telefone << ", Email: " << email << endl;
    }
};

int main()
{
    vector<Contato> agenda;
    int opcao;

    do
    {
        cout << "\n1 - Adicionar contato\n2 - Listar contatos\n3 - Buscar contato por nome\n0 - Sair\nOpcao: ";
        cin >> opcao;
        cin.ignore();

        if (opcao == 1)
        {
            if ((int)agenda.size() >= 10)
            {
                cout << "Agenda cheia. Nao eh possivel adicionar mais contatos.\n";
                continue;
            }

            Contato c;
            string nome, telefone, email;

            cout << "Digite o nome: ";
            getline(cin, nome);
            cout << "Digite o telefone: ";
            getline(cin, telefone);
            cout << "Digite o email: ";
            getline(cin, email);

            c.setNome(nome);
            c.setTelefone(telefone);
            c.setEmail(email);

            agenda.push_back(c);
            cout << "Contato adicionado.\n";
        }
        else if (opcao == 2)
        {
            if (agenda.empty())
                cout << "Nenhum contato cadastrado.\n";
            else
            {
                cout << "Contatos na agenda:\n";
                for (const Contato& c : agenda)
                    c.imprimir();
            }
        }
        else if (opcao == 3)
        {
            if (agenda.empty())
            {
                cout << "Nenhum contato cadastrado.\n";
                continue;
            }

            string nomeBusca;
            cout << "Digite o nome para buscar: ";
            getline(cin, nomeBusca);

            bool encontrado = false;
            for (const Contato& c : agenda)
            {
                if (c.getNome() == nomeBusca)
                {
                    cout << "Telefone: " << c.getTelefone() << ", Email: " << c.getEmail() << endl;
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado)
                cout << "Contato nao encontrado.\n";
        }
        else if (opcao != 0)
        {
            cout << "Opcao invalida.\n";
        }
    } while (opcao != 0);

    cout << "Programa encerrado.\n";

    return 0;
}
