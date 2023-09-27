#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <set>
#include <map>
#define sf scanf
#define pf printf
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
const int inf=1e9;
int n,k;
ll t[maxn];
int check(ll p)
{
    int i=0;
    for(int j=0;j<k;j++)
    {
        ll s=0;
        while(s+t[i]<=p)
        {
            s+=t[i];
            ++i;
            if(i==n)return n;
        }
    }
    return i;
}
ll solve()
{
    ll l=1,r=10000*100000;
    ll ans=r;
    while(r>=l)
    {
        ll m=(l+r)/2;
        ll v=check(m);
        if(v>=n)ans=m,r=m-1;
        else l=m+1;
    }
    return ans;
}
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>t[i];
    ll ans=solve();
    cout<<ans<<endl;
    return 0;
}

