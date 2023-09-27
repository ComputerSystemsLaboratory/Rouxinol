#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

typedef long long ll;
const ll mod=1e9+7;
const int N=200000;

void Run()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
ll a[N];
int main()
{
    Run();
    int n;
    cin>>n;
    map<ll,ll>mp;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
		ll x;
        cin>>x;
		mp[x]++;
		sum+=x;
    }
    int q;
    cin>>q;
    while(q--){
		ll a,b;
		cin>>a>>b;
		sum-=mp[a]*a;
		sum+=mp[a]*b;
		mp[b]+=mp[a];
		mp[a]=0;
		cout<<sum<<endl;
    }
}
