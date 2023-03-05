//Calcula o MDC entre dois valores fornecidos pelo usuario
#include <iostream>
#include <locale>
using namespace std;

int mdc (int n1, int n2){
    if (n1 > n2){
        mdc(n1 - n2, n2);
    }
    else if (n1 < n2){
        mdc(n2 - n1, n1);
    }
    else if (n1 == n2){
        return n2;
    }
}




int main () {
setlocale (LC_ALL, "portuguese");
 int n1, n2;

cout << "Insira o primeiro n�mero" << endl;
cin >> n1;
cout << " Insira o segundo n�mero " << endl;
cin >> n2;
cout << " o MDC � igual a:" << mdc (n1, n2) << endl;


}
