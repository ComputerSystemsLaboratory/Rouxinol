#include<cstdio>
#include<iostream>
using namespace std;
long long GCD(long long a,long long b)
{
    if(a==0&&b==0)
        return 0;
    if(a==0) return 1;
    if(b==0) return a;
    else return GCD(b,a%b);
}
int main()
{
    long long x,y;
    while(cin>>x>>y)
    {
        long long ans1=GCD(x,y);
        long long ans2=(x*y)/ans1;
        cout<<ans1<<" "<<ans2<<"\n";
    }
	return 0;
}