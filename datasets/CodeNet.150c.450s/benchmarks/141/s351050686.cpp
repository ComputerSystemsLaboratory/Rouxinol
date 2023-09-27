#include <iostream>
using namespace std;

void fun(float a, float b, float c, float d, float e, float f)
{
    float u,v;
    v = (c*d-a*f)/(b*d-a*e);
    u = (c-b*v)/a;
    if (u>0 && v>0 && (u+v) <=1)
        cout <<"YES"<< endl;
    else
        cout <<"NO"<< endl;
}

int main()
{
    float x1,y1,x2,y2,x3,y3,xp,yp;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp)
    {
        if (x2-x1 != 0)
        {
            fun(x2-x1,x3-x1,xp-x1,y2-y1,y3-y1,yp-y1);
        }
        else
        {
            fun(x3-x1,x2-x1,xp-x1,y3-y1,y2-y1,yp-y1);
        }
    }
   return 0;
}