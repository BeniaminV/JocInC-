#include <iostream>
#include<string>
#include"Creatura.h"
#include"Om.h"
#include"Animal.h"
#include"Monstru.h"
#include"Mutant.h"
#include"ModDeLucru.h"
#include"Zombi.h"
#include<cstdlib>
using namespace std;

int main()
{
    //initializarea obiectelor
    Creatura creatura;
    Om om;
    Animal animal;
    Monstru monstru;
    Mutant mutant;
    Zombi zombi;
    ModDeLucru mod;

    //locul unde de initializeaza variabilele de care ne folosim
    int optiune, numar_caracter, numar_arma;
    int random=rand()%5+1;
    string arma_aleasa;
    string p;
    int vrei;

    do{
    //locul functiilor si a obiectelor care se vor folosi in joc
    mod.DisplayFirstPage();
    cout<<"Introdu optiunea dorita si apasa 'Enter': ";
    cin>>optiune;

    //locul unde se face delimitarea intre un meci jucator vs calculator si jucator vs jucator
    switch(optiune)
    {
        //cazul in care se joaca JUCATOR VS CALCULATOR
        case 1:
        {
            mod.DisplayCaracter();
            cout<<"Alege un caracter si scrie numarul lui si apasa 'Enter': ";
            cin>>numar_caracter;
            switch(numar_caracter)
            {
                case 1:
                {
                    //locul unde interactionez cu, caracterul ales de tine
                    cout<<"-------------------------------------------------------------"<<endl;
                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                    cout<<"-Salut ai luat cea mai buna decizie alegandu-ma..., Nu o sa te dezamagesc.."<<endl;
                    cout<<"-Da-mi si un nume:";
                    cin>>om.nume;
                    mod.DisplyWepon();
                    cout<<"-Introdu numarul armei:";
                    cin>>numar_arma;
                    cout<<"Scrie numele armei alese de tine: ";
                    cin>>arma_aleasa;
                    cout<<"-------------------------------------------------------------"<<endl;

                    //locul unde se ca afisa ce ai introdus
                    switch(numar_arma)
                    {
                        case 1:
                        {
                            //locul unde se afiseaza detalile caracterului tau si a caraterului ales de calculator
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterPentruOm(om.nume, arma_aleasa, om.Viata(), om.atac1());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul a fost selectat"<<endl;
                            cout<<"*************************************************************"<<endl;

                            //alegerea oponetului de catre calculator
                            if(random==5)
                            {
                                mod.DisplayDetaliCaracterStandardDeCalculator(zombi.nume="Zoto", zombi.Viata(), zombi.Musca());
                                cout<<"*************************************************************"<<endl;
                                mod.Lupta(om.Viata(), om.atac1(), zombi.Viata(), zombi.Musca(), om.nume, zombi.nume="Zoto");
                            }
                            else if(random==4)
                            {
                                mod.DisplayDetaliCaracterStandardDeCalculator(mutant.nume="Righ", mutant.Viata(), mutant.getAruncaFoc());
                                cout<<"*************************************************************"<<endl;
                                mod.Lupta(om.Viata(), om.atac1(), mutant.Viata(), mutant.getAruncaFoc(), om.nume, mutant.nume="Righ");
                            }
                            else if(random==3)
                            {
                                mod.DisplayDetaliCaracterStandardDeCalculator(monstru.nume="Turbg", monstru.Viata(), monstru.getPumnul());
                                cout<<"*************************************************************"<<endl;
                                mod.Lupta(om.Viata(), om.atac1(), monstru.Viata(), monstru.getPumnul(), om.nume, monstru.nume="Turbg");
                            }
                            else if(random==2)
                            {
                                mod.DisplayDetaliCaracterStandardDeCalculator(animal.nume="Bingo", animal.Viata(), animal.AtacCuOtravaSiMusca());
                                cout<<"*************************************************************"<<endl;
                                mod.Lupta(om.Viata(), om.atac1(), animal.Viata(), animal.AtacCuOtravaSiMusca(), om.nume, animal.nume="Bingo");
                            }
                            else if(random==1)
                            {
                                mod.DisplayDetaliCaracterPentruOmDeCalculator(om.nume="Bula",arma_aleasa, om.Viata(), om.atac2());
                                cout<<"*************************************************************"<<endl;
                                mod.Lupta(om.Viata(), om.atac1(), om.Viata(), om.atac2(), om.nume, om.nume="Bula");
                            }
                        }break;

                        case 2:
                        {
                            //locul unde se afiseaza detalile caracterului tau si a caraterului ales de calculator
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterPentruOm(om.nume, arma_aleasa, om.Viata(), om.atac2());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul a fost selectat"<<endl;
                            cout<<"*************************************************************"<<endl;

                            //alegerea oponetului de catre calculator
                            if(random==5)
                            {
                                mod.DisplayDetaliCaracterStandardDeCalculator(zombi.nume="Zoto", zombi.Viata(), zombi.Musca());
                                cout<<"*************************************************************"<<endl;
                                mod.Lupta(om.Viata(), om.atac2(), zombi.Viata(), zombi.Musca(), om.nume, zombi.nume="Zoto");
                            }
                            else if(random==4)
                            {
                                mod.DisplayDetaliCaracterStandardDeCalculator(mutant.nume="Righ", mutant.Viata(), mutant.getAruncaFoc());
                                cout<<"*************************************************************"<<endl;
                                mod.Lupta(om.Viata(), om.atac2(), mutant.Viata(), mutant.getAruncaFoc(), om.nume, mutant.nume="Righ");
                            }
                            else if(random==3)
                            {
                                mod.DisplayDetaliCaracterStandardDeCalculator(monstru.nume="Turbg", monstru.Viata(), monstru.getPumnul());
                                cout<<"*************************************************************"<<endl;
                                mod.Lupta(om.Viata(), om.atac2(), monstru.Viata(), monstru.getPumnul(), om.nume, monstru.nume="Turbg");
                            }
                            else if(random==2)
                            {
                                mod.DisplayDetaliCaracterStandardDeCalculator(animal.nume="Bingo", animal.Viata(), animal.AtacCuOtravaSiMusca());
                                cout<<"*************************************************************"<<endl;
                                mod.Lupta(om.Viata(), om.atac2(), animal.Viata(), animal.AtacCuOtravaSiMusca(), om.nume, animal.nume="Bingo");
                            }
                            else if(random==1)
                            {
                                mod.DisplayDetaliCaracterPentruOmDeCalculator(om.nume="Bula",arma_aleasa, om.Viata(), om.atac2());
                                cout<<"*************************************************************"<<endl;
                                mod.Lupta(om.Viata(), om.atac2(), om.Viata(), om.atac2(), om.nume, om.nume="Bula");
                            }
                        }break;

                        case 3:
                        {
                            //locul unde se afiseaza detalile caracterului tau si a caraterului ales de calculator
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac3());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul a fost selectat"<<endl;
                            cout<<"*************************************************************"<<endl;

                            //alegerea oponetului de catre calculator
                            if(random==5)
                            {
                                mod.DisplayDetaliCaracterStandardDeCalculator(zombi.nume="Zoto", zombi.Viata(), zombi.Musca());
                                cout<<"*************************************************************"<<endl;
                                mod.Lupta(om.Viata(), om.atac3(), zombi.Viata(), zombi.Musca(), om.nume, zombi.nume="Zoto");
                            }
                            else if(random==4)
                            {
                                mod.DisplayDetaliCaracterStandardDeCalculator(mutant.nume="Righ", mutant.Viata(), mutant.getAruncaFoc());
                                cout<<"*************************************************************"<<endl;
                                mod.Lupta(om.Viata(), om.atac3(), mutant.Viata(), mutant.getAruncaFoc(), om.nume, mutant.nume="Righ");
                            }
                            else if(random==3)
                            {
                                mod.DisplayDetaliCaracterStandardDeCalculator(monstru.nume="Turbg", monstru.Viata(), monstru.getPumnul());
                                cout<<"*************************************************************"<<endl;
                                mod.Lupta(om.Viata(), om.atac3(), monstru.Viata(), monstru.getPumnul(), om.nume, monstru.nume="Turbg");
                            }
                            else if(random==2)
                            {
                                mod.DisplayDetaliCaracterStandardDeCalculator(animal.nume="Bingo", animal.Viata(), animal.AtacCuOtravaSiMusca());
                                cout<<"*************************************************************"<<endl;
                                mod.Lupta(om.Viata(), om.atac3(), animal.Viata(), animal.AtacCuOtravaSiMusca(), om.nume, animal.nume="Bingo");
                            }
                            else if(random==1)
                            {
                                mod.DisplayDetaliCaracterPentruOmDeCalculator(om.nume="Bula",arma_aleasa, om.Viata(), om.atac2());
                                cout<<"*************************************************************"<<endl;
                                mod.Lupta(om.Viata(), om.atac3(), om.Viata(), om.atac2(), om.nume, om.nume="Bula");
                            }
                        }break;
                    }
                }break;

                case 2:
                {
                    //locul unde interactionez cu, caracterul ales de tine
                    cout<<"-------------------------------------------------------------"<<endl;
                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                    cout<<"-Ham, Ham, Marrrrr"<<endl;
                    cout<<"-Da-i si un nume animalului:";
                    cin>>animal.nume;
                    cout<<"-------------------------------------------------------------"<<endl;

                    //locul unde se ca afisa ce ai introdus
                    //locul unde se afiseaza detalile caracterului tau si a caraterului ales de calculator
                    cout<<"*************************************************************"<<endl;
                    mod.DisplayDetaliCaracterStandard(animal.nume, animal.Viata(), animal.AtacCuOtravaSiMusca());
                    cout<<"*************************************************************"<<endl;
                    cout<<"Oponetul a fost selectat"<<endl;
                    cout<<"*************************************************************"<<endl;

                    //alegerea oponetului de catre calculator
                    if(random==5)
                    {
                        mod.DisplayDetaliCaracterStandardDeCalculator(zombi.nume="Zoto", zombi.Viata(), zombi.Musca());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(animal.Viata(), animal.AtacCuOtravaSiMusca(), zombi.Viata(), zombi.Musca(), animal.nume, zombi.nume="Zoto");
                    }
                    else if(random==4)
                    {
                        mod.DisplayDetaliCaracterStandardDeCalculator(mutant.nume="Righ", mutant.Viata(), mutant.getAruncaFoc());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(animal.Viata(), animal.AtacCuOtravaSiMusca(), mutant.Viata(), mutant.getAruncaFoc(), animal.nume, mutant.nume="Righ");
                    }
                    else if(random==3)
                    {
                        mod.DisplayDetaliCaracterStandardDeCalculator(monstru.nume="Turbg", monstru.Viata(), monstru.getPumnul());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(animal.Viata(), animal.AtacCuOtravaSiMusca(), monstru.Viata(), monstru.getPumnul(), animal.nume, monstru.nume="Turbg");
                    }
                    else if(random==2)
                    {
                        mod.DisplayDetaliCaracterStandardDeCalculator(animal.nume="Bingo", animal.Viata(), animal.AtacCuOtravaSiMusca());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(animal.Viata(), animal.AtacCuOtravaSiMusca(), animal.Viata(), animal.AtacCuOtravaSiMusca(), animal.nume, animal.nume="Bingo");
                    }
                    else if(random==1)
                    {
                        mod.DisplayDetaliCaracterPentruOmDeCalculator(om.nume="Bula",arma_aleasa="Sabie", om.Viata(), om.atac2());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(animal.Viata(), animal.AtacCuOtravaSiMusca(), om.Viata(), om.atac2(), animal.nume, om.nume="Bula");
                    }
                }break;

                case 3:
                {
                    //locul unde interactionez cu, caracterul ales de tine
                    cout<<"-------------------------------------------------------------"<<endl;
                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                    cout<<"-Wav, Wav WAAAAA"<<endl;
                    cout<<"-Da-i si un nume monstrului:";
                    cin>>monstru.nume;
                    cout<<"-------------------------------------------------------------"<<endl;

                    //locul unde se ca afisa ce ai introdus
                    //locul unde se afiseaza detalile caracterului tau si a caraterului ales de calculator
                    cout<<"*************************************************************"<<endl;
                    mod.DisplayDetaliCaracterStandard(monstru.nume, monstru.Viata(), monstru.Atac());
                    cout<<"*************************************************************"<<endl;
                    cout<<"Oponetul a fost selectat"<<endl;
                    cout<<"*************************************************************"<<endl;

                    //alegerea oponetului de catre calculator
                    if(random==5)
                    {
                        mod.DisplayDetaliCaracterStandardDeCalculator(zombi.nume="Zoto", zombi.Viata(), zombi.Musca());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(monstru.Viata(), monstru.Atac(), zombi.Viata(), zombi.Musca(), monstru.nume, zombi.nume="Zoto");
                    }
                    else if(random==4)
                    {
                        mod.DisplayDetaliCaracterStandardDeCalculator(mutant.nume="Righ", mutant.Viata(), mutant.getAruncaFoc());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(monstru.Viata(), monstru.Atac(), mutant.Viata(), mutant.getAruncaFoc(), monstru.nume, mutant.nume="Righ");
                    }
                    else if(random==3)
                    {
                        mod.DisplayDetaliCaracterStandardDeCalculator(monstru.nume="Turbg", monstru.Viata(), monstru.getPumnul());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(monstru.Viata(), monstru.Atac(), monstru.Viata(), monstru.getPumnul(), monstru.nume, monstru.nume="Turbg");
                    }
                    else if(random==2)
                    {
                        mod.DisplayDetaliCaracterStandardDeCalculator(animal.nume="Bingo", animal.Viata(), animal.AtacCuOtravaSiMusca());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(monstru.Viata(), monstru.Atac(), animal.Viata(), animal.AtacCuOtravaSiMusca(), monstru.nume, animal.nume="Bingo");
                    }
                    else if(random==1)
                    {
                        mod.DisplayDetaliCaracterPentruOmDeCalculator(om.nume="Bula",arma_aleasa="Sabie", om.Viata(), om.atac2());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(monstru.Viata(), monstru.Atac(), om.Viata(), om.atac2(), monstru.nume, om.nume="Bula");
                    }
                }break;

                case 4:
                {
                    //locul unde interactionez cu, caracterul ales de tine
                    cout<<"-------------------------------------------------------------"<<endl;
                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                    cout<<"-Waaaaa, Waaaa,Waaaaaa"<<endl;
                    cout<<"-Da-i si un nume mutantului:";
                    cin>>mutant.nume;
                    cout<<"-------------------------------------------------------------"<<endl;

                    //locul unde se ca afisa ce ai introdus
                    //locul unde se afiseaza detalile caracterului tau si a caraterului ales de calculator
                    cout<<"*************************************************************"<<endl;
                    mod.DisplayDetaliCaracterStandard(mutant.nume, mutant.Viata(), mutant.Atac());
                    cout<<"*************************************************************"<<endl;
                    cout<<"Oponetul a fost selectat"<<endl;
                    cout<<"*************************************************************"<<endl;

                    //alegerea oponetului de catre calculator
                    if(random==5)
                    {
                        mod.DisplayDetaliCaracterStandardDeCalculator(zombi.nume="Zoto", zombi.Viata(), zombi.Musca());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(mutant.Viata(), mutant.Atac(), zombi.Viata(), zombi.Musca(), mutant.nume, zombi.nume="Zoto");
                    }
                    else if(random==4)
                    {
                        mod.DisplayDetaliCaracterStandardDeCalculator(mutant.nume="Righ", mutant.Viata(), mutant.getAruncaFoc());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(mutant.Viata(), mutant.Atac(), mutant.Viata(), mutant.getAruncaFoc(), mutant.nume, mutant.nume="Righ");
                    }
                    else if(random==3)
                    {
                        mod.DisplayDetaliCaracterStandardDeCalculator(monstru.nume="Turbg", monstru.Viata(), monstru.getPumnul());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(mutant.Viata(), mutant.Atac(), monstru.Viata(), monstru.getPumnul(), mutant.nume, monstru.nume="Turbg");
                    }
                    else if(random==2)
                    {
                        mod.DisplayDetaliCaracterStandardDeCalculator(animal.nume="Bingo", animal.Viata(), animal.AtacCuOtravaSiMusca());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(mutant.Viata(), mutant.Atac(), animal.Viata(), animal.AtacCuOtravaSiMusca(), mutant.nume, animal.nume="Bingo");
                    }
                    else if(random==1)
                    {
                        mod.DisplayDetaliCaracterPentruOmDeCalculator(om.nume="Bula",arma_aleasa="Sabie", om.Viata(), om.atac2());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(mutant.Viata(), mutant.Atac(), om.Viata(), om.atac2(), mutant.nume, om.nume="Bula");
                    }
                }break;

                case 5:
                {
                    //locul unde interactionez cu, caracterul ales de tine
                    cout<<"-------------------------------------------------------------"<<endl;
                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                    cout<<"-Roaaaaa, Roooaaa"<<endl;
                    cout<<"-Da-i un nume la zombi:";
                    cin>>zombi.nume;
                    cout<<"-------------------------------------------------------------"<<endl;

                    //locul unde se ca afisa ce ai introdus
                    //locul unde se afiseaza detalile caracterului tau si a caraterului ales de calculator
                    cout<<"*************************************************************"<<endl;
                    mod.DisplayDetaliCaracterStandard(zombi.nume, zombi.Viata(), zombi.Musca());
                    cout<<"*************************************************************"<<endl;
                    cout<<"Oponetul a fost selectat"<<endl;
                    cout<<"*************************************************************"<<endl;

                    //alegerea oponetului de catre calculator
                    if(random==5)
                    {
                        mod.DisplayDetaliCaracterStandardDeCalculator(zombi.nume="Zoto", zombi.Viata(), zombi.Musca());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(zombi.Viata(), zombi.Musca(), zombi.Viata(), zombi.Musca(), zombi.nume, zombi.nume="Zoto");
                    }
                    else if(random==4)
                    {
                        mod.DisplayDetaliCaracterStandardDeCalculator(mutant.nume="Righ", mutant.Viata(), mutant.getAruncaFoc());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(zombi.Viata(), zombi.Musca(), mutant.Viata(), mutant.getAruncaFoc(), zombi.nume, mutant.nume="Righ");
                    }
                    else if(random==3)
                    {
                        mod.DisplayDetaliCaracterStandardDeCalculator(monstru.nume="Turbg", monstru.Viata(), monstru.getPumnul());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(zombi.Viata(), zombi.Musca(), monstru.Viata(), monstru.getPumnul(), zombi.nume, monstru.nume="Turbg");
                    }
                    else if(random==2)
                    {
                        mod.DisplayDetaliCaracterStandardDeCalculator(animal.nume="Bingo", animal.Viata(), animal.AtacCuOtravaSiMusca());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(zombi.Viata(), zombi.Musca(), animal.Viata(), animal.AtacCuOtravaSiMusca(), zombi.nume, animal.nume="Bingo");
                    }
                    else if(random==1)
                    {
                        mod.DisplayDetaliCaracterPentruOmDeCalculator(om.nume="Bula",arma_aleasa="Sabie", om.Viata(), om.atac2());
                        cout<<"*************************************************************"<<endl;
                        mod.Lupta(zombi.Viata(), zombi.Musca(), om.Viata(), om.atac2(), zombi.nume, om.nume="Bula");
                    }
                }break;
            }
        }break;
        //cazul in care se joaca JUCATOR VS JUCATOR
        case 2:
        {
            cout<<"*************************************************************************"<<endl;
            cout<<"|                                                                       |"<<endl;
            cout<<"|                                                                       |"<<endl;
            cout<<"|          Bun venit in sistemul de joc Jucator vs Jucator              |"<<endl;
            cout<<"|                                                                       |"<<endl;
            cout<<"|                                                                       |"<<endl;
            cout<<"*************************************************************************"<<endl;

            cout<<endl;

            mod.DisplayCaracter2();
            cout<<"Primul jucator trebuie sa selecteze un caracter pentru inceperea luptei"<<endl;
            cout<<"Alege un caracter si scrie numarul lui si apasa 'Enter': ";
            cin>>numar_caracter;
            switch(numar_caracter)
            {
                case 1:
                {
                    //locul unde interactionez cu, caracterul ales de tine
                    cout<<"-------------------------------------------------------------"<<endl;
                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                    cout<<"-Roaaaaa, Roooaaa"<<endl;
                    cout<<"-Da-i un nume la zombi:";
                    cin>>zombi.nume;
                    string qwe=zombi.nume;
                    cout<<"Esti primul jucator si a posibilitatea de a alege daca vrei sa ataci prtimul.."<<endl;
                    cout<<"Scrie atac sau aparare: ";
                    cin>>p;
                    cout<<"-------------------------------------------------------------"<<endl;

                    mod.DisplayCaracter2();
                    cout<<"Jucatorul cu numarul doi trebuie sa isi aleaga un caracter pentru a incpe lupta "<<endl;
                    cout<<"Alege un caracter si scrie numarul lui si apasa 'Enter': ";
                    cin>>numar_caracter;
                    switch(numar_caracter)
                    {
                        case 1:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Roaaaaa, Roooaaa"<<endl;
                            cout<<"-Da-i un nume la zombi:";
                            cin>>zombi.nume;
                            cout<<"-------------------------------------------------------------"<<endl;

                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(qwe, zombi.Viata(), zombi.Musca());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul tau"<<endl;
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(zombi.nume, zombi.Viata(), zombi.Musca());
                            cout<<"*************************************************************"<<endl;
                            mod.LuptaMulti(zombi.Viata(), zombi.Musca(), zombi.Viata(), zombi.Musca(), qwe, zombi.nume, p);
                        }break;

                        case 2:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Marr, Hamm..."<<endl;
                            cout<<"-Da-i si un nume animalului:";
                            cin>>animal.nume;
                            cout<<"-------------------------------------------------------------"<<endl;

                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(qwe, zombi.Viata(), zombi.Musca());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul tau"<<endl;
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(animal.nume, animal.Viata(), animal.AtacCuOtravaSiMusca());
                            cout<<"*************************************************************"<<endl;
                            mod.LuptaMulti(zombi.Viata(), zombi.Musca(), animal.Viata(),  animal.AtacCuOtravaSiMusca(), qwe, animal.nume, p);
                        }break;

                        case 3:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Waaa, Wowere..."<<endl;
                            cout<<"-Da-i un nume mutatului:";
                            cin>>mutant.nume;
                            cout<<"-------------------------------------------------------------"<<endl;

                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(qwe, zombi.Viata(), zombi.Musca());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul tau"<<endl;
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(mutant.nume, mutant.Viata(), mutant.Atac());
                            cout<<"*************************************************************"<<endl;
                            mod.LuptaMulti(zombi.Viata(), zombi.Musca(),  mutant.Viata(), mutant.Atac(), qwe, mutant.nume, p);
                        }break;

                        case 4:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Roaaaaa, Rooaaa..."<<endl;
                            cout<<"-Da-i un nume monstrului:";
                            cin>>monstru.nume;
                            cout<<"-------------------------------------------------------------"<<endl;

                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(qwe, zombi.Viata(), zombi.Musca());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul tau"<<endl;
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(monstru.nume, monstru.Viata(), monstru.Atac());
                            cout<<"*************************************************************"<<endl;
                            mod.LuptaMulti(zombi.Viata(), zombi.Musca(), monstru.Viata(), monstru.Atac(), qwe, monstru.nume, p);
                        }break;

                        case 5:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Salut ai luat cea mai buna decizie alegandu-ma..., Nu o sa te dezamagesc.."<<endl;
                            cout<<"-Da-mi si un nume:";
                            cin>>om.nume;
                            mod.DisplyWepon();
                            cout<<"-Introdu numarul armei:";
                            cin>>numar_arma;
                            cout<<"Scrie numele armei alese de tine: ";
                            cin>>arma_aleasa;
                            cout<<"-------------------------------------------------------------"<<endl;

                            switch(numar_arma)
                            {
                                case 1:
                                {
                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, zombi.Viata(), zombi.Musca());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac1());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(zombi.Viata(), zombi.Musca(), om.Viata(), om.atac1(), qwe, om.nume, p);
                                }break;

                                case 2:
                                {
                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, zombi.Viata(), zombi.Musca());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac2());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(zombi.Viata(), zombi.Musca(), om.Viata(), om.atac2(), qwe, om.nume, p);
                                }break;

                                case 3:
                                {
                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, zombi.Viata(), zombi.Musca());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac3());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(zombi.Viata(), zombi.Musca(), om.Viata(), om.atac3(), qwe, om.nume, p);
                                }break;
                            }
                        }break;
                    }
                }break;

                case 2:
                {
                    //locul unde interactionez cu, caracterul ales de tine
                    cout<<"-------------------------------------------------------------"<<endl;
                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                    cout<<"-Hammm.., Hauuu..."<<endl;
                    cout<<"-Da-i un nume la animalului:";
                    cin>>animal.nume;
                    string qwe=animal.nume;
                    cout<<"Esti primul jucator si a posibilitatea de a alege daca vrei sa ataci prtimul.."<<endl;
                    cout<<"Scrie atac sau aparare: ";
                    cin>>p;
                    cout<<"-------------------------------------------------------------"<<endl;

                    mod.DisplayCaracter2();
                    cout<<"Jucatorul cu numarul doi trebuie sa isi aleaga un caracter pentru a incpe lupta "<<endl;
                    cout<<"Alege un caracter si scrie numarul lui si apasa 'Enter': ";
                    cin>>numar_caracter;
                    switch(numar_caracter)
                    {
                        case 1:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Roaaaaa, Roooaaa"<<endl;
                            cout<<"-Da-i un nume la zombi:";
                            cin>>zombi.nume;
                            cout<<"-------------------------------------------------------------"<<endl;

                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(qwe, animal.Viata(), animal.AtacCuOtravaSiMusca());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul tau"<<endl;
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(zombi.nume, zombi.Viata(), zombi.Musca());
                            cout<<"*************************************************************"<<endl;
                            mod.LuptaMulti(animal.Viata(), animal.AtacCuOtravaSiMusca(), zombi.Viata(), zombi.Musca(), qwe, zombi.nume, p);
                        }break;

                        case 2:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Marr, Hamm..."<<endl;
                            cout<<"-Da-i si un nume animalului:";
                            cin>>animal.nume;
                            cout<<"-------------------------------------------------------------"<<endl;

                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(qwe, animal.Viata(), animal.AtacCuOtravaSiMusca());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul tau"<<endl;
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(animal.nume, animal.Viata(), animal.AtacCuOtravaSiMusca());
                            cout<<"*************************************************************"<<endl;
                            mod.LuptaMulti(animal.Viata(), animal.AtacCuOtravaSiMusca(), animal.Viata(), animal.AtacCuOtravaSiMusca(), qwe, animal.nume, p);
                        }break;

                        case 3:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Waaa, Wowere..."<<endl;
                            cout<<"-Da-i un nume mutatului:";
                            cin>>mutant.nume;
                            cout<<"-------------------------------------------------------------"<<endl;

                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(qwe, animal.Viata(), animal.AtacCuOtravaSiMusca());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul tau"<<endl;
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(mutant.nume, mutant.Viata(), mutant.Atac());
                            cout<<"*************************************************************"<<endl;
                            mod.LuptaMulti(animal.Viata(), animal.AtacCuOtravaSiMusca(), mutant.Viata(),  mutant.Atac(), qwe, mutant.nume, p);
                        }break;

                        case 4:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Roaaaaa, Rooaaa..."<<endl;
                            cout<<"-Da-i un nume monstrului:";
                            cin>>monstru.nume;
                            cout<<"-------------------------------------------------------------"<<endl;

                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                            cout<<"*************************************************************";
                            mod.DisplayDetaliCaracterStandard(qwe, animal.Viata(), animal.AtacCuOtravaSiMusca());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul tau"<<endl;
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(monstru.nume, monstru.Viata(), monstru.Atac());
                            cout<<"*************************************************************"<<endl;
                            mod.LuptaMulti(animal.Viata(), animal.AtacCuOtravaSiMusca(), monstru.Viata(), monstru.Atac(), qwe, monstru.nume, p);
                        }break;

                        case 5:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Salut ai luat cea mai buna decizie alegandu-ma..., Nu o sa te dezamagesc.."<<endl;
                            cout<<"-Da-mi si un nume:";
                            cin>>om.nume;
                            mod.DisplyWepon();
                            cout<<"-Introdu numarul armei:";
                            cin>>numar_arma;
                            cout<<"Scrie numele armei alese de tine: ";
                            cin>>arma_aleasa;
                            cout<<"-------------------------------------------------------------"<<endl;

                            switch(numar_arma)
                            {
                                case 1:
                                {
                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, animal.Viata(), animal.AtacCuOtravaSiMusca());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac1());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(animal.Viata(), animal.AtacCuOtravaSiMusca(), om.Viata(), om.atac1(), qwe, om.nume, p);
                                }break;

                                case 2:
                                {
                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, animal.Viata(), animal.AtacCuOtravaSiMusca());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac2());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(animal.Viata(), animal.AtacCuOtravaSiMusca(), om.Viata(), om.atac2(), qwe, om.nume, p);
                                }break;

                                case 3:
                                {
                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, animal.Viata(), animal.AtacCuOtravaSiMusca());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac3());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(animal.Viata(), animal.AtacCuOtravaSiMusca(), om.Viata(), om.atac3(), qwe, om.nume, p);
                                }break;
                            }
                        }break;
                    }
                }break;

                case 3:
                {
                    //locul unde interactionez cu, caracterul ales de tine
                    cout<<"-------------------------------------------------------------"<<endl;
                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                    cout<<"-Hammm.., Hauuu..."<<endl;
                    cout<<"-Da-i un nume la mutantului:";
                    cin>>mutant.nume;
                    string qwe=mutant.nume;
                    cout<<"Esti primul jucator si a posibilitatea de a alege daca vrei sa ataci prtimul.."<<endl;
                    cout<<"Scrie atac sau aparare: ";
                    cin>>p;
                    cout<<"-------------------------------------------------------------"<<endl;

                    mod.DisplayCaracter2();
                    cout<<"Jucatorul cu numarul doi trebuie sa isi aleaga un caracter pentru a incpe lupta "<<endl;
                    cout<<"Alege un caracter si scrie numarul lui si apasa 'Enter': ";
                    cin>>numar_caracter;
                    switch(numar_caracter)
                    {
                        case 1:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Roaaaaa, Roooaaa"<<endl;
                            cout<<"-Da-i un nume la zombi:";
                            cin>>zombi.nume;
                            cout<<"-------------------------------------------------------------"<<endl;

                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(qwe, mutant.Viata(), mutant.Atac());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul tau"<<endl;
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(zombi.nume, zombi.Viata(), zombi.Musca());
                            cout<<"*************************************************************"<<endl;
                            mod.LuptaMulti( mutant.Viata(), mutant.Atac(), zombi.Viata(), zombi.Musca(), qwe, zombi.nume, p);
                        }break;

                        case 2:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Marr, Hamm..."<<endl;
                            cout<<"-Da-i si un nume animalului:";
                            cin>>animal.nume;
                            cout<<"-------------------------------------------------------------"<<endl;

                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(qwe, mutant.Viata(), mutant.Atac());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul tau"<<endl;
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(animal.nume, animal.Viata(), animal.AtacCuOtravaSiMusca());
                            cout<<"*************************************************************"<<endl;
                            mod.LuptaMulti(mutant.Viata(), mutant.Atac(), animal.Viata(), animal.AtacCuOtravaSiMusca(), qwe, animal.nume, p);
                        }break;

                        case 3:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Waaa, Wowere..."<<endl;
                            cout<<"-Da-i un nume mutatului:";
                            cin>>mutant.nume;
                            cout<<"-------------------------------------------------------------"<<endl;

                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(qwe, mutant.Viata(), mutant.Atac());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul tau"<<endl;
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(mutant.nume, mutant.Viata(), mutant.Atac());
                            cout<<"*************************************************************"<<endl;
                            mod.LuptaMulti(mutant.Viata(), mutant.Atac(),  mutant.Viata(), mutant.Atac(), qwe, mutant.nume, p);
                        }break;

                        case 4:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Roaaaaa, Rooaaa..."<<endl;
                            cout<<"-Da-i un nume monstrului:";
                            cin>>monstru.nume;
                            cout<<"-------------------------------------------------------------"<<endl;

                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(qwe, mutant.Viata(), mutant.Atac());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul tau"<<endl;
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(monstru.nume, monstru.Viata(), monstru.Atac());
                            cout<<"*************************************************************"<<endl;
                            mod.LuptaMulti( mutant.Viata(), mutant.Atac(), monstru.Viata(), monstru.Atac(), qwe, monstru.nume, p);
                        }break;

                        case 5:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Salut ai luat cea mai buna decizie alegandu-ma..., Nu o sa te dezamagesc.."<<endl;
                            cout<<"-Da-mi si un nume:";
                            cin>>om.nume;
                            mod.DisplyWepon();
                            cout<<"-Introdu numarul armei:";
                            cin>>numar_arma;
                            cout<<"Scrie numele armei alese de tine: ";
                            cin>>arma_aleasa;
                            cout<<"-------------------------------------------------------------"<<endl;

                            switch(numar_arma)
                            {
                                case 1:
                                {
                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, mutant.Viata(), mutant.Atac());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac1());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(mutant.Viata(), mutant.Atac(), om.Viata(), om.atac1(), qwe, om.nume, p);
                                }break;

                                case 2:
                                {
                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, mutant.Viata(), mutant.Atac());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac2());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(mutant.Viata(), mutant.Atac(), om.Viata(), om.atac2(), qwe, om.nume, p);
                                }break;

                                case 3:
                                {
                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, mutant.Viata(), mutant.Atac());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac3());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(mutant.Viata(), mutant.Atac(), om.Viata(), om.atac3(), qwe, om.nume, p);
                                }break;
                            }
                        }break;
                    }
                }break;

                case 4:
                {
                    //locul unde interactionez cu, caracterul ales de tine
                    cout<<"-------------------------------------------------------------"<<endl;
                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                    cout<<"-Roaaa.., Wooaaaa..."<<endl;
                    cout<<"-Da-i un nume la mutantului:";
                    cin>>monstru.nume;
                    string qwe=monstru.nume;
                    cout<<"Esti primul jucator si a posibilitatea de a alege daca vrei sa ataci prtimul.."<<endl;
                    cout<<"Scrie atac sau aparare: ";
                    cin>>p;
                    cout<<"-------------------------------------------------------------"<<endl;

                    mod.DisplayCaracter2();
                    cout<<"Jucatorul cu numarul doi trebuie sa isi aleaga un caracter pentru a incpe lupta "<<endl;
                    cout<<"Alege un caracter si scrie numarul lui si apasa 'Enter': ";
                    cin>>numar_caracter;
                    switch(numar_caracter)
                    {
                        case 1:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Roaaaaa, Roooaaa"<<endl;
                            cout<<"-Da-i un nume la zombi:";
                            cin>>zombi.nume;
                            cout<<"-------------------------------------------------------------"<<endl;

                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(qwe, monstru.Viata(), monstru.Atac());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul tau"<<endl;
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(zombi.nume, zombi.Viata(), zombi.Musca());
                            cout<<"*************************************************************"<<endl;
                            mod.LuptaMulti(monstru.Viata(),  monstru.Atac(), zombi.Viata(), zombi.Musca(), qwe, zombi.nume, p);
                        }break;

                        case 2:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Marr, Hamm..."<<endl;
                            cout<<"-Da-i si un nume animalului:";
                            cin>>animal.nume;
                            cout<<"-------------------------------------------------------------"<<endl;

                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(qwe, monstru.Viata(), monstru.Atac());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul tau"<<endl;
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(animal.nume, animal.Viata(), animal.AtacCuOtravaSiMusca());
                            cout<<"*************************************************************"<<endl;
                            mod.LuptaMulti(monstru.Viata(), monstru.Atac(), animal.Viata(), animal.AtacCuOtravaSiMusca(), qwe, animal.nume, p);
                        }break;

                        case 3:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Waaa, Wowere..."<<endl;
                            cout<<"-Da-i un nume mutatului:";
                            cin>>mutant.nume;
                            cout<<"-------------------------------------------------------------"<<endl;

                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(qwe, monstru.Viata(), monstru.Atac());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul tau"<<endl;
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(mutant.nume, mutant.Viata(), mutant.Atac());
                            cout<<"*************************************************************"<<endl;
                            mod.LuptaMulti( monstru.Viata(), monstru.Atac(),  mutant.Viata(), mutant.Atac(), qwe, mutant.nume, p);
                        }break;

                        case 4:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Roaaaaa, Rooaaa..."<<endl;
                            cout<<"-Da-i un nume monstrului:";
                            cin>>monstru.nume;
                            cout<<"-------------------------------------------------------------"<<endl;

                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(qwe, monstru.Viata(), monstru.Atac());
                            cout<<"*************************************************************"<<endl;
                            cout<<"Oponetul tau"<<endl;
                            cout<<"*************************************************************"<<endl;
                            mod.DisplayDetaliCaracterStandard(monstru.nume, monstru.Viata(), monstru.Atac());
                            cout<<"*************************************************************"<<endl;
                            mod.LuptaMulti(monstru.Viata(), monstru.Atac(), monstru.Viata(), monstru.Atac(), qwe, monstru.nume, p);
                        }break;

                        case 5:
                        {
                            //locul unde interactionez cu, caracterul ales de tine
                            cout<<"-------------------------------------------------------------"<<endl;
                            cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                            cout<<"-Salut ai luat cea mai buna decizie alegandu-ma..., Nu o sa te dezamagesc.."<<endl;
                            cout<<"-Da-mi si un nume:";
                            cin>>om.nume;
                            mod.DisplyWepon();
                            cout<<"-Introdu numarul armei:";
                            cout<<numar_arma;
                            cout<<"Scrie numele armei alese de tine: ";
                            cin>>arma_aleasa;
                            cout<<"Esti primul jucator si a posibilitatea de a alege daca vrei sa ataci prtimul.."<<endl;
                            cout<<"Scrie atac sau aparare: ";
                            cin>>p;
                            cout<<"-------------------------------------------------------------"<<endl;

                            switch(numar_arma)
                            {
                                case 1:
                                {
                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, monstru.Viata(), monstru.Atac());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac1());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(monstru.Viata(), monstru.Atac(), om.Viata(), om.atac1(), qwe, om.nume, p);
                                }break;

                                case 2:
                                {
                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, monstru.Viata(), monstru.Atac());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac2());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(monstru.Viata(), monstru.Atac(), om.Viata(), om.atac2(), qwe, om.nume, p);
                                }break;

                                case 3:
                                {
                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, monstru.Viata(), monstru.Atac());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac3());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(monstru.Viata(), monstru.Atac(), om.Viata(), om.atac3(), qwe, om.nume, p);
                                }break;
                            }
                        }break;
                    }
                }break;

                case 5:
                {
                    //locul unde interactionez cu, caracterul ales de tine
                    cout<<"-------------------------------------------------------------"<<endl;
                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                    cout<<"-Salut ai luat cea mai buna decizie alegandu-ma..., Nu o sa te dezamagesc.."<<endl;
                    cout<<"-Da-mi si un nume:";
                    cin>>om.nume;
                    string qwe=om.nume;
                    mod.DisplyWepon();
                    cout<<"-Introdu numarul armei:";
                    cin>>numar_arma;
                    cout<<"Scrie numele armei alese de tine: ";
                    cin>>arma_aleasa;
                    cout<<"Esti primul jucator si a posibilitatea de a alege daca vrei sa ataci prtimul.."<<endl;
                    cout<<"Scrie atac sau aparare: ";
                    cin>>p;
                    cout<<"-------------------------------------------------------------"<<endl;

                    switch(numar_arma)
                    {
                        case 1:
                        {
                            mod.DisplayCaracter2();
                            cout<<"Jucatorul cu numarul doi trebuie sa isi aleaga un caracter pentru a incpe lupta "<<endl;
                            cout<<"Alege un caracter si scrie numarul lui si apasa 'Enter': ";
                            cin>>numar_caracter;
                            switch(numar_caracter)
                            {
                                case 1:
                                {
                                    //locul unde interactionez cu, caracterul ales de tine
                                    cout<<"-------------------------------------------------------------"<<endl;
                                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                                    cout<<"-Roaaaaa, Roooaaa"<<endl;
                                    cout<<"-Da-i un nume la zombi:";
                                    cin>>zombi.nume;
                                    cout<<"-------------------------------------------------------------"<<endl;

                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac1());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(zombi.nume, zombi.Viata(), zombi.Musca());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(om.Viata(), om.atac1(), zombi.Viata(), zombi.Musca(), qwe, zombi.nume, p);
                                }break;

                                case 2:
                                {
                                    //locul unde interactionez cu, caracterul ales de tine
                                    cout<<"-------------------------------------------------------------"<<endl;
                                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                                    cout<<"-Marr, Hamm..."<<endl;
                                    cout<<"-Da-i si un nume animalului:";
                                    cin>>animal.nume;
                                    cout<<"-------------------------------------------------------------"<<endl;

                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac1());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(animal.nume, animal.Viata(), animal.AtacCuOtravaSiMusca());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(om.Viata(), om.atac2(), animal.Viata(), animal.AtacCuOtravaSiMusca(), qwe, animal.nume, p);
                                }break;

                                case 3:
                                {
                                    //locul unde interactionez cu, caracterul ales de tine
                                    cout<<"-------------------------------------------------------------"<<endl;
                                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                                    cout<<"-Waaa, Wowere..."<<endl;
                                    cout<<"-Da-i un nume mutatului:";
                                    cin>>mutant.nume;
                                    cout<<"-------------------------------------------------------------"<<endl;

                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac1());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(mutant.nume, mutant.Viata(), mutant.Atac());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(om.Viata(), om.atac2(), mutant.Viata(), mutant.Atac(), qwe, mutant.nume, p);
                                }break;

                                case 4:
                                {
                                    //locul unde interactionez cu, caracterul ales de tine
                                    cout<<"-------------------------------------------------------------"<<endl;
                                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                                    cout<<"-Roaaaaa, Rooaaa..."<<endl;
                                    cout<<"-Da-i un nume monstrului:";
                                    cin>>monstru.nume;
                                    cout<<"-------------------------------------------------------------"<<endl;

                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac1());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(monstru.nume, monstru.Viata(), monstru.Atac());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(om.Viata(), om.atac2(), mutant.Viata(), mutant.Atac(), qwe, mutant.nume, p);
                                }break;

                                case 5:
                                {
                                    //locul unde interactionez cu, caracterul ales de tine
                                    cout<<"-------------------------------------------------------------"<<endl;
                                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                                    cout<<"-Salut ai luat cea mai buna decizie alegandu-ma..., Nu o sa te dezamagesc.."<<endl;
                                    cout<<"-Da-mi si un nume:";
                                    cin>>om.nume;
                                    mod.DisplyWepon();
                                    cout<<"-Introdu numarul armei:";
                                    cout<<numar_arma;
                                    cout<<"Scrie numele armei alese de tine: ";
                                    cin>>arma_aleasa;
                                    cout<<"-------------------------------------------------------------"<<endl;

                                    switch(numar_arma)
                                    {
                                        case 1:
                                        {
                                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                                            cout<<"*************************************************************"<<endl;
                                            mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac1());
                                            cout<<"*************************************************************"<<endl;
                                            cout<<"Oponetul tau"<<endl;
                                            cout<<"*************************************************************"<<endl;
                                            mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac1());
                                            cout<<"*************************************************************"<<endl;
                                            mod.LuptaMulti(om.Viata(), om.atac1(), om.Viata(), om.atac1(), qwe,om.nume, p);
                                        }break;

                                        case 2:
                                        {
                                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                                            cout<<"*************************************************************"<<endl;
                                            mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac1());
                                            cout<<"*************************************************************"<<endl;
                                            cout<<"Oponetul tau"<<endl;
                                            cout<<"*************************************************************"<<endl;
                                            mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac2());
                                            cout<<"*************************************************************"<<endl;
                                            mod.LuptaMulti(om.Viata(), om.atac1(), om.Viata(), om.atac2(), qwe,om.nume, p);
                                        }break;

                                        case 3:
                                        {
                                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                                            cout<<"*************************************************************"<<endl;
                                            mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac1());
                                            cout<<"*************************************************************"<<endl;
                                            cout<<"Oponetul tau"<<endl;
                                            cout<<"*************************************************************"<<endl;
                                            mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac3());
                                            cout<<"*************************************************************"<<endl;
                                            mod.LuptaMulti(om.Viata(), om.atac1(), om.Viata(), om.atac3(), qwe,om.nume, p);
                                        }break;
                                    }
                                }break;
                            }
                        }break;

                        case 2:
                        {
                            mod.DisplayCaracter2();
                            cout<<"Jucatorul cu numarul doi trebuie sa isi aleaga un caracter pentru a incpe lupta "<<endl;
                            cout<<"Alege un caracter si scrie numarul lui si apasa 'Enter': ";
                            cin>>numar_caracter;
                            switch(numar_caracter)
                            {
                                case 1:
                                {
                                    //locul unde interactionez cu, caracterul ales de tine
                                    cout<<"-------------------------------------------------------------"<<endl;
                                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                                    cout<<"-Roaaaaa, Roooaaa"<<endl;
                                    cout<<"-Da-i un nume la zombi:";
                                    cin>>zombi.nume;

                                    cout<<"-------------------------------------------------------------"<<endl;

                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac2());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(zombi.nume, zombi.Viata(), zombi.Musca());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(om.Viata(), om.atac2(), zombi.Viata(), zombi.Musca(), qwe, zombi.nume, p);
                                }break;

                                case 2:
                                {
                                    //locul unde interactionez cu, caracterul ales de tine
                                    cout<<"-------------------------------------------------------------"<<endl;
                                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                                    cout<<"-Marr, Hamm..."<<endl;
                                    cout<<"-Da-i si un nume animalului:";
                                    cin>>animal.nume;
                                    cout<<"-------------------------------------------------------------"<<endl;

                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac2());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(animal.nume, animal.Viata(), animal.AtacCuOtravaSiMusca());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(om.Viata(), om.atac2(), animal.Viata(), animal.AtacCuOtravaSiMusca(), qwe, animal.nume, p);
                                }break;

                                case 3:
                                {
                                    //locul unde interactionez cu, caracterul ales de tine
                                    cout<<"-------------------------------------------------------------"<<endl;
                                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                                    cout<<"-Waaa, Wowere..."<<endl;
                                    cout<<"-Da-i un nume mutatului:";
                                    cin>>mutant.nume;
                                    cout<<"-------------------------------------------------------------"<<endl;

                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac2());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(mutant.nume, mutant.Viata(), mutant.Atac());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(om.Viata(), om.atac2(), mutant.Viata(), mutant.Atac(), qwe, mutant.nume, p);
                                }break;

                                case 4:
                                {
                                    //locul unde interactionez cu, caracterul ales de tine
                                    cout<<"-------------------------------------------------------------"<<endl;
                                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                                    cout<<"-Roaaaaa, Rooaaa..."<<endl;
                                    cout<<"-Da-i un nume monstrului:";
                                    cin>>monstru.nume;
                                    cout<<"-------------------------------------------------------------"<<endl;

                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac2());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(monstru.nume, monstru.Viata(), monstru.Atac());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(om.Viata(), om.atac2(), monstru.Viata(), monstru.Atac(), qwe, monstru.nume, p);
                                }break;

                                case 5:
                                {
                                    //locul unde interactionez cu, caracterul ales de tine
                                    cout<<"-------------------------------------------------------------"<<endl;
                                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                                    cout<<"-Salut ai luat cea mai buna decizie alegandu-ma..., Nu o sa te dezamagesc.."<<endl;
                                    cout<<"-Da-mi si un nume:";
                                    cin>>om.nume;
                                    mod.DisplyWepon();
                                    cout<<"-Introdu numarul armei:";
                                    cin>>numar_arma;
                                    cout<<"Scrie numele armei alese de tine: ";
                                    cin>>arma_aleasa;
                                    cout<<"-------------------------------------------------------------"<<endl;

                                    switch(numar_arma)
                                    {
                                        case 1:
                                        {
                                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                                            cout<<"*************************************************************"<<endl;
                                            mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac1());
                                            cout<<"*************************************************************"<<endl;
                                            cout<<"Oponetul tau"<<endl;
                                            cout<<"*************************************************************"<<endl;
                                            mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac1());
                                            cout<<"*************************************************************"<<endl;
                                            mod.LuptaMulti(om.Viata(), om.atac1(), om.Viata(), om.atac1(), qwe, om.nume, p);
                                        }break;

                                        case 2:
                                        {
                                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                                            cout<<"*************************************************************"<<endl;
                                            mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac1());
                                            cout<<"*************************************************************"<<endl;
                                            cout<<"Oponetul tau"<<endl;
                                            cout<<"*************************************************************"<<endl;
                                            mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac2());
                                            cout<<"*************************************************************"<<endl;
                                            mod.LuptaMulti(om.Viata(), om.atac1(), om.Viata(), om.atac2(), qwe, om.nume, p);
                                        }break;

                                        case 3:
                                        {
                                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                                            cout<<"*************************************************************"<<endl;
                                            mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac1());
                                            cout<<"*************************************************************"<<endl;
                                            cout<<"Oponetul tau"<<endl;
                                            cout<<"*************************************************************"<<endl;
                                            mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac3());
                                            cout<<"*************************************************************"<<endl;
                                            mod.LuptaMulti(om.Viata(), om.atac1(), om.Viata(), om.atac3(), qwe, om.nume, p);
                                        }break;
                                    }
                                }break;
                            }
                        }break;

                        case 3:
                        {
                            mod.DisplayCaracter2();
                            cout<<"Jucatorul cu numarul doi trebuie sa isi aleaga un caracter pentru a incpe lupta "<<endl;
                            cout<<"Alege un caracter si scrie numarul lui si apasa 'Enter': ";
                            cin>>numar_caracter;
                            switch(numar_caracter)
                            {
                                case 1:
                                {
                                    //locul unde interactionez cu, caracterul ales de tine
                                    cout<<"-------------------------------------------------------------"<<endl;
                                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                                    cout<<"-Roaaaaa, Roooaaa"<<endl;
                                    cout<<"-Da-i un nume la zombi:";
                                    cin>>zombi.nume;
                                    cout<<"-------------------------------------------------------------"<<endl;

                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac3());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(zombi.nume, zombi.Viata(), zombi.Musca());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(om.Viata(), om.atac1(), zombi.Viata(), zombi.Musca(), qwe, zombi.nume, p);
                                }break;

                                case 2:
                                {
                                    //locul unde interactionez cu, caracterul ales de tine
                                    cout<<"-------------------------------------------------------------"<<endl;
                                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                                    cout<<"-Marr, Hamm..."<<endl;
                                    cout<<"-Da-i si un nume animalului:";
                                    cin>>animal.nume;
                                    cout<<"-------------------------------------------------------------"<<endl;

                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac3());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(animal.nume, animal.Viata(), animal.AtacCuOtravaSiMusca());
                                    cout<<"*************************************************************";
                                    mod.LuptaMulti(om.Viata(), om.atac1(), animal.Viata(), animal.AtacCuOtravaSiMusca(), qwe, animal.nume, p);
                                }break;

                                case 3:
                                {
                                    //locul unde interactionez cu, caracterul ales de tine
                                    cout<<"-------------------------------------------------------------"<<endl;
                                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                                    cout<<"-Waaa, Wowere..."<<endl;
                                    cout<<"-Da-i un nume mutatului:";
                                    cin>>mutant.nume;
                                    cout<<"-------------------------------------------------------------"<<endl;

                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac3());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(mutant.nume, mutant.Viata(), mutant.Atac());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(om.Viata(), om.atac1(), mutant.Viata(), mutant.Atac(), qwe, mutant.nume, p);
                                }break;

                                case 4:
                                {
                                    //locul unde interactionez cu, caracterul ales de tine
                                    cout<<"-------------------------------------------------------------"<<endl;
                                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                                    cout<<"-Roaaaaa, Rooaaa..."<<endl;
                                    cout<<"-Da-i un nume monstrului:";
                                    cin>> monstru.nume;
                                    cout<<"-------------------------------------------------------------"<<endl;

                                    //locul unde se vor afisa detaliile introduse de catre jucatorii
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac3());
                                    cout<<"*************************************************************"<<endl;
                                    cout<<"Oponetul tau"<<endl;
                                    cout<<"*************************************************************"<<endl;
                                    mod.DisplayDetaliCaracterStandard(monstru.nume, monstru.Viata(), monstru.Atac());
                                    cout<<"*************************************************************"<<endl;
                                    mod.LuptaMulti(om.Viata(), om.atac1(),  monstru.Viata(), monstru.Atac(), qwe, monstru.nume, p);
                                }break;

                                case 5:
                                {
                                    //locul unde interactionez cu, caracterul ales de tine
                                    cout<<"-------------------------------------------------------------"<<endl;
                                    cout<<"-Dupa fiecare actiune sau introducere de la tastatura apasati Enter"<<endl;
                                    cout<<"-Salut ai luat cea mai buna decizie alegandu-ma..., Nu o sa te dezamagesc.."<<endl;
                                    cout<<"-Da-mi si un nume:";
                                    cout<<om.nume;
                                    mod.DisplyWepon();
                                    cout<<"-Introdu numarul armei:";
                                    cin>>numar_arma;
                                    cout<<"Scrie numele armei alese de tine: ";
                                    cin>>arma_aleasa;
                                    cout<<"-------------------------------------------------------------"<<endl;

                                    switch(numar_arma)
                                    {
                                        case 1:
                                        {
                                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                                            cout<<"*************************************************************"<<endl;
                                            mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac1());
                                            cout<<"*************************************************************"<<endl;
                                            cout<<"Oponetul tau"<<endl;
                                            cout<<"*************************************************************"<<endl;
                                            mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac1());
                                            cout<<"*************************************************************"<<endl;
                                            mod.LuptaMulti(om.Viata(), om.atac1(), om.Viata(), om.atac1(), qwe, om.nume, p);
                                        }break;

                                        case 2:
                                        {
                                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                                            cout<<"*************************************************************"<<endl;
                                            mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac1());
                                            cout<<"*************************************************************"<<endl;
                                            cout<<"Oponetul tau"<<endl;
                                            cout<<"*************************************************************"<<endl;
                                            mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac2());
                                            cout<<"*************************************************************"<<endl;
                                            mod.LuptaMulti(om.Viata(), om.atac1(), om.Viata(), om.atac2(), qwe, om.nume, p);
                                        }break;

                                        case 3:
                                        {
                                            //locul unde se vor afisa detaliile introduse de catre jucatorii
                                            cout<<"*************************************************************"<<endl;
                                            mod.DisplayDetaliCaracterStandard(qwe, om.Viata(), om.atac1());
                                            cout<<"*************************************************************"<<endl;
                                            cout<<"Oponetul tau"<<endl;
                                            cout<<"*************************************************************"<<endl;
                                            mod.DisplayDetaliCaracterPentruOm(om.nume,arma_aleasa, om.Viata(), om.atac3());
                                            cout<<"*************************************************************"<<endl;
                                            mod.LuptaMulti(om.Viata(), om.atac1(), om.Viata(), om.atac3(), qwe, om.nume, p);
                                        }break;
                                    }
                                }break;
                            }
                        }break;
                    }
                }break;
            }
        }break;
    }
        cout<<endl;
        cout<<"Doresti sa mai incerci inca o data jocul ?"<<endl;
        cout<<"Daca da introdu orice numar..., daca vrei sa nu mai te joci introdu 0"<<endl;
        cout<<"nr=";
        cin>>vrei;
        }while(vrei!=0);
return 0;
}
