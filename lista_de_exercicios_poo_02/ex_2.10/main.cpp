#include <iostream>
using namespace std;

class Duracao
{
private:
    int segundos;

public:
    void setSegundos(int s)
    {
        segundos = s;
    }

    void mostrarTempo() const
    {
        int horas = segundos / 3600;
        int resto = segundos % 3600;
        int minutos = resto / 60;
        int seg = resto % 60;

        cout << horas << ":" << minutos << ":" << seg << endl;
    }
};

int main()
{
    Duracao d;
    int segundos;

    cout << "Digite a duracao em segundos: ";
    cin >> segundos;

    d.setSegundos(segundos);

    d.mostrarTempo();

    return 0;
}

