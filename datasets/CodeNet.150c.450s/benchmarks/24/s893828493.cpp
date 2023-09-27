#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const ll INF = (ll)1000000007 * 1000000007;
const double PI = 3.14159265358979;
const double E = 2.718281828459045;
const double root2 = sqrt(2);
typedef pair<int, int> P;
typedef unsigned int ui;
int main() {
	ll n, m;
	while (cin >> n >> m) {
		if (n == 0)break;
		pair<ll,ll> p[10000];
		int D, P;
		for (ll i = 0; i < n; i++) {
			cin >> D >> P;
			p[i] = make_pair(P, D);
		}
		sort(p, p + n);
		ll count = 0;
		for (ll i = n - 1; i >= 0; i--) {
			ll x = min(p[i].second, m);
			m -= x; p[i].second -= x;
			count += p[i].first*p[i].second;
		}
		cout << count << endl;
	}
	return 0;
}

