#include <iostream>

using namespace std;

long long gcd(long long a, long long b)
{
    if(b==0)    return a;
    return gcd(b,a%b);
}

long long lcm(long long a, long long b )
{
    return a*b/gcd(b,a%b);
}

int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        cout << gcd(a,b) << ' ' << lcm(a,b) << endl;
    }
    return 0;
}