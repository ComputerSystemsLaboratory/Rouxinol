#define  _CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
#pragma comment (linker, "/STACK:526000000")

using namespace std;
typedef string::const_iterator State;
#define eps 1e-11L
#define MAX_MOD 1000000007LL
#define GYAKU 500000004LL

#define MOD 998244353LL
#define seg_size 262144*2LL
#define pb push_back
#define mp make_pair
typedef long long ll;
#define REP(a,b) for(long long (a) = 0;(a) < (b);++(a))
#define ALL(x) (x).begin(),(x).end()

unsigned long xor128() {
	static unsigned long x = 123456789, y = 362436069, z = 521288629, w = time(NULL);
	unsigned long t = (x ^ (x << 11));
	x = y; y = z; z = w;
	return (w = (w ^ (w >> 19)) ^ (t ^ (t >> 8)));
}

void init() {
	iostream::sync_with_stdio(false);
	cout << fixed << setprecision(10);
}

#define int ll
void solve() {
	while (true) {
		int n, a, b, c, x;
		cin >> n >> a >> b >> c >> x;
		if (n == 0) return;
		vector<int> inputs;
		REP(i, n) {
			int d;
			cin >> d;
			inputs.push_back(d);
		}
		reverse(ALL(inputs));
		int ok = -1;
		for (int q = 0; q <= 10000; ++q) {
			if (inputs.back() == x) {
				inputs.pop_back();
				if (inputs.size() == 0) {
					ok = q;
					break;
				}
			}
			x = a * x + b;
			x %= c;
		}
		cout << ok << endl;
	}
}
#undef int

int main() {
	init();
	solve();
}
