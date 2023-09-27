#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll  a[500000];
ll sum=0;
int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll k;
        cin>>k;
        sum+=k;
        a[k]++;
    }
    ll q;
    cin>>q;
    for(ll i=0;i<q;i++)
    {
        ll b,c;
        cin>>b>>c;
        ll x=a[b];
        sum=sum-x*b+x*c;
        a[b]=0;
        a[c]=a[c]+x;
        cout<<sum<<endl;
    }
    return 0;
}