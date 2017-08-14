#include <iostream>
#include <fstream>
#include <clocale>
#include <cstring>
#include <iomanip>
#include <Windows.h>

using namespace std;

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

    int size_();
    void input(int r, student *kv);
    int city(int r, student *kv, student *kv1);
    void sorti(int p, student *mas, student *kv1);
    void output(int p, student *mas);

    int main()
{
    int k=size_()+1;
    student stud[k];
    student stud1[k];
    input(k, &stud[0]);
    int n=city(k, &stud[0], &stud1[0]);
    student kv2[n];
    sorti(n, &kv2[0], &stud1[0]);
    output (n, &kv2[0]);
    return 0;
}

    int size_()
    {
        char buff[255];
        setlocale(LC_ALL, "ukr");
        ifstream fin("input.txt");
        int i=0;
        while(!fin.getline(buff, 255).eof())
        {
            i++;
        }
        fin.close();
    return i;}

    void input (int r, student *kv)
    {
        setlocale(LC_ALL, "ukr");
    ifstream fin("input.txt");
    for (int i=0; i<r; i++)
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
    }

    int city (int r, student *kv, student *kv1)
    {
    setlocale(LC_ALL, "ukr");
    int p=0;
    for (int i=0; i<r; i++)
       if ( strcmp(kv[i].misto, "Київ")==0 )
        {
         kv1[p]=kv[i];
         p++;
        }
        return p;
    }

    void sorti(int p, student *mas, student *kv1)
    {
    int mm, mr, md, k;
    for (int j=0; j<p; j++)
            {
                mr=kv1[j].rik;
                mm=kv1[j].mis;
                md=kv1[j].den;
            for (int i=0; i<p; i++)
                {
                    if (kv1[i].rik<mr)
                    {
                        mas[j]=kv1[i];
                        mr=kv1[i].rik; k=i;
                        mm=kv1[i].mis;
                        md=kv1[i].den;
                    }
                    else if (kv1[i].rik==mr)
                        if (kv1[i].mis<mm)
                            {
                                mas[j]=kv1[i];
                                mm=kv1[i].mis; k=i;
                                md=kv1[i].den;
                            }
                            else if (kv1[i].mis==mm)
                                if (kv1[i].den<md)
                                    {
                                        mas[j]=kv1[i];
                                        md=kv1[i].den;
                                        k=i;
                                    }

            }
            kv1[k].rik=2000;
        }
    }

    void output (int p, student *mas)
    {
    setlocale(LC_ALL, "ukr");
    system ("color f0");
    cout<<"      Список одногрупникiв-землякiв, впорядкованих за датою народження:"<<endl;
    for(int i=0; i<77; i++)
    cout<<"-";
    cout<<"\n";
    cout << "|" << setw(10) << "Прiзвище" << setw(6) << "|" << setw(8) << "Iм'я" << setw(5) <<"|" << setw(14) << "  По-батьковi   |  Мiсто  |"<<"  Дата народження  |"<<  endl;

    for(int i=0; i<77; i++)
        cout<<"-";
    cout<<"\n";
    for (int i=0; i<p; i++)
        {
            cout.setf(ios::left);
            cout<<"|  "<<setw(12);
            cout <<mas[i].pr<<" ";
            cout<<"| "<<setw(12);
            cout <<setw(10)<<mas[i].im<<" ";
            cout<<"| "<<setw(14);
            cout <<mas[i].pob<<" ";
            cout<<"|  "<<setw(6);
            cout <<mas[i].misto<<" ";
            cout<<"| "<<setw(5);
            cout <<mas[i].den<<" "<<setw(5);
            cout <<mas[i].mis<<" "<<setw(5);
            cout <<mas[i].rik<<" |"<< endl;
              for(int i=0; i<77; i++)
                cout<<"-";
            cout<<"\n";
        }
    }
