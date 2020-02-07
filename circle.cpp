#include <iostream>
#include <graphics.h>

void bresenham(int x1,int y1,int x2,int y2)
{
	int pk1;
	int dy=y2-y1;
	int dx=x2-x1;
	int pk=(2*dy)-dx;
	putpixel(x1,y1,WHITE);
	if (pk>0)
	{
		pk1=pk+(2*dy)-(2*dx);
		x1=x1+1;
		y1=y1+1;	
	}
	else if(pk<0)
	{
		pk1=pk+(2*dy);
		x1=x1+1;
		y1=y1;	
	}
	
	
	
	while(x1<=x2)
	{
		putpixel(x1,y1,WHITE);
		if (pk1>0)
	{
		pk1=pk+(2*dy)-(2*dx);
		x1=x1+1;
		y1=y1+1;
		
	}
	else if(pk+1<0)
	{
		pk1=pk+(2*dy);
		x1=x1+1;
		y1=y1;
		
	}	
	}
}

int main() {
initwindow(800,800,"bresenham");
bresenham(10,10,200,100);
bresenham(10,10,100,150);
bresenham(100,150,200,100);

getch();
	return 0;
}
