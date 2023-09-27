#define _CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define FOR(i, m, n) for(int i=(m); i<(n); ++i)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define Cout(x) cout << (x) << endl
#define dump(x) cerr << #x << " = " << (x) << endl;
typedef long long LL;
typedef vector<int> VI;
typedef vector<long long> VL;
typedef vector<string> VS;
typedef vector<vector<int>> VVI;
typedef pair<int, int> PII;
const int inf = (int)1e9;
const long long mod = 998244353LL;
const double pi = acos(-1.0);

int main() {
	int n, s;
	while (cin >> n >> s && (n || s)) {
		int ans = 0;
		for (int bit = 0; bit < (1 << 10); bit++) {
			bitset<10> b = bit;
			if (b.count() == n) {
				int sum = 0;
				rep(i, 10)sum += i * b.test(i);
				ans += sum == s;
			}
		}
		Cout(ans);
	}
}
