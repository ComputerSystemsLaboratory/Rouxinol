#include <bits/stdc++.h>
using namespace std;

#define fs first
#define sc second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, n) for (int i = 0; i < n; ++i)
#define pb emplace_back

using pii = pair<int, int>;
using vi = vector<int>;
using lint = long long;

const int inf = 1001001001;
const lint linf = 1001001001001001001ll;
const int mod = 1e9 + 7;
const int dx[]{0, 1, 0, -1, -1, -1, 1, 1}, dy[]{1, 0, -1, 0, -1, 1, -1, 1};

template<typename T> inline bool chmin(T &a, T b) { if (a > b) { a = b; } return a > b; }
template<typename T> inline bool chmax(T &a, T b) { if (a < b) { a = b; } return a < b; }
template<typename T> inline void print(const T &x, string s = "\n") { cout << x << s; }
template<typename T> inline void print(const vector<T> &v, string s = " ") 
{ rep(i, v.size()) cout << v[i] << (i + 1 == v.size() ? "\n" : s); }
inline bool inside(int y, int x, int H, int W) { return 0 <= y && y < H && 0 <= x && x < W; }
inline lint in() { lint x; std::cin>>x; return x; }
/*
#include <bits/stdc++.h>
using namespace std;
 */
struct BIT {
	vector<int> v;
	int n;

	BIT() { init(); }
	BIT(int size) :n(size){ init(); }

	void init() {
		v.clear();
		v.resize(n + 1, 0);
	}

	int sum(int i, int idx = 1) {
		idx--; idx *= -1; i += idx;
		int ret = 0;
		while (i) {
			ret += v[i];
			i -= i & -i;
		}
		return ret;
	}

	void add(int i, int x, int idx = 1) {
		idx--; idx *= -1; i += idx;
		while (i <= n) {
			v[i] += x;
			i += i & -i;
		}
	}
};

int main() {
	int n = in(), q = in();
	BIT beet(n);

	rep(_, q) {
		int a = in(), b = in(), c = in();
		//print(beet.v);
		if (a)
			cout << beet.sum(c) - beet.sum(b - 1) << endl;
		else 
			beet.add(b, c);
	}
}