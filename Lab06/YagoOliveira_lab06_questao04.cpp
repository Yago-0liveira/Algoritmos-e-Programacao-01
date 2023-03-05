// recebe tres numeros e retorna o tipo de media escolhida pelo usuario (aritmetica, ponderada ou harmonica)
#include <iostream>
#include <locale>
using namespace std;

float MediaAritmetica (float, float, float);
float MediaPonderada (float, float, float);
float MediaHarmonica (float, float, float);

int main()
{


 setlocale (LC_ALL, "portuguese");

    float a,b,c;
    char x;

    cout << "Informe tr�s n�meros inteiros: " << endl;
    cout << " Digite o primeiro n�mero:"<< endl;
    cin >> a;
    cout << " Digite o segundo n�mero:" << endl;
    cin >> b;
    cout << " Digite o terceiro n�mero:" << endl;
    cin >> c;

    cout << "Escolha o tipo de m�dia:" << endl;
    cin >> x;

    if (x == 'a' || x == 'A'){
    cout << "A media aritm�tica �: " << MediaAritmetica(a,b,c);
    }else if (x == 'p' || x == 'P'){
    cout << "A media ponderada �: " << MediaPonderada(a,b,c);
    }else if (x == 'h' || x == 'H'){
    cout << "A media harm�nica �: " << MediaHarmonica(a,b,c);
    }else {
    cout << "tipo inv�lido";}

    return 0;

}

    float MediaAritmetica(float x, float y, float z){
    float media = (x + y +z)/3;
    return media;
}

    float MediaPonderada(float x, float y, float z){
    float media = (x*5+y*3+z*2)/10;
    return media;
}

    float MediaHarmonica(float x, float y, float z){
    float media = 3/(1/x+1/y+1/z);
    return media;
}
