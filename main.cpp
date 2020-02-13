#include <iostream>
#include <graphics.h>
// program implemented by ram jonnchen
using namespace std;
int ROUND(int a)
{
    return a+0.5;
}
void ellipsePlotPoints(int xCenter, int yCenter, int x ,int y)
{   putpixel(xCenter+x,yCenter+y,WHITE);
    putpixel(xCenter-x,yCenter+y,WHITE);
    putpixel(xCenter+x,yCenter-y,WHITE);
    putpixel(xCenter-x,yCenter-y,WHITE);
}

void ellipseMidpoint (int xCenter, int yCenter, int Rx,int Ry)
{   int Rx2=Rx*Rx;
    int Ry2=Ry*Ry;
    int twoRx2=2*Rx2;
    int twoRy2=2*Ry2;
    int p;
    int x=0;
    int y=Ry;
    int px=0;
    int py=twoRx2*y;

    ellipsePlotPoints(xCenter,yCenter,x,y); // plotting the first point

    p= ROUND(Ry2-(Rx2*Ry) + (0.25 * Rx2)); // for region 1;
    while(px<py)
    {
        x++;
        px+=twoRy2;
        if(p<0)
        {
            p+=Ry2 + px;
        }
        else{y--;
            py-=twoRx2;
            p+=Ry2+px-py;
        }
        ellipsePlotPoints(xCenter,yCenter,x,y);
    }
    p= ROUND(Ry2*(x+0.5)*(x+0.5)+Rx2*(y-1)*(y-1)-Rx2*Ry2);  // region 2
    while(y>0)
    {
        y--;
        py -= twoRx2;

        if (p>0)
        {
            p+=Rx2-py;
        }
        else{x++;
            p+=twoRy2;
            p+=Rx2-py+px;
        } ellipsePlotPoints(xCenter,yCenter,x,y);
    }
}



int main()
{    initwindow(800,800,"ellipse drawing algorithm");
    ellipseMidpoint(100,100,60,40);
    outtextxy(150,150,"RAM JONCHHEN");
    getch();
    return 0;
}
