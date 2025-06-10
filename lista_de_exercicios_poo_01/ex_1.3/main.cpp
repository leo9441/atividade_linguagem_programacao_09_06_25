#include <iostream>
using namespace std;

class Fatorial
{
public:
    int calcular(int n)
    {
        if (n <= 1)
            return 1;
        else
            return n * calcular(n - 1);
    }
};

int main()
{
    Fatorial f;
    int num;

    cout << "Digite um numero inteiro nao negativo: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Numero invalido" << endl;
        return 1;
    }

    cout << "Fatorial de " << num << " eh: " << f.calcular(num) << endl;

    return 0;
}
