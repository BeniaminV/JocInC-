#ifndef MODDELUCRU_H
#define MODDELUCRU_H
#include<string>

using namespace std;

class ModDeLucru
{
    public:
        int a,a1,a2,a3,a4,a5,a6,a7,b,b1,b2,b3,b4,b5,b6,b7;

        //aspectul primului contact cu jocul
        void DisplayFirstPage();

        //posibilitatea de ati alege un carater
        void DisplayCaracter();
        void DisplayCaracter2();

        //lista de arme
        void DisplyWepon();
        void DisplayDetaliCaracterPentruOm(string nume,string arma_aleasa,int viata,int atac_normal);
        void DisplayDetaliCaracterPentruOmDeCalculator(string nume,string arma_aleasa,int viata,int atac_normal);
        void DisplayDetaliCaracterStandard(string nume1,int viata1,int atac_normal1);
        void DisplayDetaliCaracterStandardDeCalculator(string nume1,int viata1,int atac_normal1);
        void Lupta(int viata, int atac, int viata1, int atac1, string name, string name1);
        void LuptaMulti(int viata, int atac, int viata1, int atac1, string name, string name1, string per);
};

#endif // MODDELUCRU_H
