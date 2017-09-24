#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x, y, z, a, b;
    cout <<" x= ";
    cin >> x;
    cout <<" y= ";
    cin >>y;
    cout <<" z= ";
    cin >>z;
    if(sin(x)==0)
        cout << "rozviaskiv nemae"<<endl;
    else
        if(y<-M_PI_2)
            cout << "rozviaskiv nemae"<<endl;
        else
            if(y>M_PI_2)
                cout << "rozviaskiv nemae"<<endl;

            else
            {
            a=5*1/tan(x)-0,25*atan(y);
                cout << "a="<<a<<endl;
            }
        if(x<0)
            cout << "rozviaskiv nemae"<<endl;
        else
            if(fabs(x-y)*fabs(x-y)-z*z==0)
            cout << "rozviaskiv nemae"<<endl;
            else
            {
                b= (log(x)+fabs(x-y)+x*x)/(fabs(x-y)*fabs(x-y)-z*z);
                cout << "b="<<b<<endl;
            }

    return 0;
}
