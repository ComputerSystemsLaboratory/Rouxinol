#include<iostream>
using namespace std;
long long gcd(long long x,long long y)
{
    if(y==0)
        return x;
    return gcd(y,x%y);
}
int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        long long d=gcd(a,b);
        a/=d;
        b/=d;
        long long l=a*b*d;
        cout<<d<<" "<<l<<endl;
    }
}