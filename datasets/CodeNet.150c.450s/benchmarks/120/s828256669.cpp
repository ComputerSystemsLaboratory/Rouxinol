#include<bits/stdc++.h>
#define rep(i, x) for(ll i = 0; i < x; i++)
#define all(a) (a).begin(),(a).end()
using ll = long long;
using ld = long double;
using namespace std;
const ll INF = 1000000000000000000;
const ll mod = 1000000007;
const ld pi = 3.141592653589793238;
//printf("%.10f\n", n);

ll res0[1234567], test[12][1234567];
signed main() {
    while(true){
	ll n, x, l, q, ans = 0; cin >> n >> x;
	if(n == 0 && x == 0){ break; }
	rep(i, 1234566){
	    res0[i] = 0;
	}
	rep(h, n) {
		rep(i, x) {
			cin >> test[h][i];
			if (test[h][i] == 0) { res0[i]++; }
		}
	}
	for (int i = 0; i <= (1 << n); i++) {
		vector<ll> sep = { }; ll cnt = 0;
		vector<ll> cn(x);
		for (int j = 0; j <= n - 1; j++) {
			if ((i & (1 << j)) > 0) {
				sep.push_back(j);
			}
		}
		rep(h, sep.size()) {
			rep(j, x) {
				if (test[sep[h]][j] == 1) { cn[j]++; }
				else { cn[j]--; }
			}
		}
		rep(i, x) {
			cnt += max(res0[i] + cn[i], n - res0[i] - cn[i]);
		}
		ans = max(ans, cnt);
	}
	cout << ans << endl;
    }
    return 0;
}
