#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll gcd(ll a,ll b)
{

   return b==0?a:gcd(b,a%b);
}
int main()
{
    ll a,b;
    while(cin>>a>>b)
    {
        ll t = gcd(a,b);
        cout << t << " " << a*b/t << endl;
    }

}

