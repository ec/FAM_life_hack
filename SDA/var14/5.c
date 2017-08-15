#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int N=8;
    int A[N][N];
    int i, j, max, min, p;
    srand (time (0));
    printf ("Pochatkova matritsa: \n");
    for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                A[i][j]=rand ()  %11 -5 ;
                printf("%3i", A[i][j]);
                printf (" ");
            }
            printf ("\n");
        }
    max=min=0;
    for(i=0; i<N; i++)
        {
            if (A[i][i]<A[min][min])
            min=i;
            else if (A[i][i]>=A[max][max])
            max=i;

        }
    p=A[min][min];
    A[min][min]=A[max][max];
    A[max][max]=p;
    printf ("Nova matritsa: \n");
    for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                printf("%3i", A[i][j]);
                printf (" ");
            }
            printf ("\n");
        }
    return 0;
}
