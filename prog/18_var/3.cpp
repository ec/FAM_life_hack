#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main()
{
    const int n=7;
    double a[n][n];
    double x[n];
    double s, m;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                a[i][j]=2.758*pow(i, 2)-1.5*j-(abs(3.3-i));
                cout<<fixed<<setprecision(2)<<setw(10)<<a[i][j]<<setw(10);
            }
            cout<<endl;
        }

    cout<<endl;
    cout<<endl;

    for(int j=0; j<n; j++)
    {
        for(int k=0; k<n-1; k++)
        {

        for(int i=0; i<n-1; i++)
        {
            if(a[i][j]<a[i+1][j])
            {
                m=a[i][j];
                a[i][j]=a[i+1][j];
                a[i+1][j]=m;
            }
        }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<fixed<<setprecision(2)<<setw(8)<<a[i][j]<<setw(8);
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i = 0; i<n; i++)
    {
        x[i]=a[n-1][i];
    }
    for(int i = 0; i<n; i++)
        cout<<fixed<<setprecision(2)<<setw(8)<<x[i]<<setw(8);
    s = 0;
    for(int i=0; i<n; i++)
    {
        s = s + sqrt(abs(abs(x[i]+1)-10));
    }
    cout<<endl;
    cout<<endl;
    cout<<fixed<<setprecision(2)<<setw(15)<<"U = g(x) = "<<s<<setw(10);
    return 0;
    }


