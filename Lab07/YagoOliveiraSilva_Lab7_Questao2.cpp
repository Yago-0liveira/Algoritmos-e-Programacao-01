//LABORAT�RIO FEITO PELA DUPLA ANTONIO ALBERTO SAMPAIO NETO E YAGO OLIVEIRA SILVA
// Programa para jogar par ou ímpar com o computador.
#include <iostream>
#include <locale>
#include <ctime>
#include <cstdlib>
using namespace std;

int numero_computador (int &numeropc){

    srand(time(0));
    numeropc=(rand())%11;

    return numeropc;
}

char jogo (char &escolha, int &jogada, int &jogadapc){

    cout<<"Par ou �mpar? Digite P ou I: ";
    cin>>escolha;

    cout<<"Digite sua jogada: ";
    cin>>jogada;
    cout<<" "<<endl;
    cout<<"--------------------------"<<endl;
    cout<<" "<<endl;

    int ver=1;

    while (ver<=1){

        if (escolha=='P'||escolha=='p'){

            cout<<"Sua Escolha: PAR"<<endl;
            ver++;
        }

        else if (escolha=='i'||escolha=='I'){

            cout<<"Sua Escolha: IMPAR"<<endl;
            ver++;
        }

        else {

            cout<<"Escolha Inv�lida! Digite novamente"<<endl;
            cout<<" ";
            cout<<"Par ou �mpar? Digite P ou I: ";
            cin>>escolha;
            cout<<" "<<endl;

        }
    }

    cout<<"Sua Jogada: "<<jogada<<endl;

    jogadapc = numero_computador(jogadapc);
    cout<<"Jogada do computador: "<<jogadapc<<endl;

    int resultado = jogada+jogadapc;
    resultado = resultado%2;


    if (escolha=='P'||escolha=='p'){

        if (resultado==0){

            cout<<"Vencedor da rodada: voc�"<<endl;
            return 'j';

        }
        else{

            cout<<"Vencedor da rodada: computador"<<endl;
            return 'c';
        }
    }

    else {

        if (resultado==1){

            cout<<"Vencedor da rodada: voc�"<<endl;
            return 'j';

        }
        else{

            cout<<"Vencedor da rodada: computador"<<endl;
            return 'c';
        }
    }
}

void placar (char resultado,int &placarj,int &placarc){

    if (resultado=='j'){

        placarj++;

    }

    else{

        placarc++;
    }
    cout<<" "<<endl;
    cout<<"========== PLACAR =========="<<endl;
    cout<<"   Voc�: "<<placarj<<"    Computador: "<<placarc<<endl;
    cout<<"============================"<<endl;
    cout<<" "<<endl;

}

int main () {

setlocale(LC_ALL, "portuguese");
char escolhaj,continua,resultado;
int digitoj,digitopc,ver=1,ver2,savepoint1=0,savepoint2=0;

while (ver>0){
    cout<<" "<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<" "<<endl;
    resultado = jogo(escolhaj,digitoj,digitopc);
    placar(resultado,savepoint1,savepoint2);
    ver2=1;

        while (ver2==1){

        cout<<"Mais uma rodada (S/N)? ";
        cin>>continua;

        if (continua=='s'||continua=='S'){
            ver++;
            ver2++;
        }

        else if (continua=='n'||continua=='N'){
            ver=0;
            ver2++;
        }

        else {

            ver2=1;
            cout<<"Resposta Inv�lida! Digite novamente"<<endl;
        }
    }
}

return 0;

}
