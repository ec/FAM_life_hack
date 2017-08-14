#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE,"ukr");
    double h, x, f1, f2, f3, n;
    int a, b, j, i;
    n=7;
    a=-4;
    b=1;
    h=(b-a)/n;
        cout<<" ";
            for (i=0; i<=71; i++)
                cout<<"-";
        cout<<"\n |"; cout.width(45); cout<<"Функцiї однiєї змiнної"; cout.width(26); cout<<"|"<<endl;
        cout<<" ";
            for (i=0; i<=71; i++)
                cout<<"-";
        cout<<"\n |       x       |  f=1-e^(|x|+2)  |   f=20/(1+x^2)  |  f=(x+9)^(3/2)   |"<<endl;
            for (i=0; i<=n; i++)
            {
                x=a+i*h;
                f1=1-exp(abs(x)+2)*log(M_E);
                f2=20/(1+x*x);
                f3=exp(1.5*log(x+9));
                cout<<" ";
                    for (j=0; j<=71; j++)
                    cout<<"-";
                cout<<"\n |"<<setprecision(4)<<setw(10)<<x; cout.width(6);
                cout<<"|"<<setw(11)<<f1; cout.width(7);
                cout<<"|"<<setw(11)<<f2; cout.width(7);
                cout<<"|"<<setw(11)<<f3; cout.width(10); cout<<"| \n";
            }
        cout<<" ";
            for (i=0; i<=71; i++)
                cout<<"-";
        cout<<"\n |"; cout.width (71); cout<<"Виконав Рекеда В.В., КВ-61|"<<endl;
        cout<<" ";
            for (i=0; i<=71; i++)
                cout<<"-";
    return 0;
}
