#include "Creatura.h"
#include "Animal.h"

//accesarea variabilelor private
int Animal::getMusca()
{
    return musca;
}
int Animal::getBlana()
{
    return blana;
}
int Animal::getOtrava()
{
    return otrava;
}

//viata animalului
int Animal::Viata()
{
    return viata_animal=Creatura::picior_stang_fata+Creatura::picior_drept_fata+Creatura::picior_drept_spate+Creatura::picior_stang_spate+Creatura::corp+Creatura::cap+Creatura::gura+Creatura::ochi_drept+Creatura::ochi_stang+Creatura::armura+getBlana();
}

int Animal::AtacCuOtravaSiMusca()
{
    return atac=getMusca()+getOtrava();
}

