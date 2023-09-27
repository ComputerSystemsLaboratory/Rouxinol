#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/*ll digit(ll a)
{
    ll cnt=0;
    while(a>0)
    {
        if(a%10==4 || a%10==7)cnt++;
        a/=10;
    }
    return cnt;
}*/
int main()
{
    ll n,i,j,sum=0,a,b;
    map<ll,ll>mp;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>n;
        mp[n]++;
        sum+=n;
    }
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>j>>b;
        ll t=mp[j];
        if(t>0){
        sum-=t*j;
        sum+=t*b;
        mp[j]=0;
        mp[b]+=t;}
        cout<<sum<<endl;
    }
    mp.clear();
    return 0;
}
