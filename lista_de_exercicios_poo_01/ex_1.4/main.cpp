#include <iostream>
using namespace std;

class ConversorTemperatura
{
public:
    double celsiusParaFahrenheit(double c)
    {
        return (c * 9.0 / 5.0) + 32.0;
    }

    double fahrenheitParaCelsius(double f)
    {
        return (f - 32.0) * 5.0 / 9.0;
    }
};

int main()
{
    ConversorTemperatura conv;
    int opcao;
    double temp, resultado;

    cout << "Escolha a conversao:\n";
    cout << "1 - Celsius para Fahrenheit\n";
    cout << "2 - Fahrenheit para Celsius\n";
    cout << "Opcao: ";
    cin >> opcao;

    if (opcao == 1)
    {
        cout << "Digite a temperatura em Celsius: ";
        cin >> temp;
        resultado = conv.celsiusParaFahrenheit(temp);
        cout << temp << " graus Celsius eh igual a " << resultado << " graus Fahrenheit.\n";
    }
    else if (opcao == 2)
    {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> temp;
        resultado = conv.fahrenheitParaCelsius(temp);
        cout << temp << " graus Fahrenheit eh igual a " << resultado << " graus Celsius.\n";
    }
    else
    {
        cout << "Opcao invalida.\n";
    }

    return 0;
}
