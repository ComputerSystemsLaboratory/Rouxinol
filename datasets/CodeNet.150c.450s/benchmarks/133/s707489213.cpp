#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define F first
#define S second
#define pss pair<string,string>
#define pcc pair<char,char>
#define pll pair<ll,ll>
#define pii pair<int,int>
#define piii pair<int,pii>
#define vi vector<int>
#define vii vector<pii>
#define pb push_back
#define vs vector<string>
#define vl vector<ll>
#define vs vector<string>
#define vll vector<pll>
#define vss vector<pss>
#define vcc vector<pcc>
#define MP make_pair
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,n) for(int i=n-1;i>=0;i--)
#define Very_fast std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const int N = 2e4+5;
const int mod=1e9+7;
const int INF=0x3f3f3f3f;
inline ll gcd(ll a,ll b){if(b==0)return a;else return gcd(b,a%b);}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
inline ll lowbit(ll x){return (x&-x);}
inline ll kissme(ll x,ll y)
{
	ll res=1;
	if(x==0)return 1;
	if(x==1)return y;
	res=kissme(x/2,y);
	res=res*res%mod;
	if(x%2==1)res=res*y%mod;
	return res;
}
int c[N],a[400][N],n,ans,t,day[N];
signed main()
{
	Very_fast;
	cin>>n;
	for(int i=0;i<26;i++)cin>>c[i];
	rep(i,n)
	rep(j,26)cin>>a[i][j];
	rep(i,n)
	{
		cin>>t;t--;day[t]=i+1;
		ans+=a[i][t];
		rep(j,26)ans-=c[j]*(i-day[j]+1);
		cout<<ans<<"\n";
	}
	return 0;
}