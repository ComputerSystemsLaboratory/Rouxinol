#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
// #pragma GCC optimize("O2")
typedef long long int ll;
typedef long double ld;
typedef map <ll,ll> mm;
typedef vector <ll> mv;
typedef pair <ll,ll> mp;
typedef set <ll> ms;
typedef multiset <ll> mms;
typedef queue <ll> mq;
typedef deque <ll> mdq;
typedef stack <ll> mst;
typedef priority_queue <ll> mpq;
typedef priority_queue <ll, vector<ll>, greater<ll> > mmh;
typedef complex<double> cd;
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<ll,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define flush cout.flush();
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define pb(v) push_back(v)
#define lb(v) lower_bound(v)
#define ub(v) upper_bound(v)
#define cn continue
#define forl(i,n) for(ll i=0;i<n;i++)
#define forlr(i,n) for(ll i=n-1;i>=0;i--)
#define rev(s) reverse(s.begin(),s.end())
void swap(ll &a,ll &b)
{
	ll tmp=a;
	a=b;
	b=tmp;
}
ll atoistring(string s)
{
	stringstream lol(s);
	ll x;
	lol>>x;
	return x;
}
void pv(mv v)
{
	forl(i,v.size())
	{
		cout<<v[i]<<" ";
	}
	cout<<"\n";
}
void pa(ll *v,ll size)
{
	forl(i,size)
	{
		cout<<v[i]<<" ";
	}
	cout<<"\n";
}
void removeDups(mv &v) {
	sort(all(v));
	mv::iterator it = unique(v.begin(), v.end());
	v.resize(distance(v.begin(), it));
}
// ll facs[], facsinv[];
// ll nck(ll N,ll K,ll mod)
// {
// 	if(N<K)
// 	{
// 		return 0;
// 	}
// 	return (((facs[N]*facsinv[N-K])%mod)*facsinv[K])%mod;
// }
inline ld kthRoot(ld n, ll k) {
	return pow(k, (1.0 / k) * (log(n) / log(k)));
}
inline bool isSqr(ll x) {
	ll sqr = sqrt(x);
	return (sqr * sqr == x);
}
ll power(ll x,ll y,ll p)
{
	ll res=1;
	x=x%p;
	while(y>0)
	{
		if(y&1)
		{
			res=(res*x)%p;
		}
		y=y>>1;
		x=(x*x)%p;
	}
	return res;
}
void checkmod(ll &x,ll mod)
{
	if(x>=mod)
	{
		x%=mod;
	}
}
ll ncr(ll n, ll r, ll mod) {
	ll ans = 1;
	forl(i,min(r,n - r)) {
		ans *= n - i;
		checkmod(ans,mod);
		ans *= power(i+1, mod - 2,mod);
		checkmod(ans,mod);
	}
	return ans;
}
ll sumofgp(ll a,ll n,ll m)
{
	// n = number of terms - 1
	if(n<0)
	{
		return 0;
	}
	if(n==0)
	{
		return 1;
	}
	if(n==1)
	{
		return (1+a)%m;
	}
	ll ans;
	if(n%2)
	{
        ans=(1+a)*sumofgp((a*a)%m,(n-1)/2,m);
	}
    else
    {
        ans=1+((a*(1+a))%m)*sumofgp((a*a)%m,n/2-1,m);
    }
    return ans%m;
}
ll power_of_2_not_less(ll n)
{
	if(!n)
	{
		return 1;
	}
	n--;
	n |= n>>1;
	n |= n>>2;
	n |= n>>4;
	n |= n>>8;
	n |= n>>16;
	n |= n>>32;
	n++;
	return n;
}
ll mod = 1e9 + 7;
// void checktime()
// {
// 	struct timespec ts;
// 	printf("Running Program\n");
// 	clock_gettime(CLOCK_MONOTONIC_RAW,&ts);
// 	long double st=ts.tv_nsec/(1e9)+ts.tv_sec;
// 	// Call Funcn Here
// 	clock_gettime(CLOCK_MONOTONIC_RAW,&ts);
// 	long double en=ts.tv_nsec/(1e9)+ts.tv_sec;
// 	printf("Program ended\nTime = %Lf\n",en-st);
// }
mv adj[100005], v1, v2;
bool vis[100005];
ll ans[100005];
mdq dq;

void BFS(ll x) {
	dq.push_back(x);
	vis[x] = 1;
	while(!dq.empty()) {
		ll y = dq.front();
		dq.pop_front();
		forl(i,adj[y].size()) {
			if(vis[adj[y][i]]) cn;
			vis[adj[y][i]] = 1;
			ans[adj[y][i]] = y;
			dq.push_back(adj[y][i]);
		}
	}
}

void thisIsMain() {
	ll n, m;
	cin>>n>>m;
	forl(i,m) {
		ll x, y;
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	BFS(1);
	forl(i,n - 1) if(!ans[i + 2]) {
		cout<<"No\n";
		return ;
	}
	cout<<"Yes\n";
	forl(i,n - 1) cout<<ans[i + 2]<<"\n";
}

int main(void)
{
	fastio
	ll t = 1;
	// cin>>t;
	while(t--) thisIsMain();
	return 0;
}