#include<iostream>
#include<string>
#include "Relogio.h"

using namespace std;

int main()
{
    Relogio horario;
    int hora, minuto, segundo;
    bool horarioCorreto;

    cout << "Digite a hora: ";
    cin << hora;

    cout << "\nDigite os minutos: ";
    cin << minuto;

    cout << "\nDigite os segundos: ";
    cin << segundos;

    horarioCorreto = horario.checaHorario(hora, minuto, segundo);

    if(horarioCorreto){
        horario.setHorario(hora, minuto, segundo);
        horario.avancarHorario(hora, minuto, segundo);
        cout << "\nHora: " << horario.getHora();
        cout << "\nMinuto: " << horario.getMinuto();
        cout << "\nSegundos: " << horario.getSegundo();
    }

    return 0;
}

