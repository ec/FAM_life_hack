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
 X[i]= 300 + (i%25); //�������� ���������� ������
 Y[i]= 200 +(i/25);
 putpixel(X[i],Y[i],15);
 vX[i]= -10+rand()%21; //������� ���������� �������
 vY[i]= -10+rand()%21;
}

getch(); // �� ���������� ������ ������ ����������� � ��� ����

for (i=1; i<=299;i++)
{sound(rand()%i); delay(1); nosound(); } //���� ������

do
{   //������� �������� �������

for (i=0; i<N; i++)
{
if ((X[i]+vX[i]> 0) &&( X[i]+vX[i]< gx) &&
(Y[i]+vY[i]> 0) &&( Y[i]+vY[i]<gy))
		//���� ������� �� ������ �� ����
	{
	 putpixel(X[i],Y[i], 0);
	 X[i]+=vX[i];
	 Y[i]+=vY[i];
	 putpixel(X[i],Y[i],12);//�������. � ������ ��������
	}
else // ������� ������ �� ���� � ��������� ���� ��������
	 // � �������� ���� ����� �� ����
	{	vX[i]=0;
		vY[i]=0;
		sound(200); delay(2); nosound();}
	}
}
while (!kbhit());
closegraph;
return 0;}

