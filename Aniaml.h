#ifndef ANIAML_H
#define ANIAML_H
#include<string>

class Animal: public Creatura
{
    private:
        int blana=100;
        int otrava=150;
        int musca=200;

    public:
        //caracteristicile animalului
        string nume;
        int viata_animal;
        int atac;

        //accesarea variabilelor private
        int getMusca();
        int getBlana();
        int getOtrava();

        //viata animalului
        int Viata();

        int AtacCuOtravaSiMusca();
};

#endif // ANIAML_H
