#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <cmath>
#include <iostream>
using namespace std;
void DDAline(int x1, int y1, int x2, int y2);

int main() {
  int gdriver = DETECT, gmode;
  initgraph( & gdriver, & gmode, " ");

  float x1, y1, x2, y2;
  cout<<"Enter the value of x1 and y1 :  ";
  cin>>x1>>y1;
  cout<<"Enter the value of x2 and y2:  ";
  cin>>x2>>y2;

  DDAline( x1, y1, x2, y2) ;

  getch();
  closegraph();
  return 0;
}
void DDAline(int x1, int y1, int x2, int y2){
    int dx, dy, step, x, y;
    float m, xi, yi;
    dx = abs(x1 - x2);
    dy = abs(y1 - y2);
    step = max(dx, dy);
    m = dy * 1.0 / dx;
    xi = round(dx * 1.0 / step );
    yi = round(dy * 1.0 / step );
    x = x1, y = y1;
    for(int i = 0; i < step ; i++){
        putpixel(x, y, GREEN);
        x += xi;
        y += yi;
        delay(10);
    }
}
