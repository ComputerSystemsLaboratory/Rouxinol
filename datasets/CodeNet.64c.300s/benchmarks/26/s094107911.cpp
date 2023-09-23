#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
using namespace std;

int main()
{
    long long a1,p,b,a;
    while(cin>>a>>b)
    {
        a1 = a%mod;
        p = 1;
        while (b > 0)
        {
            if (b%2==1)
            {
                p *= a1;
                p = p%mod;
            }
            b /= 2;
            a1 = (a1 * a1)%mod;
        }
        cout<<p<<endl;
    }
    return 0;
}