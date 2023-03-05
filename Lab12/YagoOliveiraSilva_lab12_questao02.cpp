// realiza operacoes com vetores multidmensionais
#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

void imprimeMatriz(int[][3], const int, const int);
void mediaGeral(int[][3], const int, const int);
void maior(int[][3], const int, const int);
void(*funcao[3])(int[][3],const int,const int)={imprimeMatriz, mediaGeral, maior};


int main()
{
setlocale (LC_ALL, "portuguese");
    const int colunas = 3;
    int linhas;
    cout << "Insira a quantidade de linhas do vetor" << endl;
    cout << "A escola possui 3 unidades, logo ser�o 3 colunas fixas" << endl;
    cout << "Linhas: ";
    cin >> linhas;
    int vet[linhas][colunas];

    cout << "Digite as notas. V�o de 0 a 100" << endl;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << "Aluno " << i+1 << ", unidade " << j+1 << endl;
            cin >> vet[i][j];
        }
        cout << "\n";
    }

    int escolha = 1;
    while(escolha != 0){
    cout << "Digite [1] para ver a matriz, [2] para ver a m�dia e [3] para ver o maior valor.";
    cout << " Digite [0] para parar." << endl;
    cin >> escolha;
    switch(escolha){
    case 1:
        (*funcao[escolha-1])(vet    , linhas, colunas);
        cout << '\n';
        break;
    case 2:
        (*funcao[escolha-1])(vet, linhas, colunas);
        cout << '\n';
        break;
    case 3:
        (*funcao[escolha-1])(vet, linhas, colunas);
        cout << '\n';
        break;
    case 0:
        break;
    default:
        cout << "Valor n�o encontrado\n" << endl;
    }
    }

}

void imprimeMatriz(int vetor[][3], const int alunos, const int notas)
{
    cout << setw(6)<< "Aluno"<< setw(11) << "Unidade 1";
    cout << setw(12) << "Unidade 2" << setw(13) << "Unidade 3" << endl;
    for(int i = 0; i < alunos; i++){
        cout << setw(3) << i+1;
        for(int j = 0; j < notas; j++){
            cout << setw(12) << vetor[i][j];
        }
        cout << "\n";
    }
}

void mediaGeral(int vetor[][3], const int alunos, const int notas)
{
    int total = 0;
    for(int i = 0; i < alunos; i++){
        for(int j = 0; j < notas; j++){
            total = total + vetor[i][j];
        }
    }
    cout << "A m�dia das notas foi: ";
    cout << float(total) / (alunos * notas) << endl;
}

void maior(int vetor[][3], const int alunos, const int notas)
{
    int maior = vetor[0][0];
    for(int i = 0; i < alunos; i++){
        for(int j = 0; j < notas; j++){
            if(vetor[i][j] > maior){
                maior = vetor[i][j];
            }
        }
    }

    cout << "A maior nota foi igual a: " << maior << endl;
}

