#include <iostream>
#include <stdio.h>  
#include <windows.h> 
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <unistd.h>
using namespace std;

HANDLE hConsole;   
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); 

void GotoXY(int X, int Y)
{
    COORD coord = { X, Y };
    SetConsoleCursorPosition(hStdOut, coord); 
}

void frame (int x1, int y1, int x2, int y2) 
{    int i;
 GotoXY(x1,y1);
 cout << '\311';;
 for (i=(x1+1); i<=(x2-1); i++) cout <<'\315';
 cout << '\273';
 for (i=(y1+1); i<=(y2-1); i++)
  {
  GotoXY(x1,i);
  cout << '\272';
  GotoXY(x2,i);
  cout << '\272';
  }
  GotoXY(x1, y2);
  cout << '\310';
  for (i=(x1+1); i<=(x2-1);i++)
  cout << '\315';
  cout << '\274';
 return ;
 } 
void zastavka ()
{
 system ("cls");
 frame (10,5,70,18);
 GotoXY(34,8);  cout << "Laboratory work"<<endl;
 GotoXY(32, 10); cout << "number 7 variant 18"<< endl;
 GotoXY(32, 12); cout << "created by Smiyun" << endl;
 GotoXY(37, 17); cout << "Kyiv 2016"<< endl;
 Sleep(4400);
 system ("cls");
 return ;
 } 
const int n=4;
typedef   char punkt[17] ;
          punkt q_name [n]={"1. Show 2D  ", "2. Show 3D ", "3. Exit "};
 short   i, j;
void d2 ()
{	
int gd = DETECT, gm;
	system("cls");
   initgraph(&gd, &gm, "");
   setcolor(15);
   setfillstyle(2, 15);
 	bar(20,320,550,400);
 	bar(20,40,100,400);
 	bar(470,40,550,400);
 	bar(250,40,330,400);
	Sleep(2000);
	closegraph();

return;}
void d3 () 
{	int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setcolor(11);
	system("cls");
    setfillstyle(8, 11);     
 	bar(20,100,100,400);
    bar(250,100,330,400);
    bar(470,100,550,400);
    bar(20,320,550,400);
    moveto(20, 100);
    lineto(80, 70);
    moveto(80, 70);
    lineto(160, 70);
    moveto(160, 70);
    lineto(100, 100);
	    
   	moveto(250, 100);
    lineto(310, 70);
    moveto(310, 70);
    lineto(390, 70);
    moveto(390, 70);
    lineto(330, 100);	    
    moveto(470, 100);
    lineto(530, 70);
    moveto(530, 70);
    lineto(610, 70);
    moveto(610, 70);
    lineto(550, 100);	    
    moveto(100, 320);
    lineto(160, 290); 	  
    moveto(330,320);
    lineto(390,290); 	   
    moveto(550, 399);
    lineto(610, 370);    
    moveto(160, 70);
    lineto(160,290);    
    moveto(390, 70);
    lineto(390,290);    
    moveto(610, 70);
    lineto(610,370);    
    moveto(160, 290);
    lineto(250, 290);
    moveto(390, 290);
    lineto(470, 290);
	Sleep(6000);
	closegraph();
return ;}

int main ()
{
	zastavka();
	while (true) {
	system("cls");
	GotoXY (24,4); 
	cout << "Main menu";
	for (j=0; j<4; j++)
	{ GotoXY (25, 7+j+1); cout <<q_name[j];  }
	GotoXY (20,15); cout << "Input number of regim and press Enter : ";
	cin >> i;
	switch (i)
	{case 1: d2(); break;
 	case 2: d3(); break;
 	case 3: return 0;
 	default: {
			GotoXY(20,17);
			cout << " ERROR. Repeat";
    		Sleep(1000);
}
}
}
return 0;}


