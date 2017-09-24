#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    const int n=7;
    double A[n][n];
    double X[n];
    int i,j, pos;
    double minz, U, s1, s2;
    cout<<" n = "<<n<<endl;
    //введення масиву
    for (i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            A[i][j]=2*log(abs(i+2*j))-8.117*j*j+1;
    //виведення масиву
    for (i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<setw(8)<<A[i][j]<<" ";
            cout<<endl;}
            cout<<endl;
    //знаходження вектора X

return 0;}
