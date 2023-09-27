#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int max(long long a,long long b)
{
    if(a>=b)
    return 1;
    else
    return 0;
}
int main()
{
    long long x,y,t,gcd,lcm,a,b;
    while(scanf("%lld%lld",&x,&y)!=EOF)
    {
        if(!max(x,y))
        {
            t=x;x=y;y=t;
        }
        a=x;
        b=y;
        while(x%y)
        {
            x=x%y;
            if(!max(x,y))
        {
            t=x;x=y;y=t;
        }
        }
        gcd=y;
        lcm=a/gcd;
        lcm=lcm*b;
        cout<<gcd<<' '<<lcm<<endl;
    }
    return 0;
}