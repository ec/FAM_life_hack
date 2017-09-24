#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float x, y1, y2, y3, h, i;
    int a=0, b=6, n=7;
    if ((a>=b)|| (n>10))
    {
        cout<<"nevirne znachenn'a"<<endl;
    }
    else
    {
    cout <<" _________________________________________________________________________________"<<endl;
    cout <<"||                             Funcii odniei zminnoi                            ||"<<endl;
    cout <<"||______________________________________________________________________________||"<<endl;
    cout <<"||     ArgumentX    ||    2^(x-4)-3     ||    (x+9)^(3/2)   || 4*(e^-abs(x))-1  ||"<<endl;
    cout <<"||__________________||__________________||__________________||__________________||"<<endl;
    for (i=0; i<=n; i++)
    {
        h=1.0*(b-a)/n;
        x=a+i*h;
        y1=pow(2, (x-4))-3;
        y2=pow((x+9), 3/2);
        y3=4* pow(M_E, -abs(x))-1;
        cout<<fixed<<setprecision(3)<<"||"<<setw(11)<<x<<setw(9)<<"||"<<setw(11)<<y1<<setw(9)<<"||"<<setw(11)<<y2<<setw(9)<<"||"<<setw(11)<<y3<<setw(9)<<"||"<<endl;
        cout <<"||__________________||__________________||__________________||__________________||"<<endl;
    }
        cout <<"||                                                    Sklala: Smiyun I. V. KV-61||"<<endl;
        cout <<"||______________________________________________________________________________||"<<endl;
    }
    return 0;
}
