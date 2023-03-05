
// le tres numeros e mostra-os em ordem decrescente.
#include <iostream>
#include <locale>
using namespace std;

int main()
{
setlocale (LC_ALL, "portuguese");
int n1, n2, n3;
cout << "Digite o primeiro n�mero:";
cin >> n1;
cout << "Digite o segundo n�mero:";
cin >> n2;
cout << "Digite o terceiro n�mero:";
cin >> n3;
if (n1 >= n2 && n1 >= n3 && n2 >= n3){;
cout << n1 << n2 << n3;
}
if (n1 >= n2 && n1>=n3 && n3 >= n2) {;
cout  << n1 << n3 << n2;
}
if (n2 >= n1 && n2 >= n3 && n1 >= n3) {;
cout  << n2 << n1 << n3;
}
if (n2 >= n1 && n2 >= n3 && n3 >= n1) {;
cout  << n2 << n3 << n1;
}
if (n3 >= n1 && n3 >= n2 && n1 >= n2) {;
cout  << n3 << n1 << n2;
}
if (n3 >= n1 && n3 >= n2 && n2 >= n1 ){;
cout  << n3 << n2 << n1;
}


return 0;
}


