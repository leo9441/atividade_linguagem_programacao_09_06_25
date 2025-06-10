#include <iostream>
using namespace std;

class Soma
{
private:
    int x, y;

public:
    void setValores(int a, int b)
    {
        x = a;
        y = b;
    }

    int calcular() const
    {
        return x + y;
    }
};

int main()
{
    Soma s;
    int x, y;

    cout << "Digite o valor de X: ";
    cin >> x;
    cout << "Digite o valor de Y: ";
    cin >> y;

    s.setValores(x, y);

    cout << "SOMA = " << s.calcular() << endl;

    return 0;
}

