#include<bits/stdc++.h>
#define ll  long long int
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define inf 10000000LL
#define fast_io	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mod 1000000007
#define range 100001
#define lg 22
using namespace std;
int main()
{
	ll n,x,y,s=0,q;
	cin>>n;
	ll A[range]={0};
	
	for(ll i=1;i<=n;i++)
	{
		cin>>x;
		A[x]++;
		s+=x;
	}
	cin>>q;
	for(ll i=1;i<=q;i++)
	{
		cin>>x>>y;
		A[y]+=A[x];
		s+=y*A[x]-x*A[x];
		A[x]=0;
		cout<<s<<endl;
	}

//	cout<<s<<endl;
}