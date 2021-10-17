#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;
void bresenhamline(int x,int y,int x2,int y2);
int main(){

    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, " ");

    float x1, x2, y1, y2;
    cout << "Enter the value of x1 and y1:  ";
    cin >> x1 >> y1;
    cout << "Enter the value of x2 and y2:  ";
    cin >> x2 >> y2;

    bresenhamline(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}
void bresenhamline(int x,int y,int x2,int y2)
{
	int dx,dy,p;
	dx=x2-x;
	dy=y2-y;
	p = 2 * (dy) - (dx);
	while(x <= x2)
	{
		if(p < 0)
		{
			x=x+1;
			y=y;
			p = p + 2 * (dy);
		}
		else
		{
			x=x+1;
			y=y+1;
			p = p + 2 * (dy - dx);
		}
		putpixel(x,y,GREEN);
		delay(10);
	}
}
