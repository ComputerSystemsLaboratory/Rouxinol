#include<bits/stdc++.h>
// Begin Header {{{
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using Graph = vector<vector<ll>>;
#define rep(i,n) for(ll i=0; i<n; i++)
#define loop(i, j, n) for(ll i=j; i<n; i++)
#define all(x) (x).begin(), (x).end()
constexpr int INF  = 0x3f3f3f40;
const long long mod=2e9+7;
const long double PI = acos(0);
// }}} End Header
int main() {
	ll n;
	cin >> n;
	vector<ll> ans(n+1);
	for(ll x=1; x*x<n; x++){
		for(ll y=1; y*y<n; y++){
			for(ll z=1; z*z<n; z++){
				ll k = x*x+y*y+z*z+x*y+y*z+z*x;
				if(k <= n) ans[k]++;
			}
		}
	}
	loop(i, 1, n+1) cout << ans[i] << endl;
	return 0;
}
