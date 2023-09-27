#include <bits/stdc++.h>
#define range(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, a) range(i, 0, a)
using namespace std;
const int INF = sizeof(int) == sizeof(long long) ? 1e18 : 1e9;
const int MOD = 1000000007;
const long double EPS = 1e-8;

int n;
string f[110];

int main() {
	while (cin >> n, n) {
		rep (i, n) cin >> f[i];
		int cnt = 0;
		bool left = false, right = false, up = false;
		rep (i, n) {
			if (f[i][0] == 'l') left = !left;
			if (f[i][0] == 'r') right = !right;
			if (left == right && !up == left) {
				cnt++;
				up = !up;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

