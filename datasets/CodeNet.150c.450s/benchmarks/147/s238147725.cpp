#pragma GCC optimize ("Ofast")
#include "bits/stdc++.h"
	
#define int long long
#define double long double 
#define PI 3.141592653589793
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
// Use for file I/O;
#define FIN string _fname = "paintbarn"; \
			string _is = _fname + ".in", _os = _fname + ".out"; \
			freopen(_is.c_str(), "r", stdin); \
			freopen(_os.c_str(), "w", stdout);

using namespace std;

const int INF = 4e18 + 10;
const int INF2 = 2e18 + 10;
const int INF3 = 2e10;
const int MAXN = 305;
const int LOGN = 19;
const int MOD = 1e9 + 7;
const int EPS = 1e-9;
const int MULT = 2e5;
const int MCNST = MOD * MOD * 8;

int32_t main() {
	FAST;

	int n;
	cin >> n;
	int sq = 1;
	for (int i = 1; i <= n; i++) {
		while (i >= (sq + 1)*(sq + 1)) sq++;
		int cnt = 0;
		
		for (int x = 1; x <= sq; x++) {
			for (int y = 1; y <= sq; y++){
				if (x*x + y*y + 1 + x*y + y + x > i) break;
				for (int z = 1; z <= sq; z++) {
					int t = x*x + y*y + z*z + x*y + y*z + x*z;
					if (t == i) cnt++;
					if (t >= i) break;
				}
			}
		}
		cout << cnt << '\n';
	}
}