#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;

int main() {
	int n;
	ll m;
	while(cin >> n >> m, n||m) {
		ll dist[11] = {};
		rep(i, n) {
			int d, p;
			cin >> d >> p;
			dist[p] += d;
		}
		for(int i=10; i>0 && m>0; i--) {
			ll l = min( dist[i], m );
			dist[i] -= l;
			m -= l;
		}
		ll res = 0;
		for(int i=1; i<=10; i++) {
			res += i * dist[i];
		}
		cout << res << endl;
	}
	return 0;
}