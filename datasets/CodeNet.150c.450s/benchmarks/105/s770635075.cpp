#define fi first
#define se second
#define mp make_pair
#define pb push_back

#define LOCAL 1

#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#define dbg(...) cout<<#__VA_ARGS__ ": ["; for(auto e: __VA_ARGS__){cout<<e<<", ";} cout<<"]\n"
#define dbg1(...) cout<<#__VA_ARGS__ " "<< __VA_ARGS__ 
#else
#define dbg(...) 1;
#define dbg1(...) 1;
#endif

typedef long long ll;
typedef unsigned long long ull;
constexpr int R=5e5+69, INF=2e9+6969;

int qq;

int main()
{
	scanf("%d", &qq);
	while(qq--)
	{
		ll n,t[R];
		string s;
		scanf("%lld", &n);
		for(int i=0;i<n;++i) scanf("%lld", &t[i]);
		cin >> s;
		vector <ll> base;
		base.clear();
		bool ok=1;
		for(int i=n-1;i>=0;--i)
		{
			ll x = t[i];
			for(ll e: base) x = min(x,e^x);
			if(x==0) continue;
			if(s[i]=='0') base.pb(x);
			else
			{
				ok=0;
				break;
			}
		}
		puts(ok ? "0" : "1");
	}
	return 0;
}
