// program to implement the midpoint circle algorithm
// implemented by ram jonchhen
#include <iostream>
#include <graphics.h>
#include <dos.h>
using namespace std;
// function to find the point of the other arc of the circle
void circlePlotPoints(int xc,int yc,int x,int y)
{
	putpixel(xc+x,yc+y,WHITE);
	putpixel(xc-x,yc+y,WHITE);
	putpixel(xc+x,yc-y,WHITE);
	putpixel(xc-x,yc-y,WHITE);
	putpixel(xc+y,yc+x,WHITE);
	putpixel(xc-y,yc+x,WHITE);
	putpixel(xc+y,yc-x,WHITE);
	putpixel(xc-y,yc-x,WHITE);
}
// function to draw the circle
void drawCircle(int xc,int yc,int r)
{	// intital points
	int x=0,y=r;	// starting points
	int p=1-r;  // decision parameter
	circlePlotPoints(xc,yc,x,y); // plots the first set of points
	while(x<y)
	{x++; // incremeting the value of the x
		if (p<0) // if the p is less than 0
		{ p+=2*x+1; }
		else {
			y--;
			p+=(2*x)+1-(2*y);
			}
		circlePlotPoints(xc,yc,x,y);
	}
}

int main()
{
	initwindow(800,800,"Midpoint circle algorithm");
	outtextxy(200,200,"Center(400,400)");
	drawCircle(200,200,150);
	getch();
	closegraph();
	return 0;
}
