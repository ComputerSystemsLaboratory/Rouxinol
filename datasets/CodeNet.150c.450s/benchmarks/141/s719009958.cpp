#include<iostream>
using namespace std;
int main()
{
    float x1,y1,x2,y2,x3,y3,x,y,a,b,c;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x>>y)
    {
        a=((y-y2)*(x-x1)-(y-y1)*(x-x2))*((y3-y2)*(x3-x1)-(y3-y1)*(x3-x2));
        b=((y-y3)*(x-x2)-(y-y2)*(x-x3))*((y1-y3)*(x1-x2)-(y1-y2)*(x1-x3));
        c=((y-y3)*(x-x1)-(y-y1)*(x-x3))*((y2-y3)*(x2-x1)-(y2-y1)*(x2-x3));
        if(a>0&&b>0&&c>0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}