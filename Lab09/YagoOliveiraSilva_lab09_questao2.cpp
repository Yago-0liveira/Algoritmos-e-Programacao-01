// Recebe os valores de X e N e realiza o calculo do seguinte somatorio: 1 + x + 2x + 3x + ... nx
#include <iostream>
using namespace std;

int soma(int x, int n)
{
    if (n == 1){
        return x + 1;
    }
    else{
        return soma(x, n-1) + (x * n);
    }
}

int main()
{
    int a, b;
    cout << "Informe o primeiro valor para realizar o somat�rio" << endl;
    cin >> a;
    cout << "Informe o segundo valor para realizar o somat�rio" << endl;
    cin >> b;
    cout << soma(a, b);
}
