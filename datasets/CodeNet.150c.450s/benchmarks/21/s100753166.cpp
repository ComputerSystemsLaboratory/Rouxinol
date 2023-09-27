#include <bits/stdc++.h>
#define ll long long
using namespace std;

// GCD, LCM
ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}
 
int main()
{
    int x;
    cin>>x;

    cout<<x*x*x<<endl;
 
    return 0;
}
