#include "ModDeLucru.h"
#include<string>
#include<iostream>

using namespace std;

//aspectul primului contact cu jocul
void ModDeLucru::DisplayFirstPage()
{
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"*                                                           *"<<endl;
    cout<<"*                                                           *"<<endl;
    cout<<"*                                                           *"<<endl;
    cout<<"*                   Bun Venit la Arena                      *"<<endl;
    cout<<"*                                                           *"<<endl;
    cout<<"*                                                           *"<<endl;
    cout<<"*                                                           *"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"*                                                           *"<<endl;
    cout<<"*                                                           *"<<endl;
    cout<<"*                   1.Jucator vs Calculator                 *"<<endl;
    cout<<"*                   2.Jucator vs Jucator                    *"<<endl;
    cout<<"*                                                           *"<<endl;
    cout<<"*                                                           *"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
}

//posibilitatea de ati alege un carater
void ModDeLucru::DisplayCaracter()
{
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"*                                                           *"<<endl;
    cout<<"* Bun venit in sistemul de joc Jucator vs Calculator        *"<<endl;
    cout<<"*                                                           *"<<endl;
    cout<<"* Lista de caractere disponibile                            *"<<endl;
    cout<<"*       1.Om                                                *"<<endl;
    cout<<"*       2.Animal                                            *"<<endl;
    cout<<"*       3.Monstru                                           *"<<endl;
    cout<<"*       4.Mutant                                            *"<<endl;
    cout<<"*       5.Zombi                                             *"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
}

void ModDeLucru::DisplayCaracter2()
{
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"*                                                           *"<<endl;
    cout<<"* Bun venit in sistemul de joc Jucator vs Jucator           *"<<endl;
    cout<<"*                                                           *"<<endl;
    cout<<"* Lista de caractere disponibile                            *"<<endl;
    cout<<"*       1.Zombi                                             *"<<endl;
    cout<<"*       2.Animal                                            *"<<endl;
    cout<<"*       3.Mutant                                            *"<<endl;
    cout<<"*       4.Monstru                                           *"<<endl;
    cout<<"*       5.Om                                                *"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
}

//lista de arme
void ModDeLucru::DisplyWepon()
{
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"Alege o arma:"<<endl;
    cout<<"1.Sabie"<<endl;
    cout<<"2.Sulita"<<endl;
    cout<<"3.Topor"<<endl;
}

void ModDeLucru::DisplayDetaliCaracterPentruOm(string nume,string arma_aleasa,int viata,int atac_normal)
{
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"Detalile caracterului ales de tine"<<endl;
    cout<<"Numele: "<<nume<<endl;
    cout<<"Arma aleasa: "<<arma_aleasa<<endl;
    cout<<"Viata: "<<viata<<endl;
    cout<<"Valoarea atacului: "<<atac_normal<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
}

void ModDeLucru::DisplayDetaliCaracterPentruOmDeCalculator(string nume,string arma_aleasa,int viata,int atac_normal)
{
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"Detalile caracterului ales de calculator"<<endl;
    cout<<"Numele: "<<nume<<endl;
    cout<<"Arma aleasa: "<<arma_aleasa<<endl;
    cout<<"Viata: "<<viata<<endl;
    cout<<"Valoarea atacului: "<<atac_normal<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
}

void ModDeLucru::DisplayDetaliCaracterStandard(string nume1,int viata1,int atac_normal1)
{
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"Detalile caracterului ales de tine"<<endl;
    cout<<"Numele: "<<nume1<<endl;
    cout<<"Viata: "<<viata1<<endl;
    cout<<"Valoarea atacului: "<<atac_normal1<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
}

void ModDeLucru::DisplayDetaliCaracterStandardDeCalculator(string nume1,int viata1,int atac_normal1)
{
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"Detalile caracterului ales de calculator"<<endl;
    cout<<"Numele: "<<nume1<<endl;
    cout<<"Viata: "<<viata1<<endl;
    cout<<"Valoarea atacului: "<<atac_normal1<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
}

void ModDeLucru::Lupta(int viata, int atac, int viata1, int atac1, string name, string name1)
{
    a=viata1-atac;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<name1<<"a mai ramas cu "<<a<<" puncte de viata"<<endl;
    b=viata-atac1;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<name<<"a mai ramas cu "<<b<<" puncte de viata"<<endl;
    if(a>0 && b>0)
    {
        a2=a-atac;
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<name1<<"a mai ramas cu "<<a2<<" puncte de viata"<<endl;
        if(a2<=0)
            cout<<name<<"a castigat meciul"<<endl;
        else
        {
            b2=b-atac1;
            cout<<"-------------------------------------------------------------"<<endl;
            cout<<name<<"a mai ramas cu "<<b2<<" puncte de viata"<<endl;
            if(b2<=0)
                cout<<name1<<"a castigat meciul"<<endl;
            else
            {
                a3=a2-atac;
                cout<<"-------------------------------------------------------------"<<endl;
                cout<<name1<<"a mai ramas cu "<<a3<<" puncte de viata"<<endl;
                if(a3<=0)
                    cout<<name<<"a castigat meciul"<<endl;
                else
                {
                    b3=b2-atac1;
                    cout<<"-------------------------------------------------------------"<<endl;
                    cout<<name<<"a mai ramas cu "<<b3<<" puncte de viata"<<endl;
                    if(b3<=0)
                        cout<<name1<<"a castigat meciul"<<endl;
                    else
                    {
                        a4=a3-atac;
                        cout<<"-------------------------------------------------------------"<<endl;
                        cout<<name1<<"a mai ramas cu "<<a4<<" puncte de viata"<<endl;
                        if(a4<=0)
                            cout<<name<<"a castigat meciul"<<endl;
                        else
                        {
                            b4=b3-atac1;
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<name<<"a mai ramas cu "<<b4<<" puncte de viata"<<endl;
                            if(b4<=0)
                                cout<<name1<<"a castigat meciul"<<endl;
                            else
                            {
                                a5=a4-atac;
                                cout<<"-------------------------------------------------------------"<<endl;
                                cout<<name1<<"a mai ramas cu "<<a5<<" puncte de viata"<<endl;
                                if(a5<=0)
                                    cout<<name<<"a castigat meciul"<<endl;
                                else
                                {
                                    b5=b4-atac1;
                                    cout<<"-------------------------------------------------------------"<<endl;
                                    cout<<name<<"a mai ramas cu "<<b5<<" puncte de viata"<<endl;
                                    if(b5<=0)
                                        cout<<name1<<"a castigat meciul"<<endl;
                                    else
                                    {
                                        a6=a5-atac;
                                        cout<<"-------------------------------------------------------------"<<endl;
                                        cout<<name1<<"a mai ramas cu "<<a6<<" puncte de viata"<<endl;
                                        if(a6<=0)
                                            cout<<name<<"a castigat meciul"<<endl;
                                        else
                                        {
                                            b6=b5-atac1;
                                            cout<<"-------------------------------------------------------------"<<endl;
                                            cout<<name<<"a mai ramas cu "<<b6<<" puncte de viata"<<endl;
                                            if(b6<=0)
                                                cout<<name1<<"a castigat meciul"<<endl;
                                            else
                                            {
                                                a7=a6-atac;
                                                cout<<"-------------------------------------------------------------"<<endl;
                                                cout<<name1<<"a mai ramas cu "<<a7<<" puncte de viata"<<endl;
                                                if(a7<=0)
                                                    cout<<name<<"a castigat meciul"<<endl;
                                                else
                                                {
                                                    b7=b6-atac1;
                                                    cout<<"-------------------------------------------------------------"<<endl;
                                                    cout<<name<<"a mai ramas cu "<<b7<<" puncte de viata"<<endl;
                                                    if(b7<=0)
                                                        cout<<name1<<"a castigat meciul"<<endl;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void ModDeLucru::LuptaMulti(int viata, int atac, int viata1, int atac1, string name, string name1, string per)
{
    if(per=="atac")
    {
        a=viata1-atac;
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<name1 << "a mai ramas cu " << a << " puncte de viata"<<endl;
        b=viata-atac1;
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<name << "a mai ramas cu " << b << " puncte de viata"<<endl;
        if(a>0 && b>0)
        {
            a2=a-atac;
            cout<<"-------------------------------------------------------------"<<endl;
            cout<<name1 << "a mai ramas cu " << a2 << " puncte de viata"<<endl;
            if(a2<=0)
                cout<<name << "a castigat meciul"<<endl;
            else
            {
                b2=b-atac1;
                cout<<"-------------------------------------------------------------"<<endl;
                cout<<name << "a mai ramas cu " << b2 << " puncte de viata"<<endl;
                if(b2<=0)
                    cout<<name1 << "a castigat meciul"<<endl;
                else
                {
                    a3=a2-atac;
                    cout<<"-------------------------------------------------------------"<<endl;
                    cout<<name1 << "a mai ramas cu " << a3 << " puncte de viata"<<endl;
                    if(a3<=0)
                        cout<<name << "a castigat meciul"<<endl;
                    else
                    {
                        b3=b2-atac1;
                        cout<<"-------------------------------------------------------------"<<endl;
                        cout<<name << "a mai ramas cu " << b3 << " puncte de viata"<<endl;
                        if(b3<=0)
                            cout<<name1 << "a castigat meciul"<<endl;
                        else
                        {
                            a4=a3-atac;
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<name1 << "a mai ramas cu " << a4 << " puncte de viata"<<endl;
                            if(a4<=0)
                                cout<<name << "a castigat meciul"<<endl;
                            else
                            {
                                b4=b3-atac1;
                                cout<<"-------------------------------------------------------------"<<endl;
                                cout<<name << "a mai ramas cu " << b4 << " puncte de viata"<<endl;
                                if(b4<=0)
                                    cout<<name1 << "a castigat meciul"<<endl;
                                else
                                {
                                    a5=a4-atac;
                                    cout<<"-------------------------------------------------------------"<<endl;
                                    cout<<name1 << "a mai ramas cu " << a5 << " puncte de viata"<<endl;
                                    if(a5<=0)
                                        cout<<name << "a castigat meciul"<<endl;
                                    else
                                    {
                                        b5=b4-atac1;
                                        cout<<"-------------------------------------------------------------"<<endl;
                                        cout<<name << "a mai ramas cu " << b5 << " puncte de viata"<<endl;
                                        if(b5<=0)
                                            cout<<name1 << "a castigat meciul"<<endl;
                                        else
                                        {
                                            a6=a5-atac;
                                            cout<<"-------------------------------------------------------------"<<endl;
                                            cout<<name1 << "a mai ramas cu " << a6 << " puncte de viata"<<endl;
                                            if(a6<=0)
                                                cout<<name << "a castigat meciul"<<endl;
                                            else
                                            {
                                                b6=b5-atac1;
                                                cout<<"-------------------------------------------------------------"<<endl;
                                                cout<<name << "a mai ramas cu " << b6 << " puncte de viata"<<endl;
                                                if(b6<=0)
                                                    cout<<name1 << "a castigat meciul"<<endl;
                                                else
                                                {
                                                    a7=a6-atac;
                                                    cout<<"-------------------------------------------------------------"<<endl;
                                                    cout<<name1 << "a mai ramas cu " << a7 << " puncte de viata"<<endl;
                                                    if(a7<=0)
                                                        cout<<name << "a castigat meciul"<<endl;
                                                    else
                                                    {
                                                        b7=b6-atac1;
                                                        cout<<"-------------------------------------------------------------"<<endl;
                                                        cout<<name << "a mai ramas cu " << b7 << " puncte de viata"<<endl;
                                                        if(b7<=0)
                                                            cout<<name1 << "a castigat meciul"<<endl;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        b=viata-atac1;
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<name1 << "a mai ramas cu " << b << " puncte de viata"<<endl;
        a=viata1-atac;
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<name << "a mai ramas cu " << a << " puncte de viata"<<endl;
        if(b>0 && a>0)
        {
            b2=b-atac1;
            cout<<"-------------------------------------------------------------"<<endl;
            cout<<name1 << "a mai ramas cu " << b2 << " puncte de viata"<<endl;
            if(b2<=0)
                cout<<name << "a castigat meciul"<<endl;
            else
            {
                a2=a-atac;
                cout<<"-------------------------------------------------------------"<<endl;
                cout<<name << "a mai ramas cu " << a2 << " puncte de viata"<<endl;
                if(a2<=0)
                    cout<<name1 << "a castigat meciul"<<endl;
                else
                {
                    b3=b2-atac1;
                    cout<<"-------------------------------------------------------------"<<endl;
                    cout<<name1 << "a mai ramas cu " << b3 << " puncte de viata"<<endl;
                    if(b3<=0)
                        cout<<name << "a castigat meciul"<<endl;
                    else
                    {
                        a3=a2-atac;
                        cout<<"-------------------------------------------------------------"<<endl;
                        cout<<name << "a mai ramas cu " << a3 << " puncte de viata"<<endl;
                        if(a3<=0)
                            cout<<name1 << "a castigat meciul"<<endl;
                        else
                        {
                            b4=b3-atac1;
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<name1 << "a mai ramas cu " << b4 << " puncte de viata"<<endl;
                            if(b4<=0)
                                cout<<name << "a castigat meciul"<<endl;
                            else
                            {
                                a4=a3-atac;
                                cout<<"-------------------------------------------------------------"<<endl;
                                cout<<name << "a mai ramas cu " << a4 << " puncte de viata"<<endl;
                                if(a4<=0)
                                    cout<<name1 << "a castigat meciul"<<endl;
                                else
                                {
                                    b5=b4-atac;
                                    cout<<"-------------------------------------------------------------"<<endl;
                                    cout<<name1 << "a mai ramas cu " << b5 << " puncte de viata"<<endl;
                                    if(b5<=0)
                                        cout<<name << "a castigat meciul"<<endl;
                                    else
                                    {
                                        a5=a4-atac;
                                        cout<<"-------------------------------------------------------------"<<endl;
                                        cout<<name << "a mai ramas cu " << a5 << " puncte de viata"<<endl;
                                        if(a5<=0)
                                            cout<<name1 << "a castigat meciul"<<endl;
                                        else
                                        {
                                            b6=b5-atac1;
                                            cout<<"-------------------------------------------------------------"<<endl;
                                            cout<<name1 << "a mai ramas cu " << b6 << " puncte de viata"<<endl;
                                            if(b6<=0)
                                                cout<<name << "a castigat meciul"<<endl;
                                            else
                                            {
                                                a6=a5-atac;
                                                cout<<"-------------------------------------------------------------"<<endl;
                                                cout<<name << "a mai ramas cu " << a6 << " puncte de viata"<<endl;
                                                if(a6<=0)
                                                    cout<<name1 << "a castigat meciul"<<endl;
                                                else
                                                {
                                                    b7=b6-atac1;
                                                    cout<<"-------------------------------------------------------------"<<endl;
                                                    cout<<name1 << "a mai ramas cu " << b7 << " puncte de viata"<<endl;
                                                    if(b7<=0)
                                                        cout<<name << "a castigat meciul"<<endl;
                                                    else
                                                    {
                                                        a7=a6-atac;
                                                        cout<<"-------------------------------------------------------------"<<endl;
                                                        cout<<name << "a mai ramas cu " << a7 << " puncte de viata"<<endl;
                                                        if(a7<=0)
                                                            cout<<name1 << "a castigat meciul"<<endl;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
