#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct axis
{
    double x,y;

};
double area(axis a,axis b,axis c)
{
    double are=(a.x* (b.y-c.y)-a.y*(b.x-c.x)+(b.x * c.y- c.x * b.y))/2;
    return abs(are);
}
int main()
{
    axis a,b,c,x;
    while(cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y>>x.x>>x.y)
    {

        double areatot=area(a,b,c),areaa=area(a,b,x),areab=area(b,c,x),areac=area(c,a,x);
        if(areatot==(areaa+areab+areac))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }


    return 0;
}