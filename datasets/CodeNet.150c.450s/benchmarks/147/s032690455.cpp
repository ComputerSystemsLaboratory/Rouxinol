// ######      ###      #######    #######    ##     #     #####        ###     ##### //
// #     #    #   #          #        #       # #    #    #     #      #   #     ###  //
// #     #   #     #        #         #       #  #   #   #       #    #     #    ###  //
// ######   #########      #          #       #   #  #   #           #########    #   //
// #     #  #       #     #           #       #    # #   #    ####   #       #    #   //
// #     #  #       #    #            #       #     ##   #    #  #   #       #        //
// ######   #       #   #######    #######    #      #    #####  #   #       #    #   //

// #pragma GCC optimize(2)
// #pragma GCC optimize(3)
// #pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
// #pragma GCC target("avx,avx2,fma")
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
#define MAXN 200005
const string alpha = "abcdefghijklmnopqrstuvwxyz";
const ll N = 1005;
const long double epsilon = 1e-9;
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

signed main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	fast
	ll n;
	cin >> n;
	vl ans(n + 1, 0);
	FOR(x, 1, 100)
	{
		FOR(y, 1, 100)
		{
			FOR(z, 1, 100)
			{
				ll val = (binexp(x + y, 2, inf) + binexp(y + z, 2, inf) + binexp(z + x, 2, inf)) / 2;
				if (val <= n)
					++ans[val];
			}
		}
	}
	FOR(i, 1, n)	cout << ans[i] << END;



// #ifndef ONLINE_JUDGE
// 	cout << "\nTime Elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " sec\n";
// #endif
	return 0;
}
