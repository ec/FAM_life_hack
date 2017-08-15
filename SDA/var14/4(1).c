#include <stdio.h>

int main()
{
    const int N=5;
    int i;
    float A[4*N];
    float B[N];
    printf ("Zapovnit masiv A: ");
    for ( i=0; i<4*N; i++)
        scanf ("%f", &A[i]);
    for ( i=0; i<N; i++)
        B[i]=A[N+i];
    for ( i=0; i<N; i++)
    {
        A[N+i]=A[N-1-i];
        A[N-1-i]=B[N-1-i];
    }
    for ( i=0; i<N; i++)
        B[i]=A[3*N+i];
    for ( i=0; i<N; i++)
    {
        A[3*N+i]=A[3*N-1-i];
        A[3*N-1-i]=B[N-1-i];
    }
    printf ("Pererobleniy masiv A: ");
    for ( i=0; i<4*N; i++)
        {printf ("%.0f", A[i]);
        printf (" ");}
    return 0;
}
