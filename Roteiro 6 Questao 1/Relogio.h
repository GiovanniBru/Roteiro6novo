#ifndef RELOGIO_H
#define RELOGIO_H

using namespace std;

class Relogio
{
    public:
        Relogio();
        virtual ~Relogio();
        void setHorario(int, int, int);
        int getHora(int);
        int getMinuto(int);
        int getSegundo(int);
        void avancarHorario(int hora, int minuto, int segundo);
        bool chegarHorario(int hora, int minuto, int segundo);

    private:
        int hora;
        int minuto;
        int segundo;

    };

#endif // RELOGIO_H
