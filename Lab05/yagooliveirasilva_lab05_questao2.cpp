// Devolve o tipo de pulverizacao solicitado, a area a ser pulverizada e imprime o valor total a ser pago.
#include <iostream>
#include <locale>

using namespace std;

int main()
{
setlocale (LC_ALL, "portuguese");
int area;
float preco;
int tipo;
cout << "Bem vindo ao agro � tudo"<<endl;
cout << "Informe a �rea a ser pulverizada em hectares: ";
cin >> area;
cout << "Escolha o tipo de pulveriza��o (de 1 a 5): ";
cin >> tipo;
switch (tipo)
{
case 1:
preco = area * 500;
break;
case 2:
preco = area * 1000;
break;
case 3:
preco = area * 1500;
break;
case 4:
preco = area * 2000;
break;
case 5:
preco = area * 3000;
break;
}
if (area > 100) {
preco = preco - (preco*(5.0/100));
}
if (preco > 75000) {
preco = preco - (preco*(10.0/100));
}
cout << "Valor final = R$" << preco;
return 0;
}

