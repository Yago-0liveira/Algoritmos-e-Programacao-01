/*Solicita 50 valores inteiros ao usuário e armazena esses valores em um arranjo. Depois,
copia e inverte o conteudo desse arranjo para um segundo arranjo*/
#include <iostream>
#include <locale>
using namespace std;

void copia(int [], int [], int);
int main(){
setlocale (LC_ALL, "portuguese");

    const int tamA = 50;
    int vet1[tamA];
    int vet2[tamA];


    for(int i = 0; i < tamA; i++){
        cout << "Informe 50 n�meros inteiros" << "[" << i << "]" << endl;
        cin >> vet1[i];
    }

    copia(vet1, vet2, tamA);

    for(int i = 0; i < tamA; i++){
        cout << vet1[i] << " ";
    }
    cout << "\t";

    for(int j = tamA - 1; j >= 0; j--){
         cout << vet1[j] << " ";
    }


    return 0;
}

void copia(int array[], int arCopia[], int tamanho){
    tamanho = 50;

    for(int i = 0; i < tamanho; i++){
        arCopia[i] = array[i];
    }
}
