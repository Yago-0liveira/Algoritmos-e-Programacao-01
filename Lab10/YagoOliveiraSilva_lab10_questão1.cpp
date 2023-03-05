// Recebe 20 numeros inteiros, armazena num vetor e verifica se são todos pares
#include <iostream>
#include <locale>

using namespace std;


bool vp (int []);
int main(){
setlocale (LC_ALL, "portuguese");
    const int tamA = 20;
    int eone [tamA];

    for(int i = 1; i <= tamA; i++){
        cout << "Digite os 20 n�meros inteiros selecionados " << "[" << i << "]" << endl;
        cin >> eone[i];
    }


    switch (vp (eone))
    {
    case true:
        cout << "Todos os elementos s�o pares";
        break;
    case false:
        cout << "Nem todos os elementos s�o pares";
        break;
    }





    return 0;
}

bool vp (int arranjo[]){
    int size = 20;

    for(int i = 0; i < size; i++){
        if(arranjo[i] % 2 != 0){
            return false;
            break;
        }
    }

    return true;
}
