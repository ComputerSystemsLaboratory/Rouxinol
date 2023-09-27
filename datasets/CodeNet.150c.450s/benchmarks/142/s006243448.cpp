#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define fs first
#define se second
#define M 1000000007
#define pii pair<long long,long long>
 
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
unordered_map<char,pii>dir;
ll D=1e9;
 
bool check(ll x,ll y,ll n,ll m){
	return (x>=0 && y>=0 && n>x && m>y);
}

int main()
{
	ios_base::sync_with_stdio(false);
	
	ll n,k;
	cin>>n>>k;
	vector<ll>arr(n),ans;
	for(ll i=0;i<n;i++)
		cin>>arr[i];

	for(ll i=k;i<n;i++)
	{
		if(arr[i]>arr[i-k])
			ans.pb(1);
		else
			ans.pb(0);

	}

	for(auto i:ans)
	{	if(i==1)
			cout<<"Yes";
		else
			cout<<"No";

	cout<<endl;}



}

