//LABORATORIO FEITO PELA DUPLA ANTONIO ALBERTO SAMPAIO NETO E YAGO OLIVEIRA SILVA
/*programa que pede ao usuario um numero inteiro positivo n e imprime os numeros primos
mais proximos dele (um maior e outro menor que ele).*/
#include <iostream>
#include <locale>
using namespace std;


bool ePrimo (int analise) {

int ver=0;

for ( int teste = analise-1;teste>1;teste--){


    if (analise%teste==0){

        ver++;
    }

}

if (ver>=1){

    return false;
}

else {

   return true;
}
}

void doisPrimos (int x, int &y, int &z){

    y = x-1;
    z = x+1;

    while (ePrimo(y)==false){

        y--;
}
    while (ePrimo(z)==false){

        z++;
    }
}

int main (){

    setlocale(LC_ALL,"portuguese");

    int loop = 1;

    while (loop = 1) {

    int n, menor, maior;

    cout<<"Digite um n�mero inteiro positivo: "<<endl;

    cout<<" "<<endl;

    cin>>n;

    cout<<" "<<endl;

    while (n<0){

    cout<<"N�mero Inv�lido! Digite novamente"<<endl;

    cout<<" "<<endl;

    cout<<"Digite um n�mero inteiro positivo: "<<endl;

    cout<<" "<<endl;

    cin>>n;

    cout<<" "<<endl;

    }

    doisPrimos (n,menor,maior);

    if (menor==0||menor==1){

        cout<<"N�o existe n�mero primo menor que "<<n<<endl;

    }

    else {

        cout<<menor<<" � o menor n�mero primo menor que "<<n<<endl;

    }

cout<<maior<<" � o menor n�mero primo maior que "<<n<<endl;
cout<<" "<<endl;
cout<<"----------------------------------------------------"<<endl;
cout<<" "<<endl;

}
return 0;
}

