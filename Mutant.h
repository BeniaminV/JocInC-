#ifndef MUTANT_H
#define MUTANT_H
#include<string>

class Mutant: public Creatura
{
    private:
        int lava=200, radio_activ=400;
        int atac_radio_activ=500;
        int arunca_foc=200;

    public:
        //caracteristicile mutatului
       std::string nume;
        int viata_mutant;

        //variabile private
        int getAruncaFoc();
        int getLava();
        int getRadioActiv();
        int getAtacRadioActiv();

        //viata mutatului
        int Viata();

        int Atac();
};

#endif // MUTANT_H
