#include<iostream>
#include<cstdio>
using namespace std;
int a,b;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        int x=gcd(a,b);
        int y=a/x*b;
        printf("%d %d\n",x,y);
    }
}