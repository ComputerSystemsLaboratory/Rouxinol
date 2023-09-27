#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
 
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define fbo find_by_order
#define ook order_of_key
 
typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef long double ld; 
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;

struct gausselim
{
	ll cnt[61][2];
	int rank;
	ll cyc[61];
	ll tmp;
	void init()
	{
		for(int i = 0; i < 61; i++)
		{
			cyc[i] = cnt[i][0] = cnt[i][1] = 0;
		}
		rank = tmp = 0;
	}
	void addval(ll x)
	{
		for(int i = 0; i < 61; i++)
		{
			cnt[i][(x>>i)&1]++;
		}
	}
	void add(ll x)
	{
		tmp|=x;
		for(int i = 60; i >= 0; i--)
		{
			if(x&(1LL<<i))
			{
				if(cyc[i]==0)
				{
					cyc[i] = x;
					rank++;
					break;
				}
			}
			x = min(x, (x^cyc[i]));
		}	
	}
};

void solve()
{
	int n; cin>>n;
	vi a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	string s; cin>>s;
	gausselim G;
	G.init();
	for(int i=n-1;i>=0;i--)
	{
		if(s[i]=='0')
		{
			G.add(a[i]);
		}
		else
		{
			int oldrank = G.rank;
			G.add(a[i]);
			if(G.rank!=oldrank)
			{
				cout<<1<<'\n'; return ;
			}
			else
			{
				continue;
			}
		}
	}
	cout<<0<<'\n';
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin>>t;
	while(t--) solve();
}
