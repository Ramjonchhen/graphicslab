#include <iostream>
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

void clrscr()
{
   system("cls");
}

int main()
{
    initwindow(800,800,"animation pracitse");


    // filiing color
    //setfillstyle(SOLID_FILL,RED);
    //floodfill(240,200,WHITE);
setfillstyle(SOLID_FILL,RED);
    while(1)
    {

        for (int i=0; i<=30; i++)
    {
        settextstyle(8,0,6);
        outtextxy(225,75,"I");
        outtextxy(225,350,"U");
        delay(10);
        arc(200-i,200-i,0,180,40+i);
        arc(280+i,200-i,0,180,40+i);
        delay(10);
        line(160-2*i,200-i,240+i,300+2*i);
        delay(10);
        line(320+2*i,200-i,240+i,300+2*i);
    delay(10);
    delay(10);
        cleardevice();
    }
    }




    getch();


    return 0;
}
