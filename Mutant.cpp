#include "Creatura.h"
#include "Mutant.h"

//variabile private
int Mutant::getAruncaFoc()
{
    return arunca_foc;
}
int Mutant::getLava()
{
    return lava;
}
int Mutant::getRadioActiv()
{
    return radio_activ;
}
int Mutant::getAtacRadioActiv()
{
    return atac_radio_activ;
}

//viata mutatului
int Mutant::Viata()
{
    return viata_mutant=Creatura::corp+Creatura::picior_drept+Creatura::picior_stang+Creatura::mana_dreapta+Creatura::armura+getLava()+getRadioActiv();
}

int Mutant::Atac()
{
    return getAruncaFoc()+getRadioActiv();
}
