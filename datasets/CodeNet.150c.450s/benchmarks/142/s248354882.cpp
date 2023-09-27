#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main()
{
    ll n,i,j,a,b,c,k,v[200005];
    cin>>n>>k;
    for(i=1;i<=n;i++)cin>>v[i];
    b=1;
    for(i=1;i<=k;i++)b*=v[i];
    for(i=k+1;i<=n;i++)
    {
        if(v[i-k]>=v[i])cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}
