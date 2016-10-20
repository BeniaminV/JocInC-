#ifndef OM_H
#define OM_H
#include<string>

class Om: public Creatura
{
    private:
         int const sabie=30,sulita=60,topor=90;
         int const armura_umana=100;
         int const pumn=200;

    public:
         //caracteristicile caracterului si caracteristicile particulare
         std::string nume;
         int viata_om;
         int atac1_1,atac2_2,atac3_3;

        //accesarea varabilelor private
         int getPumn();
         int getArmura_Umana();
         int getSabie();
         int getSulita();
         int getTopor();

        //functia unde se aduna viata pe care o are omul
         int Viata();

        //functiile de atac combinate cu alte atacuri
         int atac1();
         int atac2();
         int atac3();
};

#endif // OM_H
