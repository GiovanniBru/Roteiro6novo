#ifndef TELEVISAO_H
#define TELEVISAO_H


class Televisao
{
    public:
        void setVolume(int volume);
        void setCanal(int canal);
        int getVolume();
        int getCanal();
        void aumentarVolume();
        void aumentarCanal();
        void diminuirVolume();
        void diminuirCanal();

        Televisao();
        virtual ~Televisao();

    protected:

    private:
        int volume;
        int canal;
};

#endif // TELEVISAO_H
