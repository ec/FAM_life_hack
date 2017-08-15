#include <stdio.h>
#include <math.h>

int main()
{
    double s, P;
    int n, i, j;
    P=1;
    printf("vvedit n: ");
    scanf ("%i", &n);
    for (i=1; i<=n; i++)
        {
            s=0;
            for (j=1; j<=i; j++)
            s=s+sin(j);
            P=P*(cos(i)+1)/s;
        }
    printf ("P=%.7f", P);
    return 0;
}
