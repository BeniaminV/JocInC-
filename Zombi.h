#ifndef ZOMBI_H
#define ZOMBI_H
#include<string>

class Zombi: public Creatura
{
    private:
        int gelatina=300;
        int muscatura_dubla=250;
        int muscatura=200;

    public:
       //caracteristicile zobiului
        std::string nume;
        int viata_zombi;

        //variabilele private
        int getMuscatura();
        int getGelatina();
        int getMuscaturaDubla();

        //viata zobiului
        int Viata();

        int Musca();
};

#endif // ZOMBI_H
