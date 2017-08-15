#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;

void zap (int R, int *p)
{
    srand ( time(NULL) );
    for (int i=0; i<R; i++)
    {
        for ( int j=0; j<R; j++)
        {
            *(p+i*R+j)=rand() % 10;
            cout<<*(p+i*R+j)<<" ";
        }
        cout<<"\n";
    }
}

void transp (int R, int *p)
{
    int B;
    for (int i=0; i<R-1; i++)
    {
        for ( int j=i+1; j<R; j++)
        {
            B=*(p+i*R+j);
            *(p+i*R+j)=*(p+j*R+i);
            *(p+j*R+i)=B;
        }
    }
    for (int i=0; i<R; i++)
    {
        for ( int j=0; j<R; j++)
            cout<<*(p+i*R+j)<<" ";
        cout<<"\n";
    }
}


int main()
{
    setlocale (LC_CTYPE, "ukr");
    const int N1=7;
    const int N2=6;
    const int N3=5;
    int a;
    int A[N1][N1];
    int B[N2][N2];
    int C[N3][N3];
    cout<<"Матриця А \n";
    zap (N1, &A[0][0]);
    cout<<"Транспонована матриця А: \n";
    transp (N1, &A[0][0]);
    cout<<"Матриця B: \n";
    zap (N2, &B[0][0]);
    cout<<"Транспонована матриця B: \n";
    transp (N2, &B[0][0]);
    cout<<"Матриця C: \n";
    zap (N3, &C[0][0]);
    cout<<"Транспонована матриця C: \n";
    transp (N3, &C[0][0]);
    return 0;
}
