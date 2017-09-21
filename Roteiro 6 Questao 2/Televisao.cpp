#include "Televisao.h"
#include<iostream>
#include<string>

Televisao::Televisao()
{
    //ctor
}

void Televisao::setCanal(int canal)
{
    this-> canal = canal;
}

void Televisao::setVolume(int volume)
{
    this-> volume = volume;
}

int Televisao::getCanal()
{
    return canal;
}

int Televisao::getVolume()
{
    return volume;
}

void Televisao::aumentarCanal()
{
    canal++;
    if(canal>999)
        canal = 999;
}

void Televisao::diminuirCanal()
{
    canal--;
    if(canal<0)
        canal = 0;
}

void Televisao::aumentarVolume()
{
    volume++;
    if(volume>100)
        volume = 100;
}

void Televisao::diminuirVolume()
{
    volume--;
    if(volume<0)
        volume = 0;
}

Televisao::~Televisao()
{
    //dtor
}
