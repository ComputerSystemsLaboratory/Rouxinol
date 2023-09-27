//Practice more and more
//learn for better
#define bn begin()
#define en end()
#define mx 5000010
#define pb push_back
#define PI (2.0*acos(0.0))
#define ALL(a) a.begin(),a.end()
#define rb(a,b,c) for(int a=b;a<=c;++a)
#define rep(a,b) for(int a=0;a<b;++a)
#define fastio ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int>  vi;
typedef vector<ll>   vll;
int main()
{
ios::sync_with_stdio(false);
cin.tie(NULL);
	ll a,b,n,i,t,tmp,sum=0,k;
	map<ll,ll> mp;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a;
		mp[a]++;
		sum+=a;
	}
cin>>n;
while(n--)
{
	cin>>a>>b;
	k=mp[a];
	if(a<b)
	{
		sum=sum+b*k-a*k;
		cout<<sum<<endl;
		mp[b]=k+mp[b];
		mp[a]=0;
	}
	else if(a>b)
	{
		sum=sum-(a-b)*k;
		cout<<sum<<endl;
		mp[b]=k+mp[b];
		mp[a]=0;
	}
	else
	cout<<sum<<endl;
}

	return 0;
}