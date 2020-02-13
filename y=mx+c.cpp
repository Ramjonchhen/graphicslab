// program to implement to draw a line using y=mx+c
// implemented by ram jonchhen
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <iostream>
using namespace std;
int main()
{ // co-orindtaes
   int x1 = 40, y1 = 40, x2 = 400, y2 = 400;

   // variables
   float m, c, x, y;

   // displaying the screen
   initwindow(1000, 1000, "DDA Line Drawing Algorithum");

    // making the axis lines
    line(70, 0, 70, 800);
    line(0, 600, 800, 600);

   // display the text x-axis and y-axis and other texts
    settextstyle(8, 0, 5);
    // drawing the starting point
    outtextxy(45 + 70, 600 - 45, "(40,40)");
    outtextxy(90, 10, "y-axis");
    outtextxy(700, 570, "x-axis");
  outtextxy(73, 620, "(0,0)");
   outtextxy(400, 40, "RAM JONNCHEN");

   // calculating the values
   m = ((y2 - y1) / (x2 - x1));

   c = (y1 - (m * x1));

   for (int i = x1; i <= x2; i++)
   {
      y = (m * i) + c;
      putpixel((int(i)+60), (600-int(y)), WHITE);
   }
    outtextxy(410 + 70, 600 - 410, "(400,400)");
   getch();
   closegraph();
   return 0;
}
