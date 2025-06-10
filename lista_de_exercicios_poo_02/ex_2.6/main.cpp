#include <iostream>
#include <iomanip>
using namespace std;

class Circulo
{
private:
    double raio;
    const double PI = 3.14159;

public:
    void setRaio(double r)
    {
        raio = r;
    }

    double calcularArea() const
    {
        return PI * raio * raio;
    }
};

int main()
{
    Circulo c;
    double raio;

    cout << "Digite o valor do raio do circulo: ";
    cin >> raio;

    c.setRaio(raio);

    cout << fixed << setprecision(3);
    cout << "AREA = " << c.calcularArea() << endl;

    return 0;
}

