#include <iostream>
#include <iomanip>
using namespace std;

class Carro
{
private:
    int distancia;
    double combustivel;

public:
    void setDados(int d, double c)
    {
        distancia = d;
        combustivel = c;
    }

    double calcularConsumoMedio() const
    {
        return distancia / combustivel;
    }
};

int main()
{
    Carro carro;
    int distancia;
    double combustivel;

    cout << "Distancia percorrida: ";
    cin >> distancia;
    cout << "Combustivel gasto: ";
    cin >> combustivel;

    carro.setDados(distancia, combustivel);

    cout << fixed << setprecision(3);
    cout << "Consumo medio = " << carro.calcularConsumoMedio() << endl;

    return 0;
}

