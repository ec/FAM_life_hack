#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <conio.h>

void gotoxy (int row, int col)
{
    printf("\033[%d;%dH", row, col);
}

int main()
{
    int i,j;
    const int M=25, N=80;
    const int d=1;
    int p=1;
    int k;
    system("cls");
    for (i=M; i>=1; i--)
    if (p==1)
         {
    for (j=(N-(i/2)); j>=(i/2)+1; j=j-1)
         {
             gotoxy(M-(i/2),j);
             printf("*");
             usleep(d);
         }
   for (k=M-(i/2); k>=(i/2); k--)
       if (j!=0)
         {
            gotoxy(k,j);
            printf("*");
            usleep(d);
         }
         p=(-1)*p;
         }
    else {
            for (j=(i/2); j<=N-(i/2); j++)
         {
            gotoxy((i/2),j);
            printf("*");
            usleep(d);
         }
         for (k=(i/2); k<=M-(i/2); k++)
         {
            gotoxy(k,j);
            printf("*");
            usleep(d);
         }
         p=(-1)*p;
         }
    getch();
    return 0;
}
