#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main(){
    int gd=DETECT ,gm, s;
    initgraph(&gd,&gm, (char*)" ");
    cout<< "1.translation\n2.Rotation\n "<<endl;
    cout<<"Selection : ";
    cin>>s;
    switch(s){
    case 1:
        {
            int x1,y1,x2,y2;
            int tx,ty;
            cout<<"Enter Points : ";
            cin>>x1>>y1>>x2>>y2;
            cout<<"Rectangle before translation"<<endl;
            setcolor(GREEN);
            rectangle(x1,y1,x2,y2);
            setcolor(BLUE);
            cout<<"Enter Translation Factor : ";
            cin>>tx>>ty;
            cout<<"Rectangle After translation"<<endl;
            rectangle(x1+tx,y1+ty,x2+tx,y2+ty);
            getch();
            break;

        }
    case 2:
        {
            int x1,y1,x2,y2;
            int a;
            cout<<"Enter Points : ";
            cin>>x1>>y1>>x2>>y2;
            setcolor(RED);
            rectangle(x1,y1,x2,y2);
            cout<<"Angle of rotation";
            cin>>a;
            a=(a*3.14)/180;
            //a=a*(3.1416/180);
            long xr=abs(x1+(x2-x1)*cos(a))-abs((y2-y1)*sin(a));
            long yr=abs(y1+(x2-x1)*sin(a))-abs((y2-y1)*cos(a));
            long xr1=abs(x2+(x2-x1)*cos(a))-abs((y2-y1)*sin(a));
            long yr2=abs(y2+(x2-x1)*sin(a))-abs((y2-y1)*cos(a));

            setcolor(GREEN);
            rectangle(xr,yr,xr1,yr2);


            getch();
            break;
        }
    default:
        {
            cout<<"Invalid Selection "<<endl;
            break;
        }
    }
    closegraph();
    return 0;
}
