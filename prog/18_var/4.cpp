#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

void input(int*,  int ,  int );
void output(int*, int, int);
void replacing( int*, int, int);
void input(int *a, int m, int n)
{
    srand(time(NULL));
    for(int i=0; i<=m-1; i++)
    {
        for(int j = 0; j<=n-1; j++)
        {
            a[i*n+j] = -5 + rand()%11;
        }
    }
}
void output(int *a, int m, int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout<<setw(4)<<a[i*n+j];
        }
        cout<<endl;
    }
    cout<<endl;
}
void replacing(int*a, int m, int n)
{
    int k;
    for(int i=0;i<=m/2-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
            k=a[i*n+j];
            a[i*n+j]=a[(m-1-i)*n+j];
            a[(m-1-i)*n+j]=k;
        }
    }
}
int main()
{
    const int x = 4;
    const int y = 7;
    const int z = 5;
    int a[x][y];
    int b[y][z];

    input(&a[0][0], x, y);
    output(&a[0][0], x, y);
    replacing(&a[0][0], x, y);
    output(&a[0][0], x, y);

    for(int i=0;i<30;i++)
        cout<<"-";
    cout<<endl;
     cout<<endl;

    input(&b[0][0], y, z);
    output(&b[0][0], y, z);
    replacing(&b[0][0], y, z);
    output(&b[0][0], y, z);
  return 0;
}
