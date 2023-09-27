#include <iostream>
#include <cmath>
#define eps 1e-9
using namespace std;
typedef struct
{
    double x;
    double y;
}Point;
double area(Point a,Point b,Point c)
{
    return a.x*b.y+c.x*a.y+b.x*c.y-c.x*b.y-a.x*c.y-b.x*a.y;
}
int main()
{
    Point a,b,c,tar;
    while(cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y>>tar.x>>tar.y)
    {
        double sum=abs(area(a,b,c));
        double cmp=abs(area(a,b,tar))+abs(area(a,c,tar))+abs(area(b,c,tar));
        if(fabs(sum-cmp)<eps)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}