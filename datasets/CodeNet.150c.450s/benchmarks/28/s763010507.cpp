#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<bitset>
#include<cstdlib>
#include<cmath>
#include<set>
#include<list>
#include<deque>
#include<map>
#include<queue>
#define ll long long
using namespace std;
ll a[100009],k,j,i,n;
ll check(ll p)
{
    int i=0;
    for (j=0; j<k; j++)
    {
        ll s=0;
        while (s+a[i]<=p)
        {
            s+=a[i];
            i++;
            if (i==n)
            {
                return n;
            }
        }
    }
    return i;
}
int solve()
{
    ll left=0;
    ll right=1000000000;
    ll mid;
    while (left<right)
    {
        mid=(left+right)/2;
        if (check(mid)>=n)
        {
            right=mid;
        }
        else
        {
            left=mid+1;
        }
    }
    return right;
}
int main()
{
    cin>>n>>k;
    for (i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll ans=solve();
    cout<<ans<<endl;
}
