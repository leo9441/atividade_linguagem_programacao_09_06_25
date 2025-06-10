#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class VerificarPalindromo
{
public:
    bool palindromo(const string &texto)
    {
        string filtrado;

        for (char c : texto)
        {
            if (!isspace(c))
            {
                filtrado += tolower(c);
            }
        }

        int inicio = 0;
        int fim = filtrado.size() - 1;

        while (inicio < fim)
        {
            if (filtrado[inicio] != filtrado[fim])
            {
                return false;
            }
            inicio++;
            fim--;
        }
        return true;
    }
};

int main()
{
    VerificarPalindromo verificar;
    string palavra;

    cout << "Digite uma palavra ou frase: ";
    getline(cin, palavra);

    if (verificar.palindromo(palavra))
    {
        cout << "Eh palindromo\n";
    }
    else
    {
        cout << "Nao eh palindromo\n";
    }

    return 0;
}
