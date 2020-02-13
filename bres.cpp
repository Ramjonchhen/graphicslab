// bresenham's line drawing algorithm implemented by ram jonchhen
#include <iostream>
#include <graphics.h>

void bresenham(int x1,int y1,int x2,int y2)
{
	int dy=y2-y1;
	int dx=x2-x1;
		int p=((2*dy)-(dx));
	int x=x1,y=y1;
		while(x<x2)
	{
		x=x+1;
		if(p>=0)
		{
			y++;
			p=p+(2*dy)-(2*dx);
		}
		else
		{
			p=p+(2*dy);
		}
		putpixel((x+70),(600-y),WHITE);
	} }

int main() {
initwindow(800,800,"bresenham");
// making the axis lines
   line(70, 0, 70, 800);
   line(0, 600, 800, 600);

   // display the text x-axis and y-axis and other texts
   settextstyle(8, 0, 5);
   // drawing the starting point
   outtextxy(50 + 70, 600 - 50, "(30,30)");
   outtextxy(90, 10, "y-axis");
   outtextxy(700, 570, "x-axis");
   outtextxy(73, 620, "(0,0)");
   outtextxy(400, 40, "RAM JONNCHEN");
bresenham(50,50,315,400);
outtextxy(315+70,600-400, "(315,400)");

getch();
	return 0;
}
