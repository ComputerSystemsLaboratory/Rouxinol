#include<iostream>
#include<vector>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)
using ll = long long;
using P = pair<int, int>;
#include<algorithm>
#include<math.h>
#include<map>
#include<queue>
#include<set>

int main() {
	ll n;
	cin >> n;
	map<ll,ll>m;
	ll ans(0);
	rep(i, n) {
		ll buf;
		cin >> buf;
		m[buf]++;
		ans += buf;
	}
	
	ll q;
	cin >> q;
	vector<ll>qans(q);
	rep(i, q) {
		ll b, c;
		cin >> b >> c;
		ll cnt = m[b];
		ans -= ll(b) * ll(cnt);
		ans += ll(c) * ll(cnt);
		//cout << ans;
		qans[i] = ans;
		m[b] -= cnt;
		m[c] += cnt;

	}
	rep(i, q) {
		cout << qans[i] << endl;
	}
	return 0;
}