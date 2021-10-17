#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
void brescircle(int xc,int yc,int radius);
void drawcircle(int xc,int yc ,int x,int y);
int main()
{
int xc,yc,radius;
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode," ");
cout<<"Enter center coordinate of circle: ";
cin>>xc>>yc;
cout<<"Enter radius of circle:";
cin>>radius;
brescircle(xc,yc,radius);
getch();
closegraph();
return 0;
}
void brescircle(int xc,int yc,int r)
{
int x=0,y=r;
int p=3-2*r;
while(x<y)
{

x++;
if(p<0)
{
p=p+4*x+6;
}
else
{
y--;
p=p+4*(x-y)+10;
}
drawcircle(xc,yc,x,y);

}
}
void drawcircle(int xc,int yc,int x,int y)
{
putpixel(xc+x, yc+y, GREEN);
putpixel(xc-x, yc+y, GREEN);
putpixel(xc+x, yc-y, GREEN);
putpixel(xc-x, yc-y, GREEN);
putpixel(xc+y, yc+x, GREEN);
putpixel(xc-y, yc+x, GREEN);
putpixel(xc+y, yc-x, GREEN);
putpixel(xc-y, yc-x, GREEN);
}
