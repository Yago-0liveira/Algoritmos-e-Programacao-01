/*recebe 20 valores inteiros positivos e armazena 10 desses valores no
vetor A e 10 no vetor B. Em seguida, o programa chama uma funcao que recebe os dois
vetores como argumentos e preenche um terceiro vetor C de acordo com os seguintes criterios:
Ci recebe 1 quando Ai eh maior que Bi ;
Ci recebe 0 quando Ai eh igual a Bi ;
Ci recebe -1 quando Ai eh menor que Bi .*/
#include <iostream>
#include <locale>

using namespace std;


void fillC(int [], int [], int [], int&);

int main(){
setlocale (LC_ALL, "portuguese");
    int size = 10;
    int vetA[size];
    int vetB[size];
    int vetC[size] = {};

    for(int i = 0; i < size; i++){
        cout << "Insira 10 n�meros inteiros positivos para o vetor A" << "[" << i << "]" << endl;
        cin >> vetA[i];
    }
    for(int i = 0; i < size; i++){
        cout << "Insira 10 n�meros inteiros positivos para o vetor B" << "[" << i << "]" << endl;
        cin >> vetB[i];
    }


    fillC(vetA, vetB, vetC, size);

    cout << "Vetor A = ";
    for(int i = 0; i < size; i++){
        cout << vetA[i] << " ";
    }

    cout << "\n";

    cout << "Vetor B = ";
    for(int i = 0; i < size; i++){
        cout << vetB[i] << " ";
    }

    cout << "\n";

    cout << "Vetor C = ";
    for(int i = 0; i < size; i++){
        cout << vetC[i] << " ";
    }


    return 0;
}

void fillC(int vA[], int vB[], int vC[], int &tamC){
    for(int i = 0; i < tamC; i++){
        if(vA[i] > vB[i]){
            vC[i] = 1;
        } else if(vA[i] == vB[i]){
            vC[i] = 0;
        } else if(vA[i] < vB[i]){
            vC[i] = -1;
        }
    }
}
