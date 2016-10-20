#ifndef ANIMAL_H
#define ANIMAL_H
#include<string>

class Animal: public Creatura
{
    private:
        int blana=100;
        int otrava=150;
        int musca=200;

    public:
        //caracteristicile animalului
        std::string nume;
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

#endif // ANIMAL_H
