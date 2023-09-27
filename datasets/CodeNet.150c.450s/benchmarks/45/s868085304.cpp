#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define per(i,a,b) for(int i=(a);i>=(b);i--)
const int mod = 1e9 + 7;
const int maxn = 1e5 + 10;
const int inf = 0x3f3f3f3f;
ll qpow(ll a,int b) {
	ll ans=1;
	while(b) {
		if(b&1) ans=ans*a%mod;
		b>>=1;
		a=a*a%mod;
	}
	return ans;
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	ll m,n;
	cin>>m>>n;
	cout<<qpow(m,n)<<'\n';
	return 0;
}

