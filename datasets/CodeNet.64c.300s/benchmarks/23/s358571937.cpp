#include <bits/stdc++.h>
#define ll long long
using namespace std;

// GCD, LCM
ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}
 
int main()
{
    int a,b;
    cin>>a>>b;

    cout<<a*b<<" "<<a*2+b*2<<endl;
 
    return 0;
}
