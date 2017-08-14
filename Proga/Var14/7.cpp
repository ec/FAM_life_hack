#include<graphics.h>
#include<conio.h>
#include<dos.h>

main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");
   setcolor(CYAN);
   
   //2D
   
   for (int i=0; i<=50; i++)
   {
   	moveto (60+i, 30);
   	lineto (60+i, 430);
   	delay (5);
   }
    for (int i=0; i<=60; i++)
   {
   	moveto (85+i, 230);
   	lineto(230+i, 30);
   	moveto (85+i, 230);
   	lineto(230+i, 430);
   	delay (10);
   }
   
   //3D
   
   int k=210;
   setfillstyle(1, CYAN);
   setlinestyle (0, 0, 3);
   bar3d(110+k, 30, 160+k, 430, 20, 1);
    for (int i=0; i<=60; i++)
   {
   	moveto (135+i+k, 230);
   	lineto(280+i+k, 29);
   	moveto (135+i+k, 230);
   	lineto(280+i+k, 431);
   	delay (10);
   }
    moveto (135+60+k+30, 230);
   	lineto(280+60+k+30, 30-10);
   	moveto (135+60+k+30, 230);
   	lineto(280+60+k+30, 430-10);
   	
   	moveto (280+60+k, 430);
   	lineto(280+60+k+30, 430-10);
   	
   	moveto (280+k, 30);
   	lineto(280+k+30, 20);
   	moveto (280+60+k, 30);
   	lineto(280+60+k+30, 20);
   	moveto (280+k+30, 20);
   	lineto(280+60+k+30, 20);
   	
   getch();
   closegraph();
}
