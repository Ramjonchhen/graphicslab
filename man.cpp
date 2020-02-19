// SKETCH OF HUMAN DONE BY RAM JONCHHEN
#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{   initwindow(800,800,"Human body"); // name print
    settextstyle(4,0,2);
    outtextxy(50,70,"RAM JONCHHEN");
    circle(380,130,80);  // drawing the head circle
    circle(350,100,15);   // drawing the eyes circle
    circle(410,100,15);
    int nose[]={380,130,370,150,390,150,380,130};  // nose array
    drawpoly(4,nose);
    rectangle(340,165,420,185);  // mouth
    line(367,209,367,280);   // neck
    line(393,209,393,280);
    rectangle(280,280,485,500);      // drawing the body
    for (int i=0; i<=5; i++)        // drawing the buttons
    {
         circle(380,320+(i*30),10);
    }
    rectangle(310,500,370,590);    // drawing the legs
    rectangle(410,500,470,590);
    circle(340,605,40);    // drawing the legs
    circle(440,605,40);
    line(280,310,210,450);      // drawing the 1st hands
    line(280,350,230,450);
    rectangle(200,450,240,470);
    line(485,310,555,450);          // drawing the 2nd hand
    line(485,350,535,450);
    rectangle(525,450,565,470);
    getch();
    return 0;
}
