// imprime todos os divisores de um numero inteiro positivo
fornecido pelo usuário
#include <iostream>
#include <locale>
using namespace std;
bool divisor(int, int);

int main()
{
    setlocale (LC_ALL, "portuguese");
    int n, contador;
    cout << "Informe um n�mero inteiro positivo para saber seus divisores: ";
    cin >> n;

    for (contador = n; contador >= 1; contador = contador - 1)
    {
        if (divisor(n, contador) == true)
        {

            cout << contador << " ";
        }
    }
    return 0;
}
bool divisor(int n, int contador)
{
    if (n % contador == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
