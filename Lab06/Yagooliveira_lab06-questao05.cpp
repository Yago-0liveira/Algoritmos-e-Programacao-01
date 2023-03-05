/*Recebe dois valores e imprime os números entre eles (se a < b,  imprime os valores no intervalo [a, b] em ordem
crescente. caso o contrario imprime os valores no intervalo [b, a] em ordem decrescente.)*/
#include <iostream>
#include <locale>
using namespace std;

void funcaoA_B(int, int);
void funcaoB_A(int, int);
void funcaoIguais(int, int);

int main()
{
    setlocale (LC_ALL, "portuguese");
    int a, b;
    cout << "Informe dois n�meros inteiros abaixo: " << endl;
    cout << " Digite o primeiro n�mero: " << endl;
    cin >> a;
    cout << " Digite o segundo n�mero: " << endl;
    cin >> b;
    cout << '\n';

    if (a == b){
        funcaoIguais(a, b);
    }

    else if (a < b){
        funcaoA_B(a, b);
    }

    else if (b < a){
        funcaoB_A(a, b);
    }

    return 0;
}

void funcaoA_B(int x, int y)
{
    for(; x <= y; x++){
        cout << x << " ";
    }
}

void funcaoB_A(int x, int y)
{
    for(; x >= y; x--){
        cout << x << " ";
    }
}

void funcaoIguais(int x, int y)
{
    cout << " Os valores s�o iguais" << endl;
}
