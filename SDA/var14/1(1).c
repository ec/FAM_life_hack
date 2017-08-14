#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("vvedit x: ");
    scanf ("%f", &x);
        if (x>-30)
            if (x>-15)
                if (x>3)
                    if (x>20)
                        {
                            y=3*pow(x, 0.75)-5;
                            printf ("y=%.2f", y);
                        }
                    else printf ("x poza mezhami diapazonu");
                else {
                        y=4*pow(x, 2)+2;
                        printf ("y=%.2f", y);
                     }
            else printf ("x poza mezhami diapazonu");
        else printf ("nemozhlivo x pidnesti v stepin 3/4");
    return 0;
}
