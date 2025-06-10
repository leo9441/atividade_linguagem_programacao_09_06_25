#include <iostream>
#include <iomanip>
using namespace std;

class Medidas
{
private:
    double a, b, c;

public:
    void setValores(double v1, double v2, double v3)
    {
        a = v1;
        b = v2;
        c = v3;
    }

    double areaQuadrado() const
    {
        return a * a;
    }

    double areaTriangulo() const
    {
        return (a * b) / 2.0;
    }

    double areaTrapezio() const
    {
        return ((a + b) * c) / 2.0;
    }
};

int main()
{
    Medidas m;
    double a, b, c;

    cout << "Digite a medida A: ";
    cin >> a;
    cout << "Digite a medida B: ";
    cin >> b;
    cout << "Digite a medida C: ";
    cin >> c;

    m.setValores(a, b, c);

    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO = " << m.areaQuadrado() << endl;
    cout << "AREA DO TRIANGULO = " << m.areaTriangulo() << endl;
    cout << "AREA DO TRAPEZIO = " << m.areaTrapezio() << endl;

    return 0;
}

