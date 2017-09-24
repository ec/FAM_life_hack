#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>
const int NotUsed = system( "color F0" );
using namespace std;
int main()
{
const double Pi=3.1415;
double a,b,x,f1,f2,f3;
int i,n;
n=7;
a=-Pi/4;
b=Pi/3;
    cout<<" f1 = 9 + cos(x) "<<endl;
    cout<<" f2 = tan(x/2) "<<endl;
    cout<<" f3 = 14*sin(x) "<<endl;
    cout<<" _________________________________________________ "<<endl;
    cout<<"|             Function of one variable            |"<<endl;
    cout<<"|_________________________________________________|"<<endl;
    cout<<"|   x   ||     f1     ||     f2     ||     f3     |"<<endl;
    cout<<"|_______||____________||____________||____________|"<<endl;
    for (i=0;i<=n;i++){
        x = a + i*(b-a)/n;
        f1 = 9 + cos(x);
        f2 = tan(x/2);
        f3 = 14*sin(x);
        cout<<"|_______||____________||____________||____________|"<<endl;
        cout<<"|"<<fixed<<setw(6)<<setprecision(2)<<x<<" |";
        cout<<"|"<<fixed<<setw(11)<<setprecision(4)<<f1<<" |";
        cout<<"|"<<fixed<<setw(11)<<setprecision(4)<<f2<<" |";
        cout<<"|"<<fixed<<setw(11)<<setprecision(4)<<f3<<" |"<<endl;
    }
        cout<<"|_______||____________||____________||____________|"<<endl;
        cout<<"|                        done Smetana M.O. KV-61  |"<<endl;
        cout<<"|_________________________________________________|"<<endl;
return 0;
}
