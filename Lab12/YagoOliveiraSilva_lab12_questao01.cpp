// recebe um vetor inteiro v[0..n-1] e os enderecos de duas variaveis inteiras (dois ponteiros) - minimo e maximo
#include <iostream>
#include <locale>
using namespace std;

void mm(int vet[], int tvet, int* vmaximo, int* vminimo)
{
for(int i = 0; i < tvet; i++){
if(vet[i] > *vmaximo){
*vmaximo = vet[i];
}
}

*vminimo = *vmaximo;

for(int i = 0; i < tvet; i++){
if(vet[i] < *vminimo){
*vminimo = vet[i];
}
}
}

int main()
{
setlocale (LC_ALL, "portuguese");
int tvet;
cout << "Insira o tamanho do vetor" << endl;
cin >> tvet;
int vet[tvet];



cout << "Insira os " << tvet << " valores do vetor" << endl;
for(int i = 0; i < tvet; i++){
cin >> vet[i];
}

int maximo = 0;
int minimo = 0;
int* ptrMax = &maximo;
int* ptrMin = &minimo;

mm(vet, tvet, ptrMax, ptrMin);

cout << "Minimo = " << minimo << endl;

cout << "Maximo = " << maximo << endl;
}
