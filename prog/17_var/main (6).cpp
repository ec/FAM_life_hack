#include <iostream.h>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>

int main ()
{
int const N=500;
int gx,gy,i,gd,gm;
int X[N],Y[N],vX[N],vY[N];

initgraph(&gd,&gm,"");

gx=getmaxx();
gy=getmaxy();
srand (time (NULL));

for (i=0; i<N;i++)
{
 X[i]= 300 + (i%25); //початков≥ координати околк≥в
 Y[i]= 200 +(i/25);
 putpixel(X[i],Y[i],15);
 vX[i]= -10+rand()%21; //складов≥ швидкостей осколк≥в
 vY[i]= -10+rand()%21;
}

getch(); // по натисканню клав≥ш≥ околки розл≥таютьс€ в р≥зн≥ боки

for (i=1; i<=299;i++)
{sound(rand()%i); delay(1); nosound(); } //звук вибуху

do
{   //процесс розльоту осколк≥в

for (i=0; i<N; i++)
{
if ((X[i]+vX[i]> 0) &&( X[i]+vX[i]< gx) &&
(Y[i]+vY[i]> 0) &&( Y[i]+vY[i]<gy))
		//€кщо осколок не долет≥в до краю
	{
	 putpixel(X[i],Y[i], 0);
	 X[i]+=vX[i];
	 Y[i]+=vY[i];
	 putpixel(X[i],Y[i],12);//перемал. в новому положенн≥
	}
else // пиксель долет≥в до краю Ц обнул€Їмо його швидк≥сть
	 // ≥ генеруЇмо звук удару об край
	{	vX[i]=0;
		vY[i]=0;
		sound(200); delay(2); nosound();}
	}
}
while (!kbhit());
closegraph;
return 0;}

