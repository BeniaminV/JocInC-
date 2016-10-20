#include "Creatura.h"
#include "Monstru.h"

//variabilele private
int Monstru::getCarapace()
{
    return carapace;
}
int Monstru::getLaser()
{
    return laser;
}
int Monstru::getPumnul()
{
    return pumnul;
}

//viata monstrului
int Monstru::Viata()
{
    return viata_monstru=Creatura::corp+Creatura::cap+Creatura::gura+Creatura::ochi+Creatura::mana_dreapta+Creatura::mana_stanga+Creatura::picior_drept+Creatura::picior_stang+Creatura::armura+getCarapace();
}

int Monstru::Atac()
{
    return getPumnul()+getLaser();
}
