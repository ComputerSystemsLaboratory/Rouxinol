#include <bits/stdc++.h>
#define range(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, a) range(i, 0, a)
using namespace std;
const int INF = sizeof(int) == sizeof(long long) ? 1e18 : 1e9;
const int MOD = 1000000007;
const long double EPS = 1e-8;

int main() {
	int n, r;
	while(cin >> n >> r, n) {
		vector <int> yama;
		rep (i, n) yama.push_back(n - i);
		rep (i, r) {
			int p, c;
			cin >> p >> c;
			rep (j, c) {
				int tmp = yama[p + c - 2];
				yama.erase(yama.begin() + p + c - 2);
				yama.insert(yama.begin(), tmp);
			}
		}
		cout << yama.front() << endl;
	}
	return 0;
}
