//funcao que recebe um valor inteiro e verifica se o valor e positivo, negativo ou zero.
#include <iostream>
#include <locale>
using namespace std;

int verifyNegativeOrPositive(int);

int main()
{
    setlocale (LC_ALL, "portuguese");
    int num;

    cout << "Digite um n�mero ";
    cin >> num;

    switch (verifyNegativeOrPositive(num)){
        case 1:
            cout << ">0";
            break;
        case -1:
            cout << "<0";
            break;
        default:
            cout << "=0";
            break;
    }


    return 0;
}

int verifyNegativeOrPositive(int num){
    if(num < 0){
        return -1;
    } else if (num > 0){
        return 1;
    } else {
        return 0;
    }
}
