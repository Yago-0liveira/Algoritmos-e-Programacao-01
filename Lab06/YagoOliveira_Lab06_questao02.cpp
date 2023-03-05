/*funcao que recebe dois numeros inteiros positivos m e n e retorna true se n e divisor
de m e false, caso contrario.*/
#include <iostream>
#include <locale>
using namespace std;

bool divisor(int, int);

int main()
{
    setlocale (LC_ALL, "portuguese");
    int n, m;

    cout << "Escolha dois valores inteiros para saber se o primeiro � divisor do segundo: " << endl;
    cout << "Digite o primeiro n�mero: " << endl;
    cin >> n;
    cout << "Digite o segundo n�mero: " << endl;
    cin >> m;

    if (n < 0 || m < 0){
        cout << "N�mero inv�lido" << endl;
        return 1;
    }
    else if (n == 0){
        cout << "O n�mero " << n << " n�o � divisor de " << m << endl;
        return 0;
    }

    switch(divisor(m, n))
    {
        case true:
            cout << "O n�mero "<< n << " � divisor de " << m << endl;
            break;
        case false:
            cout << "O n�mero " << n << " n�o � divisor de " << m << endl;
    }

    return 0;
}

bool divisor(int x, int y)
{
    if (x % y == 0){
        return true;
    }
    else{
        return false;
    }
}
