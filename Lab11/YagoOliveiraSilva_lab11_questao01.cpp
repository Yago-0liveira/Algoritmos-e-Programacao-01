//Realiza operacoes com matrizes
#include <iostream>
#include <locale>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

void imprimeMatriz(int vetor[][999], int linhas, int colunas);
void duplicaMatriz(int vetor[][999], int vetorB[][999], int linhas, int colunas);
void multiplicaDiagonal(int vetor[][999], int linhas, int colunas, int k);
void inverteDiagonal(int vetor[][999], int linhas, int colunas);

int main()
{
setlocale (LC_ALL, "portuguese");
    srand(time(0));

int linhas;
cout << "Informe um n�mero inteiro para a constru��o das matrizes" << endl;
cin >> linhas;
int colunas = linhas;

int vetor[linhas][999];
int vetorB[linhas][999];

for(int i = 0; i < linhas; i++){
for(int j = 0; j < colunas; j++){
vetor[i][j] = 1 + rand() % 51;
}
}

cout << "Matriz A" << endl;
imprimeMatriz(vetor, linhas, colunas);

cout << "\n";

cout << "Matriz B" << endl;
duplicaMatriz(vetor, vetorB, linhas, colunas);

imprimeMatriz(vetorB, linhas, colunas);

cout << "\n";

int k;
cout << "Informe uma constante k" << endl;
cin >> k;

cout << "\n";
cout << " Diagonal principal da matriz A multiplicada por " << k << endl;
multiplicaDiagonal(vetor, linhas, colunas, k);
imprimeMatriz(vetor, linhas, colunas);

cout << "\n";
cout << "Matriz B com diagonal principal invertida" << endl;
inverteDiagonal(vetorB, linhas, colunas);
imprimeMatriz(vetorB, linhas, colunas);

}

void imprimeMatriz(int vetor[][999], int linhas, int colunas)
{
for(int i = 0; i < linhas; i++){
for(int j = 0; j < colunas; j++){
cout << setw(3) << vetor[i][j] << " ";
}
cout << endl;
}
}

void duplicaMatriz(int vetor[][999], int vetorB[][999], int linhas, int colunas)
{
vetorB[linhas][999];

for(int i = 0; i < linhas; i++){
for(int j = 0; j < colunas; j++){
vetorB[i][j] = vetor[i][j] * 2;
}
}
}

void multiplicaDiagonal(int vetor[][999], int linhas, int colunas, int k)
{
for(int i = 0; i < linhas; i++){
vetor[i][i] = vetor[i][i] * k;
}
}

void inverteDiagonal(int vetor[][999], int linhas, int colunas)
{
int diag[colunas];
for(int i = 0; i < linhas; i++){
        diag[i] = vetor[i][i];
}

for(int i = 0; i < linhas; i++){

vetor[i][i] = diag[(linhas - 1) - i];
    }
}
