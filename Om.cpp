#include "Creatura.h"
#include "Om.h"

//accesarea varabilelor private
int Om::getPumn()
{
    return pumn;
}
int Om::getArmura_Umana()
{
    return armura_umana;
}
int Om::getSabie()
{
    return sabie;
}
int Om::getSulita()
{
    return sulita;
}
int Om::getTopor()
{
    return topor;
}

//functia unde se aduna viata pe care o are omul
int Om::Viata()
{
    return viata_om=Creatura::picior_drept+Creatura::picior_stang+Creatura::corp+Creatura::mana_dreapta+Creatura::mana_stanga+Creatura::cap+Creatura::ochi_drept+Creatura::ochi_stang+Creatura::gura+Creatura::armura+getArmura_Umana();
}

//functiile de atac combinate cu alte atacuri
int Om::atac1()
{
    return atac1_1=getPumn()+getSabie();
}
int Om::atac2()
{
    return atac2_2=getPumn()+getSulita();
}
int Om::atac3()
{
    return atac3_3=getPumn()+getTopor();
}
