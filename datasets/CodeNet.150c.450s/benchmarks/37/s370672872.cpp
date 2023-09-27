#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,d,e,f;

    while(cin>>a>>b>>c>>d>>e>>f)
    {
        float x1=c*e-b*f;
        float y1=a*f-c*d;
        float z1=a*e-b*d;

        float x,y;

        if(a==0 && d==0) x=0;

        else x=x1/z1;

        if(b==0 && e==0) y=0;

        else y=(c-a*x)/b;

        if(x==-0.00) x=0.00;

        printf("%.3f %.3f\n",x,y);
    }

    return 0;
}