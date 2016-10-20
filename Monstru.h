#ifndef MONSTRU_H
#define MONSTRU_H
#include<string>

class Monstru: public Creatura
{
    private:
        int carapace=100;
        int laser=350;
        int pumnul=200;

    public:
        //caracteristicile monstrului
        std::string nume;
        int viata_monstru;

        //variabilele private
        int getCarapace();
        int getLaser();
        int getPumnul();

        //viata monstrului
        int Viata();

        int Atac();
};

#endif // MONSTRU_H
