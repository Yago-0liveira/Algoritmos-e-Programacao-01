/*Calcula e mostre a duracao de um jogo (horas e minutos),
sabendo que o tempo maximo de duracao do jogo e de 24 horas e que o jogo pode comecar num dia
terminar em outro.*/
#include <iostream>

using namespace std;

int main()
{
    int inicioHora, inicioMinuto, terminoHora, terminoMinuto, horaTotal, minutoTotal;

    cout << "Digite a hora e minutagem de inicio do jogo, respectivamente (Formato 24h)" << endl;
    cin >> inicioHora >> inicioMinuto;
    cout << "Digite a hora e minutagem de termino do jogo, respectivamente (Formato 24h)" << endl;
    cin >> terminoHora >> terminoMinuto;

    if (inicioHora > 24 || terminoHora > 24 || inicioMinuto > 59 || terminoMinuto > 59){
        cout << "Valores invalidos" << endl;
        return 1;
    }
    if (inicioHora < 0 || terminoHora < 0 || inicioMinuto < 0 || terminoMinuto < 0){
        cout << "Valores invalidos" << endl;
        return 1;
    }

    if (inicioHora <= terminoHora){
        horaTotal = terminoHora - inicioHora;
    }
    else{
        horaTotal = (24 - inicioHora) + terminoHora;
    }

    if (inicioMinuto <= terminoMinuto){
        minutoTotal = terminoMinuto - inicioMinuto;
    }

    else{
        minutoTotal = (60 - inicioMinuto) + terminoMinuto;
        horaTotal--;
    }

    cout << "Hora total: " << horaTotal << endl;
    cout << "Minuto total: " << minutoTotal << endl;
    return 0;
}
