#include<iostream>
using namespace std;
long long gcd(long long a, long long b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}
long long lcm(long long a, long long b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    long long x,y;
    while(cin>>x>>y)
    {
        cout<<gcd(x,y)<<" "<<lcm(x,y)<<endl;
    }
}

