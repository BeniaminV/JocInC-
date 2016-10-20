#include "Creatura.h"
#include "Zombi.h"

//variabilele private
int Zombi::getMuscatura()
{
    return muscatura;
}
int Zombi::getGelatina()
{
    return gelatina;
}
int Zombi::getMuscaturaDubla()
{
    return muscatura_dubla;
}

//viata zobiului
int Zombi::Viata()
{
    return viata_zombi=Creatura::corp+Creatura::mana_stanga+Creatura::mana_dreapta+Creatura::cap+Creatura::gura+Creatura::ochi_stang+Creatura::ochi_drept+Creatura::armura+getGelatina();
}

int Zombi::Musca()
{
    return getMuscatura()+getMuscaturaDubla();
}
