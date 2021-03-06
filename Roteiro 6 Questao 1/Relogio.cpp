#include "Relogio.h"

using namespace std;

Relogio::Relogio()
{

    //ctor
}

void Relogio::setHorario(int hora, int minuto, int segundo)
{
    this-> hora = hora;
    this-> minuto = minuto;
    this-> segundo = segundo;
}

int Relogio::getHora(int hora)
{
    return hora;
}

int Relogio::getMinuto(int minuto)
{
    return minuto;
}

int Relogio::getSegundo(int segundo)
{
    return segundo;
}

void Relogio::avancarHorario(int hora, int minuto, int segundo)
{
    bool horarioCorreto;

    horarioCorreto =  checaHorario(hora, minuto, segundo+1);
    if(horarioCorreto){
        segundo +=1;
        this->segundo = segundo;
    }else{
        while(1){
            if(minuto>=60){
                hora+=1;
                minuto-=60;
                continue;
            }
            if(segundo>=60){
                minuto+=1;
                segundo-=60;
                continue;
            }
            break;
        }
    }
}

bool Relogio::checaHorario(int hora, int minuto, int segundo){
    if(hora> 24 || minuto >= 60 || segundo >= 60){
        return false;
    }
    return true;
}

Relogio::~Relogio()
{
    //dtor
}
