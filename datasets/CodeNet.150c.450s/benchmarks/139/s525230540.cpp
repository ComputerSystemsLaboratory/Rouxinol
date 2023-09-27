// ######      ###      #######    #######    ##     #     #####        ###     ##### //
// #     #    #   #          #        #       # #    #    #     #      #   #     ###  //
// #     #   #     #        #         #       #  #   #   #       #    #     #    ###  //
// ######   #########      #          #       #   #  #   #           #########    #   //
// #     #  #       #     #           #       #    # #   #    ####   #       #    #   //
// #     #  #       #    #            #       #     ##   #    #  #   #       #        //
// ######   #       #   #######    #######    #      #    #####  #   #       #    #   //


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
typedef pair<ll, ll> ppl;
#define ain(a,n) for(ll i=0;i<(n);++i)	cin>>(a)[i];
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define loop(i,n) for(ll i=0;i<(n);++i)
#define FOR(i,a,b) for(ll i=(a);i<=(b);++i)
#define FORD(i,a,b) for(ll i=(a);i>=(b);--i)
#define cases ll T=0;cin>>T;while(T--)
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define END "\n"
#define pb push_back
#define mp make_pair
#define go(c,itr) for(auto itr=(c).begin(); itr!=(c).end(); ++itr)
#define back(c,itr) for(auto itr=(c).rbegin(); itr!=(c).rend(); ++itr)
#define PI 3.14159265359
#define inf 9e18
#define MOD 1000000007
#define MODU 998244353
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MAXN 100005
const string alpha = "abcdefghijklmnopqrstuvwxyz";
const ll N = 1e8;
ll binexp(ll a, ll b, ll m) {
	a %= m;
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a % m;
		a = a * a % m;
		b >>= 1;
	}
	return res;
}
ll modinvfermat(ll a, ll m)
{
	return binexp(a, m - 2, m);
}
void task(bool flag)
{
	if (flag)
		cout << "YES\n";
	else
		cout << "NO\n";
}
ll lcm(ll a, ll b)
{
	return ((1LL * a * b) / (__gcd(a, b)));
}
vvl adj(MAXN);
vl vis(MAXN), par(MAXN, -1);
void addedge()
{
	ll a, b;
	cin >> a >> b;
	adj[a].pb(b);
	adj[b].pb(a);
}
void bfs(ll x)
{
	queue<ll> q;
	q.push(x);
	while (!q.empty())
	{
		ll node = q.front();
		q.pop();
		vis[node] = 1;
		for (auto child : adj[node])
		{
			if (vis[child] == 0)
			{
				par[child] = node;
				vis[child] = 1;
				q.push(child);
			}
		}
	}
}
signed main() {

	fast
	ll n, m;
	cin >> n >> m;
	loop(i, m)	addedge();
	bfs(1);
	bool ok = 1;
	FOR(i, 1, n)
	{
		if (vis[i] == 0)
		{
			ok = 0;
			break;
		}
	}
	if (ok)
	{
		cout << "Yes\n";
		FOR(i, 2, n)	cout << par[i] << END;
	}
	else
	{
		cout << "No\n";
	}




	return 0;
}