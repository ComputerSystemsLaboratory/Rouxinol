#include<bits/stdc++.h>
using namespace std;
#define nl '\n' 
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define pii pair <int,int>
ll m=1000000007;

int main()
{
	fast;
	unordered_map<ll,ll>m;
	ll sum=0;
	int n;cin>>n;
	while(n--)
	{
		ll x;cin>>x;
		m[x]++;
		sum+=x;
	}
	int qq;cin>>qq;
	while(qq--)
	{
		ll b,c;cin>>b>>c;
		ll count=m[b];
		m[b]=0;
		m[c]+=count;
		sum-=count*b;
		sum+=count*c;
		cout<<sum<<nl;
	}
}