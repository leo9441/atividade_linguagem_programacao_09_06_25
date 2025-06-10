#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Retangulo
{
private:
    double base;
    double altura;

public:
    void setBase(double b) { base = b; }
    void setAltura(double h) { altura = h; }

    double calcularArea() const
    {
        return base * altura;
    }

    double calcularPerimetro() const
    {
        return 2 * (base + altura);
    }

    double calcularDiagonal() const
    {
        return sqrt(base * base + altura * altura);
    }
};

int main()
{
    Retangulo r;
    double base, altura;

    cout << "Base do retangulo: ";
    cin >> base;
    cout << "Altura do retangulo: ";
    cin >> altura;

    r.setBase(base);
    r.setAltura(altura);

    cout << fixed << setprecision(4);
    cout << "AREA = " << r.calcularArea() << endl;
    cout << "PERIMETRO = " << r.calcularPerimetro() << endl;
    cout << "DIAGONAL = " << r.calcularDiagonal() << endl;

    return 0;
}

