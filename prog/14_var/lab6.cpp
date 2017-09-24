#include <iostream>
#include <cstring>
#include <clocale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "ukr");
    int i, p, p1, len, k, r, w, pos, pos1, posk, posk1;
    char d, d1 ;
    int f=1;
    string s;
    cout<<"Введiть фразу :";
    getline (cin, s);
    p=0; w=0; p1=0; k=0; r=1; f=1;
    len=s.length();
    for (i=0; i<=len; i++)
    {
        if((!isdigit(s[i]) && !isalpha(s[i])) && s[i]!=' ' && s[i]!='\0')
        {
            if (f!=k)
            {
                if(p<=p1)
                    {
                        r=1; p=1; k=f; pos=i; posk=i;
                    }
                else {
                        r=0; p1=1; k=f; pos1=i; posk1=i;
                     }
            }
            else
            if (r==1)
            {
                p++; posk=i;
            }
            else
            {
                    p1++; posk1=i;
            }
        }
        else if (s[i]==' ' || s[i]=='\0')
        {
            if(p!=0 || p1!=0)
                {
                    if (p>p1)
                    { w++;
                    cout<<"В "<<w<<" словi ";
                        for (int j=pos; j<=posk; j++)
                            cout<<s[j];
                    cout<<"\n";
                    p=0; p1=0; f++;
                    }
                else
                {  w++;
                 cout<<"В "<<w<<" словi ";
                    for (int j=pos1; j<=posk1; j++)
                            cout<<s[j];
                 cout<<"\n";
                 p=0; p1=0; f++;
                }
                }
                else  { if (w==0)
                        {cout<<"Слiв нема"; break;}
                    else {w++;
                    cout<<"В "<<w<<" словi знакiв нема ";
                    cout<<"\n";
                    p=0; p1=0;  f++;
                    }}
        }
        else f++;
    }
    return 0;
}
