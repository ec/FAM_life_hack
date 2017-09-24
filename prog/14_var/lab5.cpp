#include <iostream>
#include <fstream>
#include <clocale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    typedef struct student
    {
        char pr[50];
        char im[50];
        char pob[50];
        int den;
        int mis;
        int rik;
        char misto[50];
    };
    student kv[28];
    student kv1[28];

    ifstream fin("text.txt");
    for (int i=0; i<28; i++)
    {
        fin>>kv[i].pr;
        fin>>kv[i].im;
        fin>>kv[i].pob;
        fin>>kv[i].misto;
        fin>>kv[i].den;
        fin>>kv[i].mis;
        fin>>kv[i].rik;
        }
    fin.close();
    int p=0;
    for (int i=0; i<28; i++)
       if ( strcmp(kv[i].misto, "Êè¿â")==0 )
        {
         kv1[p]=kv[i];
         p++;
        }
        int mm, mr, md, k;
        student kv2[p];
        for (int j=0; j<p; j++)
            {
                mr=kv1[j].rik;
                mm=kv1[j].mis;
                md=kv1[j].den;
            for (int i=0; i<p; i++)
                {
                    if (kv1[i].rik<mr)
                    {
                        kv2[j]=kv1[i];
                        mr=kv1[i].rik; k=i;
                        mm=kv1[i].mis;
                        md=kv1[i].den;
                    }
                    else if (kv1[i].rik==mr)
                        if (kv1[i].mis<mm)
                            {
                                kv2[j]=kv1[i];
                                mm=kv1[i].mis; k=i;
                                md=kv1[i].den;
                            }
                            else if (kv1[i].mis==mm)
                                if (kv1[i].den<md)
                                    {
                                        kv2[j]=kv1[i];
                                        md=kv1[i].den;
                                        k=i;
                                    }

            }
            kv1[k].rik=2000;
        }
    for (int i=0; i<p; i++)
        {
            cout <<kv2[i].pr<<" ";
            cout <<kv2[i].im<<" ";
            cout <<kv2[i].pob<<" ";
            cout <<kv2[i].misto<<" ";
            cout <<kv2[i].den<<" ";
            cout <<kv2[i].mis<<" ";
            cout <<kv2[i].rik<<" "<< endl;
        }
    return 0;
}
