#include <stdio.h>

int main()
{
    const int N=5;
    int i;
    float A[4*N];
    float b;
    printf ("Zapovnit masiv A: ");
    for ( i=0; i<4*N; i++)
        scanf ("%f", &A[i]);
    for (i=0; i<N; i++)
    {
        b=A[i];
        A[i]=A[N+i];
        A[N+i]=b;
        b=A[2*N+i];
        A[2*N+i]=A[3*N+i];
        A[3*N+i]=b;
    }
    for (i=0; i<=(N-1)/2; i++)
    {
      b=A[N+i];
      A[N+i]=A[2*N-1-i];
      A[2*N-1-i]=b;
      b=A[3*N+i];
      A[3*N+i]=A[4*N-1-i];
      A[4*N-1-i]=b;
    }
    printf ("Pererobleniy masiv: ");
    for ( i=0; i<4*N; i++)
        {printf ("%.0f", A[i]);
        printf(" ");}
    return 0;
}
