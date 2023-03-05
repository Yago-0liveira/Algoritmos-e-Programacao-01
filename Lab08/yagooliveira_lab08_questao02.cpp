//imprime os produtos dos valores de mesmo tipo.
#include <iostream>
#include <locale>
using namespace std;

template <class tipo>
tipo produto(tipo x, tipo y){

    return x*y;
}

int main(){
setlocale (LC_ALL, "portuguese");
int x, y;
float m, n;

cout << "Digite 2 n�meros inteiros para saber seu produto" << endl;
cin >> x >> y;

cout << x << " * " << y << " = " << produto(x, y) << endl;

cout << "Digite 2 n�meros reais para saber seu produto" << endl;
cin >> m >> n;

cout << m << " * " << n << " = " << produto(m, n) << endl;

return 0;
}
