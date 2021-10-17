# include <iostream>
# include <conio.h>
# include <graphics.h>
using namespace std;
void circlemidpoint(int xc,int yc,int r);
void drawcircle(int x,int y,int xc,int yc);
int main()
{
    int gdriver=DETECT, gmode;
    initgraph(&gdriver,&gmode," ");

    int r, xc, yc;
    cout<< "Enter Center point coordinates...";
    cout<<"  Xc    : ";
    cin>>xc;
    cout<<"  Yc    : ";
    cin>>yc;
    cout<<"Radius  : ";
    cin>>r;

    circlemidpoint(xc,yc,r);
    getch();
    closegraph();
    return 0;
}


void circlemidpoint(int xc,int yc,int r)
{
    int P;
    int x,y;

    P = 1 - r;
    x = 0;
    y = r;

    while (x<=y)
    {
        x++;
        if (P<0)
        {
            P += 2 * x + 1;
        }
        else
        {
            P += 2 * (x - y) + 1;
            y--;
        }
        drawcircle(x,y,xc,yc);

    }

}
void drawcircle(int x,int y,int xc,int yc)
{
    putpixel(xc + x,yc + y,GREEN);
    putpixel(xc - x,yc + y,GREEN);
    putpixel(xc + x,yc - y,GREEN);
    putpixel(xc - x,yc - y,GREEN);
    putpixel(xc + y,yc + x,GREEN);
    putpixel(xc - y,yc + x,GREEN);
    putpixel(xc + y,yc - x,GREEN);
    putpixel(xc - y,yc - x,GREEN);
}
