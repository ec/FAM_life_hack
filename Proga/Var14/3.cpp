#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"ukr");
    const int n=7;
    int i, j;
    double s=0;
    i=j=n;
    double A[i][j];
    double X[i];
    cout<<" Початкова матриця A: \n \n";
    X[0]=0;
    for (i=1; i<n; i++)
        X[i]=1;
    for (i=1; i<=n; i++)
        {for (j=1; j<=n; j++)
            {A[i-1][j-1]=pow(M_E, i)-2.758*j+2;
            cout<<fixed<<setprecision(2)<<setw(8)<<A[i-1][j-1]<<"  ";}
        cout<<"\n \n";}
    cout<<" Вектор X: ";
        for ( i=0; i<n; i++)
            X[0]=X[0]+A[i][n-1];
        cout<<fixed<<setprecision(2)<<X[0]<<"   ";
    for (i=1; i<n; i++)
        {for (j=0; j<i; j++)
             X[i]=X[i]*A[i][j];
        cout<<fixed<<setprecision(2)<<X[i]<<"   ";}
    for (i=0; i<n; i++)
        if(X[i]>1)
        s=s+log(X[i]);
    cout<<"\n \n U=g(x)=S="<<s<<endl;
    return 0;
}
