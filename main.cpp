// transformation of the triangale
// implemented by ram jonchhen
#include <iostream>
#include <graphics.h>

using namespace std;

// function to tranform the points
void trans(int x1,int y1,int x2,int y2,int x3,int y3)
{
    int scal[3][3];
    cout<<"Enter the scaling matrix"<<endl;
    // taking the input of the caling matrix
    for(int i=0; i<=2; i++)
    {
        for (int j=0; j<=2; j++)
        {
            cout<<"Enter the value for the scal ["<<i<<"]"<<"["<<j<<"] :";
            cin>>scal[i][j];
        }
    }

    // finding the new points for the transformation
    int x1new,y1new,x2new,y2new,x3new,y3new;
    x1new=(scal[0][0]*x1)+(scal[0][1]*y1)+(scal[0][2]);
    y1new=(scal[1][0]*x1)+(scal[1][1]*y1)+(scal[1][2]);

    x2new=(scal[0][0]*x2)+(scal[0][1]*y2)+(scal[0][2]);
    y2new=(scal[1][0]*x2)+(scal[1][1]*y2)+(scal[1][2]);

    x3new=(scal[0][0]*x3)+(scal[0][1]*y3)+(scal[0][2]);
    y3new=(scal[1][0]*x3)+(scal[1][1]*y3)+(scal[1][2]);

    // plotting the points of the new transformed object
    int points[]={x1new,y1new,x2new,y2new,x3new,y3new,x1new,y1new};
    drawpoly(4,points);
    outtextxy(x2new+5,y2new+5,"After Transformation");
}

int main()
{
    initwindow(1000,1000,"Transformation");

    outtextxy(50,50,"Pefroming transformation of the triangale");//displaying texts
    outtextxy(80,80,"Implemented By ram jonchhen");
    int x1,y1,x2,y2,x3,y3;
    // taking the input points for the triangale
    cout<<"Enter the points (x1,y1) of the triangale"<<endl;
    cin>>x1>>y1;
    cout<<"Enter the points (x2,y2) of the triangale"<<endl;
    cin>>x2>>y2;
    cout<<"Enter the points (x3,y3) of the triangale"<<endl;
    cin>>x3>>y3;
    int points[]={x1,y1,x2,y2,x3,y3,x1,y1};
    // drawing the triangale
    drawpoly(4,points);
    outtextxy(x2+5,y2+5,"Original");

    // passing the points for the transformation
    trans(x1,y1,x2,y2,x3,y3);
    getch();
    return 0;
}
