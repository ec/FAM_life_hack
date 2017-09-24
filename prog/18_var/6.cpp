#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void obrobka(string str)
{
    int k = str.length();
    int p = 0;
    int ch;
    bool f = true, flag = true;
    for(int i = 0; i<k; i++)
    {
       if(!(((str[i]>='a') && (str[i]<='z'))|| (str[i]==' ') || ((str[i]>='A') && (str[i]<='Z'))))
       {
           flag = false;
           break;
       }
    }
    if(flag==true)
    {
    for(int i = 0; i<k; i++)
    {
        if(str[i]!=' ')
        {
            f=true;
            for(int j = i; j<k; j++)
            {
                if(str[i]!=' ')
                    i++;
            }
        }
        else
        {
         f = false;
         for(int j=i;j<k;j++)
         {
             if(str[j]==' ')
                i++;
         }
        }
        if(f==true)
            p++;
    }
    int mas[p];
    for(int i=0; i<p; i++)
    {
        mas[i]=0;
    }
        int i = 0;

        for(int j=0; j<k; j++)
        {
            ch=0;
            if(str[j]!=' ')
            {
                ch=0;
                for(int m = j; m<k, str[m]!=' '; m++)
                {
                    if((str[m]=='a')||(str[m]=='e')||(str[m]=='i')||(str[m]=='o')||(str[m]=='u')||(str[m]=='y')||(str[m]=='A')||(str[m]=='E')||(str[m]=='I')||(str[m]=='O')||(str[m]=='U')||(str[m]=='Y'))
                    {
                      ch++;
                    }
                    else
                        ch=ch;
                    j++;

                }
                mas[i]=ch;
                i++;
                j++;
            }
            else
            {
                for(int m=j;m<k;m++)
                {
                    if(str[m]==' ')
                    j++;
                }
            }
        }

    cout<<endl;
    int x = mas[0];
    for(int i=0; i<p; i++)
    {
        if(x<mas[i])
            x=mas[i];
            //cout<<x<<endl;
    }
    cout<<"Kilkist sliv = "<<p<<endl;
    if(x==0){
            cout<<"Nemae golosnyh u slovah";
    }
    else
    {
        for(int i=0;i<p;i++)
        {
            if(mas[i]==x)
            {
                cout<<i+1<<" slovo mistit naibilshu kilkist' golosnuh bukv"<<endl;
            }
        }
    }
    }
    else
    {
        cout<<"Error";
    }
}
int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin, str);
    obrobka(str);
    return 0;
}
