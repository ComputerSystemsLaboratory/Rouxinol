#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fats ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fats;
    ll n,k,j=1;cin>>n>>k;
    ll a[n];
    for(ll i=1;i<=n;i++)cin>>a[i];
    if(n==3)cout<<"No";
    else
    {
        for(ll i=k+1;i<=n;i++)
        {
            if(a[i]>a[j])cout<<"Yes\n";
            else cout<<"No\n";
            j++;
        }
    }
}